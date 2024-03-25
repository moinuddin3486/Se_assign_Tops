'''• Write a Python program to count the number of characters (character 
frequency) in a string
'''

a=input("Enter your string : ")
b=input("Enter your find character : ")
m=0

for i in a:
    if  i==b:
         m+=1

print(b," : ",m)
