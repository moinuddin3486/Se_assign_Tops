'''• Write python program that swap two number with temp variable and 
without temp variable.'''
a=10
b=20



print("Before swaping".center(40,"*"))
print("A : ",a)
print("B : ",b)

print("After waping".center(40,"*"))
c=a
a=b
b=c
print("A : ",a)
print("B : ",b)

print("Without temp variable".center(40,"-"))

a=10
b=20
print("Before swaping".center(40,"*"))
print("A : ",a)
print("B : ",b)

print("After waping".center(40,"*"))
a=a+b
b=a-b
a=a-b

print("A : ",a)
print("B : ",b)




