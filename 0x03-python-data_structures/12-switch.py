#!/usr/bin/python3
def swap(a, b):
    a = a + b
    b = a - b
    a = a - b
    return a, b

a = 5
b = 10

# Inserted code to switch values
a, b = swap(a, b)

print("a:", a)
print("b:", b)

