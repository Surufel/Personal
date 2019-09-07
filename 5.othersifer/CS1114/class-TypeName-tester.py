'''
tester/demo for TypeName class
'''

from TypeNameClass import TypeName


def main():
    
    var1 = TypeName( 13, "hello" )
    var2 = TypeName( -132, "welcome" )

    currentDatamember_1_value = var1.getDataMember_1()
    if var1.getDataMember_1() == var2.getDataMember_3():
        print "curious but true..."

    listOfTypeNameThings = []
    listOfTypeNameThings.append( var2 )
    listOfTypeNameThings.append( var1 )

    for thing in listOfTypeNameThings:
        print thing

main()
 
