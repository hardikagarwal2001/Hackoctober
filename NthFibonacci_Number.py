'''
Given a number N. Print the Fibonacci number of N.
This is the direct recursion method which will lead time limit exceed for large values 
i.e if value of n >32 it take morethan 1 sec to execute as it is computing  lots of value again and again
                   fib(5)   
                     /                \
               fib(4)                fib(3)   
             /        \              /       \ 
         fib(3)      fib(2)         fib(2)   fib(1)
        /    \       /    \        /      \
  fib(2)   fib(1)  fib(1) fib(0) fib(1) fib(0)
  /     \
fib(1) fib(0)
As you can see fib(2) is calculating 3 times and fib(1) 4 times so we can simplify by storing there value somewhere
'''
# import sys
# sys.stdin = open('input.txt','r')
# sys.stdout = open('output.txt','w')
# from itertools import permutations as p
# from itertools import combinations as c


def fib(n):
	if  n ==1:
		return 0
	elif n==2:
		return 1
	else:
		return fib(n-1)+fib(n-2)

t   = int(input())
print(fib(t))

'''

O(2^n) time and O(n) space Complexity
Input:
5
Output:
3

Input:
1
Output:
0



'''