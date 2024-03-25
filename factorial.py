# Write a Python pr786ogram to get the Factorial number of given number.


fac=1
m=1

a=int(input("Enter N number  :  "))

while m<=a:
    fac=fac*m
    m+=1

print("The value of",a,"factorial is : ",fac)    
