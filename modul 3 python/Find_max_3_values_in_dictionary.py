#• Write a Python program to find the highest 3 values in a dictionary
d={'a':56,'b':77,'c':21,'d':99,'e':121,'f':66}
m=(sorted(d.values(),reverse=True))
print("3 highest value : ",m[:3])

