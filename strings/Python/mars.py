#!/bin/python3
"""
Letters in some of the SOS messages are altered by cosmic radiation during transmission. Given the signal received by Earth as a string, , determine how many letters of Sami's SOS have been changed by radiation.

For example, Earth receives SOSTOT. Sami's original message was SOSSOS. Two of the message characters were changed in transit.

"""
import math
import os
import random
import re
import sys

# Complete the marsExploration function below.
def marsExploration(s):
    count = 0
    r = len(s)//3
    target = "SOS"*r
    for i, j in zip(s, target):
        if i !=j:
            count+=1
    return count

    

if __name__ == '__main__':
   

    s = input()
    print(sum([c != "SOS"[i % 3] for i, c in enumerate(s)]))
   # result = marsExploration(s)

   
