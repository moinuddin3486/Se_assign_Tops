#• Write a Python function to check whether a number is in a given range
n=int(input("Enter your n number : "))
s=int(input("Enter you starting range : "))
e=int(input("Enter your ending range  : "))

for i in range(s,e):
    if i==n:
        print("In the range ")
        break
        
else:
        print("Not in  range ")
    
        

