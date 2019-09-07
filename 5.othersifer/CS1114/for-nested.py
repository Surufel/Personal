'''
some defs for shapes filled with random numbers
'''

import random
from __future__ import print_function


### FIRST ATTEMPT (nested version)
def solidRandomRectangle(numRows, numCols):
    '''
draws a rectangle in which each line is made of random digits
shows the line number nicely also
    '''
    for row in range( numRows ):
        print( "%3i ===>> " % (row+1), end='' )
        for column in range( numCols ):
            print( random.randint(0,9), end='' )
        print()
# Notice that we are using nested for loops
# Good thinking
# However, should we have?		

def solidRandomTriangle(baseWidth):
    '''
draws a right triangle in which each line is made of random digits
shows the line number nicely also
for example:
  1 ===>>  3
  2 ===>>  1 2
  3 ===>>  3 7 2
  4 ===>>  0 6 5 1
  5 ===>>  1 5 3 6 8
Here the baseWidth is 5
    '''
    for row in range( baseWidth ):
        print( "%3i ===>> " % (row+1), end='' )
        for column in range( row+1 ):
            print( random.randint(0,9), end='' )
        print()

# Again, notice that we are using nested for loops
# Good thinking
# However, should we have?		

#--------------------------------------------------------------

### SECOND ATTEMPT (using procedural problem solving)
###
### There is still "officially" nested looping going
### on but because you were trained to do procedural 
### problem solving, you would (hopefully) not
### have done that. You would have done this:


def solidRandomRectangle(numRows, numCols):
    '''
draws a rectangle in which each line is made of random digits
shows the line number nicely also
    '''
    for row in range( numRows ):
        print( "%3i ===>> " % (row+1), end='' )
        drawONElineOfRandomSingleDigits( numCols )

        
def solidRandomTriangle(baseWidth):
    '''
draws a right triangle in which each line is made of random digits
shows the line number nicely also
for example:
  1 ===>>  3
  2 ===>>  1 2
  3 ===>>  3 7 2
  4 ===>>  0 6 5 1
  5 ===>>  1 5 3 6 8
Here the baseWidth is 5
    '''
    for row in range( baseWidth ):
        print( "%3i ===>> " % (row+1), end='' )
        drawONElineOfRandomSingleDigits( row+1 )

def drawONElineOfRandomSingleDigits( width ):
    '''
draw a line width long of randomly chosen single digits
leaves the curson on the nest line
    '''
    for column in range( width ):
        print( random.randint(0,9), end='' )
    print()



def main():
    
    print( "RECTANGLE" )
    solidRandomRectangle(15, 10)
    print()

    print( "TRIANGLE" )
    solidRandomTriangle(12)
    print( )


main()


