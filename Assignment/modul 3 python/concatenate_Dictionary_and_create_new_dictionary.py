'''• Write a Python script to concatenate following dictionaries to create a
new one.'''
d1={101:"Tops",102:"Technologies",103:999,104:120}
d2={'A':122,'B':909,'C':'Ahmedabad','D':7878}
d3={}
for i in(d1,d2):
    d3.update(i)
print(d3)
    
