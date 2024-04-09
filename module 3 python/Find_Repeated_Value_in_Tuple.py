#• Write a Python program to find the repeated items of a tuple.

tpl=(10,20,30,10,20,560,22,21,55,7,65,12,12,55,1,21,12.12,21,12.12)
tpl=list(tpl)
m=[]
for i in tpl:
    if tpl.count(i)>1:
        if i not in m:
                m.append(i)

m=tuple(m)
print(m)



