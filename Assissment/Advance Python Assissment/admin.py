from database import Database

class Admin:
    def __init__(self):
        self.db = Database()

    def register(self, name):
        query = ("inset into admin (name) values ('{}')".format(name))
        # user_name=('{}')".format(username) format method thi replace thase 
        self.db.execute_query(query)

    def login(self, name):
        query = ("SELECT * FROM admin WHERE name = %s",(name))
        return self.db.fetch_data(query)
    

    def view_all_managers(self):
        query = "select * from manager"
        return self.db.fetch_data(query)
