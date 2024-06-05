
'''• Write python p2ro0gram that user to enter only odd numbers, else will
raise an exception'''

while True:              
        try:
            num = int(input("Enter odd number: "))
            if num%2==0:
                m=0
            else:
                m=num
                break
            a=num/m
            print("Oddnumber entered.")
                
        except:
                    print("Your Entered Even Number Please Enter Odd Number ")
           
