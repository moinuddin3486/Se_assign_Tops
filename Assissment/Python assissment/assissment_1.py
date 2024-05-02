
class Bank:
    def __init__(self):
        
       
        self.d={}
    def get_Data(self):
        
        name=input("Enter your name :")
        age=int(input("Enter your age : "))
        balance=int(input("Enter your opening balace : "))
        return {'name' :name,'age':age,'balance':balance}
    
    def call(self):
        
            self.key=int(input("Enter ac number : "))
            if self.key not in self.d.keys():
                self.d[self.key]=self.get_Data()
            else :
                print("Key alredy Exist")
                print("************************************************")
      
    def print(self):
        
        print(self.d)
        print("*****************************************************************************************************************")
    def serch(self):
        
        self.a=int(input("Enter account number : "))
        print(self.d[self.a])
        print("*********************************************************")
    def Balance(self):
        
        bal=0
        for k,v in self.d.items():
            bal+=v['balance']
        print("Total Amount in Bank: ",bal)
        print("************************************************")
    def withdraw(self):
        
        self.a=int(input("Enter ac number : "))
        if self.a  in self.d.keys():
                self.w=int(input("Enter your withdrow amount : "))
                if self.w<=self.d[self.a]['balance']:
                        self.d['balance']-=self.w
                else:
                        print("Insuficiant balance in your account ")
                        print("************************************************")
        else:
            print("Please enter valid account number ")
            print("************************************************")

    def credit(self):
        self.a=int(input("Enter ac number : "))
        if self.a  in self.d.keys():
                self.c=int(input("Enter Deposit amount : "))
                self.d[self.a]['balance']+=self.c
                
        else:
            print("Please enter valid account number ")
    def view_balance(self):
        self.a=int(input("Enter ac number : "))
        if self.a  in self.d.keys():
           
                print("Balance : ",self.d[self.a]['balance'])
                
        else:
            print("Please enter valid account number ")
               
b1=Bank()
while True :

    print("Welcome to Bank Management System ")

    print("1 Banker Role ")
    print("2 Customer Role")
    print("3 Exit")
    c=int(input("Enter your choice :"))

    if c==1:
        
        print("\n")
        print("WELCOME TO BANKERS APP")
        print("\n")
        print("_____________Operation Manu____________")
        while True:
            print("\n")
            print("1 Add Account ")
            print("2 View All Customer ")    
            print("3 Serch Customer ")
            print("4 Total Amount in Bank")
            print ("5 Exit ")
            c=int(input("Enter your choice "))
            if c==1:
                b1.call()
            elif c==2:
                b1.print()
            elif c==3:
                b1.serch()
            elif c==4:
                b1.Balance()
            elif c==5:
                print("THANKS FOR USING MY PROGRAMS")
                break
                break
            else:
                print("Select valid option ")
    elif c==2:
        print("\n")
        print("WELCOME TO CUSTOMER'S APPS")
        print("\n")
        print("_______Operation Manu_______")
        while True:
        
            print("1 Withdraw Amount")
            print("2 Deposit Amount")
            print("3 View balance ")
            print("4 Exit")
            c=int(input("Enter your choice "))
            if  c==1:
                b1.withdraw()
            elif c==2:
                b1.credit()
            elif c==3:
                b1.view_balance()
            elif c==4:
                print("THANKS FOR USING MY PROGRAM")
                print("*****************************************************************************************************************")
                break
            else:
                print("Select valid option ")
    elif c==3:
        print("THANKS FOR USING PYTHON PROGRAM")
        
        break
        
    else :
        print("Please enter valid choice ")
