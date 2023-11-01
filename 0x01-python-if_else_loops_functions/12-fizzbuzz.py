#!/usr/bin/python3
def fizzbuzz():
    for i in range(1, 101):
        if (i % 3 == 0) and (i % 5 == 0):
            r = "FizzBuzz"
        elif (i % 3 == 0):
            r = "Fizz"
        elif (i % 5 == 0):
            r = "Buzz"
        else:
            r = i
        if i < 100:
            print("{} ".format(r), end="")
        else:
            print("{} ".format(r))

fizzbuzz()
