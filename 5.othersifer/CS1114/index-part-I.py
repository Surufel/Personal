
x = [1,2,3,1,7,4,3]

try:
    posOfJoe = x.index('joe')
    notFound = False
except ValueError:
    notFound = True

if notFound:
    print "'joe' not found in x"
else:
    print "'joe' found at index " + str(posOfJoe) + " in x"
    
