"""
Surufel Bot
Sifer Aseph
v3
"""

import hlt
import logging

game = hlt.Game("Surufel")
logging.info("Starting my Surufel bot!")

while True:
    game_map = game.update_map()

    # largest_planet is a floating number.
    largest_planet = max(planet.radius for planet in game_map.all_planets())
    for planet in game_map.all_planets():
        if largest_planet == planet.radius:
            thePlanet = planet

    command_queue = []

    for ship in game_map.get_me().all_ships():
        # If the ship is docked
        if ship.docking_status != ship.DockingStatus.UNDOCKED:
            # Skip this ship
            continue

        # We can sort the planets by distance before iterating over them. The faster we can get to a planet and dock, the faster we’ll get new ships to command. You can get the distance from each ship to each map entity, sort by distance, then find which of the closest entities is a planet.
        entities_by_distance = game_map.nearby_entities_by_distance(ship)
        nearest_planet = None
        for distance in sorted(entities_by_distance):
            nearest_planet = next((nearest_entity for nearest_entity in entities_by_distance[distance] if isinstance(nearest_entity, hlt.entity.Planet)), None)

            if nearest_planet:
                break

        # Rather than having all your ships travel to the same single planet, you could diversify and send ships to different planets. Without diversifying, if the single planet you’re attempting to conquer has already been conquered by an enemy in the midst of your voyage, you will have wasted many turns. But with this strategy, you have a better chance of landing on a vacant planet. You can get all the planets, get all the ships, and then assign them to each other in the map’s default order on a round robin basis.
        planets = game_map.all_planets()
        ships = game_map.get_me().all_ships()
        for current in range(0, len(ships)):
            ships[current].navigate(ship.closest_point_to(thePlanet), game_map, speed=hlt.constants.MAX_SPEED/2)
            #ships[current].navigate(ship.closest_point_to(planets[current%len(planets)]), game_map, speed=hlt.constants.MAX_SPEED/2)

        # For each planet in the game (only non-destroyed planets are included)
        for planet in game_map.all_planets():
            # If the planet is owned
            if planet.is_owned():
                # Skip this planet
                continue

            # If we can dock, let's (try to) dock. If two ships try to dock at once, neither will be able to.
            if ship.can_dock(planet):
                # We add the command by appending it to the command_queue
                command_queue.append(ship.dock(planet))
            else:
                # If we can't dock, we move towards the closest empty point near this planet (by using closest_point_to)
                # with constant speed. Don't worry about pathfinding for now, as the command will do it for you.
                # We run this navigate command each turn until we arrive to get the latest move.
                # Here we move at half our maximum speed to better control the ships
                # In order to execute faster we also choose to ignore ship collision calculations during navigation.
                # This will mean that you have a higher probability of crashing into ships, but it also means you will
                # make move decisions much quicker. As your skill progresses and your moves turn more optimal you may
                # wish to turn that option off.
                navigate_command = ship.navigate(
                    ship.closest_point_to(planet),
                    game_map,
                    speed=int(hlt.constants.MAX_SPEED/2),
                    ignore_ships=True)
                # If the move is possible, add it to the command_queue (if there are too many obstacles on the way
                # or we are trapped (or we reached our destination!), navigate_command will return null;
                # don't fret though, we can run the command again the next turn)
                if navigate_command:
                    command_queue.append(navigate_command)
            break

    game.send_command_queue(command_queue)
