#• Why Do You Use the Zip () Method in Python?
l1=['a','b','c','d','e','f','g']
l2=[100,200,300,400,500,600,700]
d={}
for k,v in zip(l1,l2):
    d[k]=v
print(d)   
