#• Write a Python program to remove an empty tuple(s) from a list of tuples.
t=[(10,20,30),(),(40,50,60),(),(70,80,90,100),()]

for i in t:
    if i==():
        t.remove(i)
        
print("After remove empty tuple : ",t)
