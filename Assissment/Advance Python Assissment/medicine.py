from database import Database

class Medicine:
    def __init__(self):
        self.db = Database()

    def add_medicine(self, name, qty, added_by, price):
        query = ("insert into medicine (name, qty, added_by, price) VALUES (%s,%s,%s,%s,)",(name,qty,added_by,price))
        self.db.execute_query(query)

    def view_medicine(self):
        query = "select * from medicine"
        return self.db.fetch_data(query)

    def delete_medicine(self, sr_no):
        query = "delete from medicine WHERE sr_no = %s",(sr_no)
        self.db.execute_query(query)
