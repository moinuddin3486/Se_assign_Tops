'''Write a Python function that takes two lists and returns true if they have 
at least one common member.'''


def check_list(list1,list2):
    
    for i in list1:
        for m in list2:
            if i==m:
                return True      
        break
    
    
    

l=[1,2,3,4,"Tops"]
m=[4,5,6,1,2,6,"technologies"]


print(check_list(l,m))

