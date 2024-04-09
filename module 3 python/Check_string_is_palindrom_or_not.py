'''• Write a Python function that checks whether a passed string is 
palindrome or not'''
a=input("Enter your string here : ")
if a==a[::-1]:
    print("This string is palindrom")
else:
    print("This string is not palindrom")

