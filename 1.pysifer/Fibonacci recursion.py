#
#

def recurse(n):
    if (n == 0):
        return 0
    elif (n == 1):
        return 1
    elif (n > 1):
        return recurse(n-1) + recurse(n-2)
    else:
        return -1

