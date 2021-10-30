2'''
The GCD of two or more numbers is the largest positive number that divides all the numbers that are considered.
For example, the GCD of 6 and 10 is 2 because it is the largest positive number that can divide both 6 and 10.
'''

# Naive approach
# Traverse all the numbers from min(A, B) to 1 and check whether the current number divides both A and B.
# If yes, it is the GCD of A and B.

def GCD(a,b):
    m = min(a, b)
    gcd = 1
    for i in range(m,0,-1):
        if a%i == 0 and b%i == 0:
            gcd = i
            return gcd
    return 1
'''    
Time Complexity
The time complexity of this function is O(min(A, B)).
'''

# Better Approach
'''
Euclid's algorithm
The idea behind this algorithm is . It will recurse until
gcd(a,b) = gcd(b,a%b) , It will recurse until a%b == 0

'''

def gcd_eucliden(a,b):
    if b == 0 :
        return a
    else:
        return gcd_eucliden(b,a%b)

'''    
Example
If a = 16 and B = 10, then the GCD is computed as follows:

GCD(16, 10) = GCD(10, 16 % 10) = GCD(10, 6)
GCD(10, 6) = GCD(6, 10 % 6) = GCD(6, 4)
GCD(6, 4) = GCD(4, 6 % 4) = GCD(4, 2)
GCD(4, 2) = GCD(2, 4 % 2) = GCD(2, 0)
Since B = 0,  will return 2.

Time complexity
The time complexity is O(log(max(A, B)))
'''
