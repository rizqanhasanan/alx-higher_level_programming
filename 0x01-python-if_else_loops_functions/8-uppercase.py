#!/usr/bin/python3
def uppercase(str):
    data = 0
    for i in str:
        if ord(i) >= ord('a') and ord(i) <= ord('z'):
            data = 32
        else:
            data = 0
        print('{:c}'.format(ord(i) - data), end="")                      print()
