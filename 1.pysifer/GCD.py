# Sifer Aseph
# GCD
# Figure 1.5

def Euclid(a, b):
    if b == 0:
        return a
    return Euclid(b, a % b)
