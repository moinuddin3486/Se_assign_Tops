
'''• Write a Python program to sum of three given integers. However, if
two values are equal sum will be zero.
'''

a,b,c=input("Enter a,b,c value : ").split()

print("The sum : 0" if a==b or b==c or c==a  else  int(a)+int(b)+int(c))
    
    

   
    

