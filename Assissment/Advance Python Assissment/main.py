from medicine import Medicine
from manager import Manager
from admin import Admin

def main():
    medicine=Medicine()
    manager=Manager()
    admin=Admin()

    while True:
        print("1. Pharmacy Manager")
        print("2. Admin")
        print("3. Exit")
        choice=input("Enter your choice: ")

        if choice=="1":
            print("1. Register")
            print("2. Login")
            print("3. Add Medicine")
            print("4. View Medicine")
            print("5. Delete Medicine")
            choice=input("Enter your choice: ")

            if choice=="1":
                name=input("Enter your name: ")
                pharmacy_name=input("Enter your pharmacy name: ")
                manager.register(name, pharmacy_name)
                print("Registered successfully!")
            elif choice=="2":
                name=input("Enter your name: ")
                pharmacy_name=input("Enter your pharmacy name: ")
                if manager.login(name, pharmacy_name):
                    print("Logged in successfully!")
                else:
                    print("Invalid credentials!")

            elif choice=="3":
                name=input("Enter medicine name: ")
                qty=int(input("Enter medicine quantity: "))
                added_by=input("Enter added by: ")
                price=float(input("Enter medicine price: "))
                medicine.add_medicine(name, qty, added_by, price)
                print("Medicine added successfully!")

            elif choice=="4":
                med=medicine.view_medicine()
                for i in med:
                    print("Name :",i[0])
                    print("Qty :",i[1])
                    print("Added By :",i[2])
                    print("Price :",i[3])

            elif choice=="5":
                sr_no=int(input("Enter SR No. to delete: "))
                medicine.delete_medicine(sr_no)
                print("Medicine deleted successfully!")

        elif choice=="2":
            print("1. Register")
            print("2. Login")
            print("3. View all managers")
            print("4. View all medicine")
            choice=input("Enter your choice: ")

            if choice=="1":
                name=input("Enter your name: ")
                admin.register(name)
                print("Registered successfully!")

            elif choice=="2":
                name=input("Enter your name: ")
                if admin.login(name):
                    print("Logged in successfully!")
                else:
                    print("Invalid credentials!")

            elif choice=="3":
                man=admin.view_all_managers()
                for i in man:
                    print("Manager Name :",i[0])
                    print("Farmacy Name :",i[1])
            elif choice=="4":
                med=medicine.view_medicine()
                for i in med:
                    print("Name :",i[0])
                    print("Qty :",i[1])
                    print("Added By :",i[2])
                    print("Price :",i[3])

        elif choice=="3":
            break


main()
