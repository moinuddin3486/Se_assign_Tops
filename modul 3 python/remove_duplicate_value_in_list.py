'''l=[]
n=int(input("Enter n number  : "))
for i in range(n):
    l.append(int(input("Enter value of list : ")))
print(l)

for i in l:'''

'''#l=[1,2,3,4,5,6,7,8,8,9,1,1]
l=[1,2,3,5,7,2,4,1,8,4,3,21,20,21,1,2]
#   0 1 2 3 4 5 6 7 8 9 0 1   2   3  4 5 

i=0
m=0
while i<len(l):
     m+=i
     while m<len(l):
         if l[i]==l[m]:
             l.pop(m)
         m+=1
        
     i+=1    

            
print(l)'''
'''l=[1,2,3,5,7,2,4,1,8,4,3,21,20,21,1,2]
result=[]
for i in l:
    if i not in result:
        result.append(i)
        
print(result)'''
l=[1,2,3,5,7,2,4,1,8,4,3,21,20,21,1,2]

i=0
m=0
while i<len(l):
     m=m+i
        while m<len(l):
                 if l[i]==l[m]:         
                     l.pop(m)
             m+=1
         i+=1 
    
    

print(l)
