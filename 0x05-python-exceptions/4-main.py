#!/usr/bin/python3
list_division = __import__('4-list_division').list_division
list1 = [12, 2, 4]
list2 = [2, "2", 0]
res = list_division(list1, list2, len(list1))
print(res)
print("------")
list1 = [12, 2, 4, 10]
list2 = [2, "2", 0]
res = list_division(list1, list2, len(list1))
print(res)
