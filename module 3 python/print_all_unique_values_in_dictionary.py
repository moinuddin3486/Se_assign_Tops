#• Write a Python program to print all unique values in a dictionary
d={'a':10,'b':20,'c':30,'d':10,'e':20,'f':"Tops",'g':"Tops"}
u=[]
for i in (d.values()):
    if i not in u:
        u.append(i)
print("Unique values in the dictionary: ",u)
    
