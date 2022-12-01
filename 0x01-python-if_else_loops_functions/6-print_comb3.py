#!/usr/bin/python3
for uno in range(10):
    for dos in range(10):
        if uno < dos:
            print('{:d}{:d}'.format(uno, dos), end='')
            if uno < 8:
                print(', ', end='')
print()
