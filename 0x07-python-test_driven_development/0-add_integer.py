#!/usr/bin/python3
def add_integer(a, b=98):
    """Add two int"""
    result = 0
    if type(a) is not int and 
type(a) is not float:
        raise TypeError("a must be 
an integer")
    elif type(b) is not int and 
type(b) is not float:
        raise TypeError("b must be 
an integer")
    else:
        result = int(a) + int(b)
        return result
