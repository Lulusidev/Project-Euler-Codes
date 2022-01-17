#!/usr/bin/env python3
def multi_of_3or5(x):
    sig=0
    for i in range(0,x):
        if (i%3==0 or i%5==0):
            sig += i
    return sig
print(multi_of_3or5(1000))

