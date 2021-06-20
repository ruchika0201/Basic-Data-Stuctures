#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the hackerrankInString function below.
def hackerrankInString(s):
    main_list = ['h', 'a', 'c', 'k', 'e', 'r', 'r', 'a', 'n', 'k' ]
    si = list(s)
    count =0
    for i in range(0, len(s)):
        if si[i]==main_list[count]:
            count+=1
            if count == 10:
                return 'YES'
    return 'NO'

   



if __name__ == '__main__':
    #fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input())

    for q_itr in range(q):
        s = input()

        result = hackerrankInString(s)
        print(result)

       # fptr.write(result + '\n')

    #fptr.close()
