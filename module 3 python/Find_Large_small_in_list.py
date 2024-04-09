'''• Write a Python function to get the largest number, smallest num and sum 
of all from a list.'''

l=[10,200,120,210,2000,999,1299.99,5,25,1999,2183,1,78,190,2500,710,390]

'''L=l[0]
n=0
S=l[0]
sum=0


a=len(l)


while n<a:
    if l[n]>L:
        L=l[n]
   
    elif l[n]<S:
      S=l[n]
      
    sum+=l[n]
    n=n+1
    


print("Smallest number : ",S)
print("Largest number : ",L)
print("The sum of list : ",sum)'''

print( "Large number of the list : ",max(l),
       "\n","Small number of the list : ",min(l),"\n","Sum of the list : ",sum(l))

