#!/usr/bin/python3
def swap(a, b):
    a = a + b
    b = a - b
    a = a - b
    return a, b

a = 10
b = 89

a, b = swap(a, b)

print(f"a={a} - b={b}")

