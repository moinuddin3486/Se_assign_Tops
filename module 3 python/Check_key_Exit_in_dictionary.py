#• How Do You Check The Presence Of A Key In A Dictionary?

d={'a':100,'b':200,'c':300,'d':400}
print(d.keys())
k=input("Enter key :")
if  k in d.keys():
    print("Present")
else:
    print("Not present")
