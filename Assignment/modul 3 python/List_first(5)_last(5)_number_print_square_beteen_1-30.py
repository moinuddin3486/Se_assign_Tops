'''• Write a Python program to generate and print a list of first and last 5 
elements where the values are square of numbers between 1 and 30.'''

l=[1,2,3,4,5,6,7,8,9,10,12,13,14,15,3,17,18,4,2]


L=(l[-5::1])
F=(l[:5])
N=[ ]
for i in F:
    m=i*i
    if m<=30:
        N.append(m)
else:
    for i in L:
        m=i*i
        if m<=30:
            N.append(m)

print(N)







