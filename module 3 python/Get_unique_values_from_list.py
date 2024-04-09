#• Write a Python program to get unique values from a list

def Unique(list):
    list2=[]
    for i in list:
            if i not in list2:
                list2.append(i)
    print(list2)
    


l=[1,2,3,1,2,4,5,7,7,7,6,5,10,20,12,33,12,42,30,50,50]
Unique(l)
