'''• Write a Python qwprogram to get a string made of the first 2 and the last 
2 chars from a given a string. If the string length is less than 2, return 
instead of the empty string.'''



a=input("Enter your string : ")

if len(a)>2:
    m=(a[:2]+a[-2::1])
    print("This is new string : ",m)
else:
    print("The string is empty")
    


