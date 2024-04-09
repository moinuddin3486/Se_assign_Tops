'''• Write a Python script to check if a given key already exists in a 
dictionary'''

d={1:10,2:20,3:30,4:40,5:50,6:120}

k=int(input("Enter key in the d :"))

if  k in d.keys():
    print("Key is present")
else:
    print("Key is not present")
