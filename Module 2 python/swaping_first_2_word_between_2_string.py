'''• Write a Python program to get a single string from two given strings, 
separated by a space and swap the first two characters of each string.
'''
     
a="ABCD"
b="EFGH"

print("Before swaping".center(40,"*"))
print("A : ",a)
print("B : ",b)

s=a[:2]
a=a.replace(a[:2],b[:2])
b=b.replace(b[:2],s[:2])

print("Afetr swaping".center(40,"*"))

print("A : ",a)
print("B : ",b)

