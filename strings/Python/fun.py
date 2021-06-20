#!/bin/python3
#In this challenge, you will determine whether a string is funny or not. To determine whether a string is funny, create a copy of the string in reverse e.g. . Iterating through each string, compare the absolute difference in the ascii values of the characters at positions 0 and 1, 1 and 2 and so on to the end. 
# If the list of absolute differences is the same for both strings, they are funny.
import math
import os
import random
import re
import sys
import string
# Complete the funnyString function below.
def funnyString(s):
    rev = s[::-1]
    rev = list(rev)
    ori = []
    revo = []
    slist = list(s)
    for i in range(0, len(s)):
        ori.append(ord(slist[i]))
        revo.append(ord(rev[i]))
    print(ori)
    print(revo)
    min_1 = []
    min_2 = []
    for i in range(1, len(s)):
        m = abs(ori[i]-ori[i-1])
        n = abs(revo[i]-revo[i-1])
        min_1.append(m)
        min_2.append(n)
    print(min_1)
    print(min_2)
    #min_1.sort()
    #min_2.sort()
    if min_1 == min_2:
        return "Funny"
    else:
        return "Not Funny"




    return rev
    

if __name__ == '__main__':
    
    q = int(input())

    for q_itr in range(q):
        s = input()

        result = funnyString(s)
        print(result)

      
