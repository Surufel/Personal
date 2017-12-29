#!/usr/bin/env python
# Sifer Aseph
# TopCoder: GreaterGameDiv2
# https://community.topcoder.com/stat?c=problem_statement&pm=13505

def calc(snuke, sothe):
    '''
    Cat Snuke and wolf Sothe are playing the Greater Game. The game is played with cards. Each card has a number written on it. There are 2N cards. The numbers on the cards are the integers between 1 and 2N, inclusive.

    At the beginning of the game, each player gets N of the cards and chooses the order in which he wants to play them. The game then consists of N turns. In each turn, both players play one of their cards simultaneously. The player who revealed the card with the larger number gets a point.

    You are given two int[]s: snuke and sothe. The elements of snuke are the numbers on the cards Snuke is going to play, in order. Similarly, the elements of sothe are the numbers on the cards Sothe is going to play, in order. Compute and return the number of points Snuke will have at the end of the game.
    '''
    score = 0
    for i in range(0, len(snuke)):
        if (snuke[i] > sothe[i]):
            score += 1

    return score

def main():
    print(calc([1,3], [4,2]))

if __name__ == '__main__':
    main()
