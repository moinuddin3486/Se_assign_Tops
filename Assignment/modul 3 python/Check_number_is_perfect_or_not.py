#• Write a Python function to check whether a number is perfect or not.
def Check_perfect(a):

    sum=0
    for i in range(1,a):
        if a%i==0:
            sum+=i
    if sum==a:
            print(a," Is Perfect number ")
    else:
            print(a," Is not perfect number ")
            
              
Check_perfect(496)
