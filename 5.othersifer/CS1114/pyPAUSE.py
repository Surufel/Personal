#!C:\Python26\python.exe
 
# pythonPAUSE.py 
#
# This is a python variation of the classic
# os.system("pause") hack
# and
# the "any key" joke
#
# author: etg
# last revision: 09/17/09

# now that you know the BIF raw_input() - use it
# instead of a non-platform-independent OS system call

from __future__ import print_function 

def pythonPAUSE():
    ''' etg's version of "Hit the an key to continue... '''
    raw_input('''
                STOP!
                He who would cross the Bridge of Death
                Must answer me
                These questions three
                Ere to the other side he...
                                             continue...
                                            
[press ye the any key to do thusly]                       ''')
    
def main():

    print( "\ndo what whatever needs to be done here" )
    print( "(in search of the Hello Grail...)" )

    pythonPAUSE()

# are we being executed?
if __name__ == '__main__':
    main()
    

