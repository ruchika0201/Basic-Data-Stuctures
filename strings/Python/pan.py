#!/bin/python3
#A pangram is a sentence or expression that uses all the letters of the alphabet.
import math
import os
import random
import re
import sys
import string
# Complete the pangrams function below.
def pangrams(s):
    d = dict.fromkeys(string.ascii_lowercase, 0)
    slist = list(s)
    for i in range(0, len(s)):
        if slist[i].isupper():
            slist[i] = slist[i].lower()
        if slist[i] in d:
            d[slist[i]]=1
    #print(d)
    res = all(x==1 for x in d.values())
    #print(res)
    if res == True:
        return "pangram"
    else:
        return "not pangram"
    
if __name__ == '__main__':
    
    s = input()

    result = pangrams(s)
    print(result)

    
