from database import Database

class Manager:
    def __init__(self):
        self.db = Database()

    def register(self, name, pharmacy_name):
        query = ("insert into manager (name, pharmacy_name) values (%s,%s')",(name,pharmacy_name))
        self.db.execute_query(query)

    # def login(self, name, pharmacy_name):
    #     query = ("select * from manager WHERE name = '{name}' AND pharmacy_name = '{pharmacy_name}'")
    #     return self.db.fetch_data(query)
    def login(self, name, pharmacy_name):
        query = "SELECT * FROM manager WHERE name = %s AND pharmacy_name = %s"
        return self.db.fetch_data(query, (name, pharmacy_name))


    def view_all_medicine(self):
        query = "select * from medicine"
        return self.db.fetch_data(query)
        