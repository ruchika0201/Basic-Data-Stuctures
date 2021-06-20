#!/bin/python3
#John has collected various rocks. Each rock has various minerals embeded in it. Each type of mineral is designated by a lowercase letter in the range . There may be multiple occurrences of a mineral in a rock. A mineral is called a gemstone if it occurs at least once in each of the rocks in John's collection.

#Given a list of minerals embedded in each of John's rocks, display the number of types of gemstones he has in his collection.

#For example, the array of mineral composition strings . The minerals  and  appear in each composite, so there are  gemstones.
import math
import os
import random
import re
import sys

# Complete the gemstones function below.
def gemstones(arr):
    tot = len(arr)
    new_l = []
    res = []
    for i in range(0, tot):
        s = []
        s = list(arr[i])
        res.append(s)
    one_len = len(res[0])
    one_l = []
    one_l = res[0]
    count = 0
    flag=0
    for i in range(0, one_len):
        flag=0
        for j in range(1, tot):
            if one_l[i] in res[j]:
                continue
        else:
            count+=1
                

    print(count)
if __name__ == '__main__':


    n = int(input())

    arr = []

    for _ in range(n):
        arr_item = input()
        arr.append(arr_item)

    result = gemstones(arr)

