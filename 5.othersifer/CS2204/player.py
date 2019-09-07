from util import *

class Player(object):
    """
    player class.

    To test your own machine player strategy, you should implement the ```make_decision()``` method.
    To test your implementation, you should modify the configy.py to set one or two player(s) as 'machine'
    """

    def __init__(self, id, name=None):
        self.points=0
        self.id=id
        self.name=name if name else 'player'+str(id)
        self.add = lambda val,rand: (val+rand) % 16
        self.replace = lambda val,rand: rand % 16
        self.skip = lambda val, rand: val

    def make_decision(self, four_bits, next_randoms, code_digits):
        """
        This function decide next move of the machine player.

        You should only modify '#Your Code is Here' to define your own machine player.
        To enable your machine player, please check & modify the configuration in config.py.

        Args:
            four_bits (int[]): the four bit number in the LED
            next_randoms (int[]): the next 3 random digits
            code_digits(int[]): 2 code digits.
        Returns:
            operation: [self.skip | self.add | self.replace]
        	selected: [0|1|2|3]
        """

        operation = self.skip
    	selected = 0

        # Test strategy by running: python ppm.py

        # Total Strategy

        # CASE 0 IF THERE IS NO ADJACENCY: IF RANDOM NUMBER MATCH, CONSIDER IT AN ADJACENCY, REPLACE
        if (any(four_bits.count(theBit) > 1 for theBit in four_bits) == False):
            for aBit in four_bits:
                if aBit == next_randoms[0]:
                    if four_bits.index(aBit) == 3:
                        selected = 2
                    elif four_bits.index(aBit) == 2:
                        selected = 3
                    elif four_bits.index(aBit) == 1:
                        selected = 2
                    elif four_bits.index(aBit) == 0:
                        selected = 1
            operation = self.replace
            return operation, selected

        # CASE 1: IF THERE IS NO ADJACENCY: IF NO RANDOM NUMBER MATCH, ADD
        if (any(four_bits.count(theBit) > 1 for theBit in four_bits) == False):
            operation = self.add
            selected = four_bits.index(max(four_bits))
            return operation, selected

        # CASE 2: ONE / CLOSE ADJACENCY AND RANDOM NUMBER MATCH, REPLACE
        if (any(four_bits.count(theBit) > 1 for theBit in four_bits)):
            startOffset = -1
            locationOfAdjacencies = []
            if next_randoms[0] == four_bits[0] or next_randoms[0] == four_bits[1] or next_randoms[0] == four_bits[2] or next_randoms[0] == four_bits[3]:
                while True:
                    try:
                        location = four_bits.index(next_randoms[0], startOffset + 1)
                    except ValueError:
                        break
                    else:
                        locationOfAdjacencies.append(location)
                        startOffset = location
        if four_bits[0] == four_bits[1]:
            operation = self.replace
            selected = 2
            return operation, selected
        if four_bits[1] == four_bits[2]:
            operation = self.replace
            selected = 3
            return operation, selected
        if four_bits[2] == four_bits[3]:
            operation = self.replace
            selected = 1
            return operation, selected
        if four_bits[0] == four_bits[2]:
            operation = self.replace
            selected = 1
            return operation, selected
        if four_bits[1] == four_bits[3]:
            operation = self.replace
            selected = 2
            return operation, selected

        # CASE 3: ONE / CLOSE ADJACENCY AND NO RANDOM NUMBER MATCH, ADD
        if (any(four_bits.count(theBit) > 1 for theBit in four_bits)):
            startOffset = -1
            locationOfAdjacencies = []
            if next_randoms[0] != four_bits[0] and next_randoms[0] != four_bits[1] and next_randoms[0] != four_bits[2] and next_randoms[0] != four_bits[3]:
                while True:
                    try:
                        location = four_bits.index(next_randoms[0], startOffset + 1)
                    except ValueError:
                        break
                    else:
                        locationOfAdjacencies.append(location)
                        startOffset = location
        if four_bits[0] == four_bits[1] and four_bits[2] < four_bits[3]:
            operation = self.add
            selected = 3
            return operation, selected
        elif four_bits[0] == four_bits[1] and four_bits[2] > four_bits[3]:
            operation = self.add
            selected = 2
            return operation, selected
        if four_bits[1] == four_bits[2] and four_bits[0] < four_bits[3]:
            operation = self.add
            selected = 3
            return operation, selected
        elif four_bits[1] == four_bits[2] and four_bits[0] > four_bits[3]:
            operation = self.add
            selected = 0
            return operation, selected
        if four_bits[2] == four_bits[3] and four_bits[0] < four_bits[1]:
            operation = self.add
            selected = 1
            return operation, selected
        elif four_bits[2] == four_bits[3] and four_bits[0] > four_bits[1]:
            operation = self.add
            selected = 0
            return operation, selected
        if four_bits[0] == four_bits[2] and four_bits[1] < four_bits[3]:
            operation = self.add
            selected = 3
            return operation, selected
        elif four_bits[0] == four_bits[2] and four_bits[1] > four_bits[3]:
            operation = self.add
            selected = 1
            return operation, selected
        if four_bits[1] == four_bits[3] and four_bits[0] < four_bits[2]:
            operation = self.add
            selected = 2
            return operation, selected
        if four_bits[1] == four_bits[3] and four_bits[0] > four_bits[2]:
            operation = self.add
            selected = 0
            return operation, selected

        # CASE 4: TWO / CLOSE ADJACENCY AND RANDOM NUMBER MATCH, REPLACE
        if (any(four_bits.count(theBit) > 1 for theBit in four_bits)):
            startOffset = -1
            locationOfAdjacencies = []
            if next_randoms[0] == four_bits[0] or next_randoms[0] == four_bits[1] or next_randoms[0] == four_bits[2] or next_randoms[0] == four_bits[3]:
                while True:
                    try:
                        location = four_bits.index(next_randoms[0], startOffset + 1)
                    except ValueError:
                        break
                    else:
                        locationOfAdjacencies.append(location)
                        startOffset = location
            if four_bits[0] == four_bits[1] == four_bits[2]:
                operation = self.replace
                selected = 3
                return operation, selected
            elif four_bits[1] == four_bits[2] == four_bits[3]:
                operation = self.replace
                selected = 0
                return operation, selected
            elif four_bits[0] == four_bits[1] == four_bits[3]:
                operation = self.replace
                selected = 2
                return operation, selected
            elif four_bits[0] == four_bits[2] == four_bits[3]:
                operation = self.replace
                selected = 1
                return operation, selected

        # CASE 5: THREE ADJACENCIES
        if (any(four_bits.count(theBit) > 1 for theBit in four_bits)):
            if four_bits[0] == four_bits[1] == four_bits[2] == four_bits[3]:
                operation = self.replace
                selected = 3
                return operation, selected

    	return operation, selected

        # Note, make sure strategy actually work first by actually running the program and trying out, comparing before trying to optimize or refactor code. Or you will cry.

        # Attention team: Please refer to experiment1checklist.pdf after all is said and done.

        # REFACTORABLE (one day) GALORE!
