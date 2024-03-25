'''• Write a Python function that takes a list of words and returns the length 
of the longest one.'''



def Max_word(l):
        m=l[0]
        
        for i in l :    
                if len(i) >len(m):
                    m=i

        print("Max word of string : ","(",m,")"," and lenght is : ",len(m))
             
   
l=["Moin","gaurav","Priyank","Tops technologies ahemdabad","Tops Technologies"]
Max_word(l)
