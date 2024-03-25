'''• Write a Python program that will return true if the two given integer 
values are equal or their sum or difference is 5.'''


def task(a,b):
  return (True if a==b or a+b==5 or abs(a-b)==5 else  False)


print(task(5,5))
print(task(10,20))
print(task(50,55))
 
 
 
