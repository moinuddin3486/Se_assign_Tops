#• Write a Python program to convert a list of tuples into a dictionary

'''l=[("x",101),("y",102),("z",103),("A",123)]

d=dict(l)
print(d)'''
d={'x': 101, 'y': 102, 'z': 103, 'A': 123}

m={'c':122,'k':345,'u':999}
z={"q":123,"t":567,"u":90}
{c.update(i) for i in(d,m,z)}
print(c)

