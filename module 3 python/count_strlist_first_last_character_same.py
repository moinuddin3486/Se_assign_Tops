'''• Write a Python program to count the number of strings where the string 
length is 2 or more and the first and last character are same from a given 
list of strings.'''

m=0
i=["aba","123","121","pop","pmp"]

for k in (i):
    if len(k)>=2 and k[0]==k[-1]:
        print(k)
        m+=1
print(m)


    
