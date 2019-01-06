'''
Sifer Aseph
461. Hamming Distance

The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

Given two integers x and y, calculate the Hamming distance.
'''

class Solution:
    def convertToBit(self, number):
        binary = []
        while number > 0:
            binary.append(number % 2)
            number = number // 2
        
        return binary
    
    def hammingDistance(self, x, y):
        """
            :type x: int
            :type y: int
            :rtype: int
            """
        
        first = self.convertToBit(x)
        second = self.convertToBit(y)
        count = 0
        
        if len(first) > len(second):
            while (len(first) > len(second)):
                second.append(0)
        elif len(first) < len(second):
            while (len(first) < len(second)):
                first.append(0)
        
        if len(first) == len(second):
            for digit in range(len(first)):
                if first[digit] != second[digit]:
                    count += 1

        return count

test = Solution()

print (test.hammingDistance(1, 4))
