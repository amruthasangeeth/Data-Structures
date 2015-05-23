#!/usr/bin/python

n=int(input("Enter the number: "))
first=0
second=1
print first
print second
for c in range (0,n):
    third=first+second
    first=second
    second=third
    print third