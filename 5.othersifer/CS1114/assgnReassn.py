'''
This program demonstrates reassignment to variables
'''

from __future__ import print_function

def main( ):
    
    value = 44
    # value now refers (or points) to 44 in RAM
    
    print( value )
  
    value = 45
    # value now refers (or points) to 45 in RAM
    # value does not now "contain" 45
    # where value points was changed by the assignment
    
    print( value )
  
main()





