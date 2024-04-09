'''• Write a Python function that takes a list and returns a new list with unique 
elements of the first list.'''

def check_unique(l):
    m=[ ]
    for i in l:
        if i not in m:
            m.append(i)
    return m

list=[1,2,3,4,5,6,7,7,6,5,4,3,3,1,78,777,77,77,65,12,22,32,56,77,43,65]
print(check_unique(list))
