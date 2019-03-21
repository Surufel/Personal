#
#

def iteration(n):
    if (n == 0):
        return 0
    elif (n == 1):
        return 1
    elif (n > 1):
        f_n0 = 0
        f_n1 = 1
        f_n2 = 2
        
        for i in range(3, n):
            f_n0 = f_n1 + f_n2
            f_n1 = f_n2
            f_n2 = f_n0
        
        return f_n0
    else:
        return -1
