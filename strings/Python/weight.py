#!/bin/python3

import math
import os
import random
import re
import sys
import string

# Complete the weightedUniformStrings function below.
def weightedUniformStrings(s, queries):
    count =1
    d = dict.fromkeys(string.ascii_lowercase)
    chrs = 97
    for i in range(0, 26):
        x = chr(chrs)
        d[x]= count
        chrs+=1
        count+=1
    slist = list(s)
    res = {}
    results = []
    weight = 0
    for i in range(0, len(s)):
        if i==0 or s[i]!=s[i-1]:
            weight = d[s[i]]
        else:
            weight = weight + d[s[i]]
        res[weight] = 1
    for q in queries:
        results.append("YES" if q in res else "NO")
    return results

    #print(res)
            




if __name__ == '__main__':
    

    s = input()

    queries_count = int(input())

    queries = []

    for _ in range(queries_count):
        queries_item = int(input())
        queries.append(queries_item)

    result = weightedUniformStrings(s, queries)
    print(result)
