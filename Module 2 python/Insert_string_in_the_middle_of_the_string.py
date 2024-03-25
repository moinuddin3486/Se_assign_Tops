#• Write a Python function to insert a string in the middle of a string.
def insert_middle(str1,str2):
    a=int(len(str1)/2)
    b=str1[:a]
    c=str1[a:]
    print(b+"",str2+" ",c)



str1=input("Enter your string : ")
str2=input("Enter the string for insert in the middle of the string  : ")

insert_middle(str1,str2)


