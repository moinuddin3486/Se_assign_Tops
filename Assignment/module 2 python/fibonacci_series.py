# • Write a Python program to get the Fibonacci series of given range.
n=int(input("Enter Number ; "))
x=0
y=1
z=0
while z<=n:
    print( z,end=" ,")
    x=y
    y=z
    z=x+y
