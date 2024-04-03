#• Write a Python program to map two lists into a dictionary

key=[1,2,3,4,5,6]
values=[101,201,301,401,501,601]
d1={}
for k,v in zip(key,values):
    d1[k]=v
print(d1)

print("second method".center(40,"*"))
d={k:v for k in key for v in values}
print(d)
