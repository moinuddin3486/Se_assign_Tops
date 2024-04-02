'''• Write a Python program to calculate surface volume and area of a 
cylinder'''
a=3**2
print(a)
from math import pi
R=float(input("Enter Radiant : "))
H=float(input("Enter height : "))
Volum=(pi)*(R**2)*(H)
Suface=(2*pi*(R**2))+(2*pi*R*H)
print("Volume : ",Volum)
print("Surface : ",Suface)
