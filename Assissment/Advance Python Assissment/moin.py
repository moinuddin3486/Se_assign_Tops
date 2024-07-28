# import mysql.connector as tops
# conn=tops.connect(host="localhost",user="root",password="Moinuddin@123",database="student")
# moin=conn.cursor()
# moin.execute("select * from login   WHERE user_name=%s"),("Moinuddin@123")
# suhana=moin.fetchall()
# for i in suhana:
#     print(i)
import mysql.connector as tops

# Establish connection to the database
conn = tops.connect(
    host="localhost",
    user="root",
    password="Moinuddin@123",
    database="student"
)

# Create a cursor object
moin = conn.cursor()

# Execute the query using the correct parameterized syntax
# moin.execute("SELECT * FROM login WHERE user_name=%s", ("Moinuddin@123",))
moin.execute("select * from login ")
suhana=moin.fetchall()
for i in suhana:
    print("User Name :",i[0])
    print("Password :",i[1])




# Fetch all results
# suhana = moin.fetchall()

# Iterate and print each row in the result
# for i in suhana:
#     print(i)

# Close the cursor and connection
moin.close()
conn.close()

