a=input("Enter your  string : ")

if len(a) < 3:
    print("String of A : ",a)

if len(a) >=3 :
    if a.endswith("ing"):
        a=a+"ly"
        print("Sting of A : ",a)
        
    else:
        a=a+"ing"
        print("Sting of A : ",a)
        


        


 
