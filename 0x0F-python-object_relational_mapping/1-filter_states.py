#!/usr/bin/python3
"""
Scripts that lists all states starting with a N in the name
from the database hbtn_0e_0_usa.
"""


import MySQLdb
import sys


def filter_states(username, password, database):
    """
    Selects and prints all states from the specified database.
    """
    # Connect to MySQL server
    db = MySQLdb.connect(host="localhost", port=3306,
                         user=username, passwd=password, db=database)

    # Create a cursor object using cursor() method
    c = db.cursor()

    # Execute SQL query
    c.execute(
            "SELECT * FROM states WHERE name LIKE BINARY 'N%' ORDER BY id ASC"
    )

    # Fetch all rows and print them
    for row in c.fetchall():
        print(row)

    # Close the cursor and disconnect from server
    c.close()
    db.close()


if __name__ == "__main__":
    # Check if correct number of arguments provided
    if len(sys.argv) == 4:
        username = sys.argv[1]
        password = sys.argv[2]
        database = sys.argv[3]
        filter_states(username, password, database)
    else:
        print("Usage: {} <username> <password> <database>".format(sys.argv[0]))
