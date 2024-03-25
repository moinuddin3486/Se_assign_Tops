#• How memory is managed in Python?

a=100
b=100
print(id(a))
print(id(b))


x=10
y=20
print("Before a : " ,id(a))
print("Before b : ",id(b))
x=30
y=50
print("After a : " ,id(a))
print("After b : ",id(b))

