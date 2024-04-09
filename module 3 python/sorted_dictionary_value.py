'''• Write a Python script to sort (ascending and descending) a dictionary by 
value'''

d={1:10, 4:20, 6:21, 3:11, 5:99 ,2:120}

print(dict(sorted(d.items(),key=lambda x:x[1])))
print(dict(sorted(d.items(),key=lambda x:x[1], reverse = True)))



