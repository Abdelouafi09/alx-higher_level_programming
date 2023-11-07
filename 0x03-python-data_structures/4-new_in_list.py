#!/usr/bin/python3
def new_in_list(my_list, idx, element):
    new_list = []
    if my_list is None:
        return

    for i in range(len(my_list)):
        new_list[i] = my_list[i]
    if (idx >= 0) | (idx < len(my_list)):
        new_list[idx] = element
    return new_list
