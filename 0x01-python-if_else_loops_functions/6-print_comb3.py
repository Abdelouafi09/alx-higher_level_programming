#!/usr/bin/python3
for i in range(9):
    for y in range(i+1,10):
        print("{}{}, ".format(i, y), end="")
    if range(i+2, 10) == range(10, 10):
       print("{}{}".format(i, y))
