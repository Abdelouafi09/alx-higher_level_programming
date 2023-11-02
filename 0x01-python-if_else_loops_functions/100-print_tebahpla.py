#!/usr/bin/python3
for a, A in zip(range(122, 96, -2), range(89, 64, -2)):
    print("{}{}".format(chr(a), chr(A)), end="")
