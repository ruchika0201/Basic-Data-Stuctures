#!/bin/python3
"""
In this challenge, you will be given a string. You must remove characters until the string is made up of any two alternating characters. When you choose a character to remove, all instances of that character must be removed. Your goal is to create the longest string possible that contains just two alternating letters.

As an example, consider the string abaacdabd. If you delete the character a, you will be left with the string bcdbd. Now, removing the character c leaves you with a valid string bdbd having a length of 4. Removing either b or d at any point would not result in a valid string.

Given a string , convert it to the longest possible string  made up only of alternating characters. Print the length of string  on a new line. If no string  can be formed, print  instead.

"""
import math
import os
import random
import re
import sys
from itertools import combinations 
# Complete the alternate function below.
def alternate(s):
    results=[]
    st=list(set(s))
    if len(st)<2:
        return 0
    else:
        combos=list(combinations(st,len(st)-2))
        print("Combos")
        print(combos)
        for i in combos:
            vals=[]
            temp=s
            for x in i:
                temp=temp.replace(x,"")
            print(temp)    
            for y in range(len(temp)-1):
                if temp[y]==temp[y+1]:
                    vals.append(False)
                else:
                    vals.append(True)
            if all(vals)==True:
                results.append(len(temp))
            else:
                results.append(0)

    return max(results)

if __name__ == '__main__':
    

    l = int(input().strip())

    s = input()

    result = alternate(s)
    print("Result is ")
    print(result)



    
