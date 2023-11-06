#!/usr/bin/python3
def replace_in_list(my_list, idx, element):
    if (idx >= 0) and (idx < len(my_list)):
        my_list[idx] = element
    return my_list

my_list = [1, 2, 3, 4, 5]
print("old {}".format(my_list))
idx = 3
new_element = 9
new_list = replace_in_list(my_list, idx, new_element)

print("original {}".format(my_list))
print("new {}".format(new_list))
replace_in_list(my_list, 0, 0)
print("0 {}".format(my_list))
replace_in_list(my_list, -1, -1)
print("-1 {}".format(my_list))
replace_in_list(my_list, 5, 100)
print("5 {}".format(my_list))
