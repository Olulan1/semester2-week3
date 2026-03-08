"""
This is where you should write your code and this is what you need to upload to Gradescope for autograding.

You must NOT change the function definitions (names, arguments).

You can run the functions you define in this file by using test.py (python test.py)
Please do not add any additional code underneath these functions.
"""

import sqlite3
import os.path

BASE_DIR = os.path.dirname(os.path.abspath(__file__))
db_path = os.path.join(BASE_DIR, "tickets.db")
conn = sqlite3.connect(db_path)
def customer_tickets(conn, customer_id):
    list=[]
    """
    Return a list of tuples:
    (film_title, screen, price)

    Include only tickets purchased by the given customer_id.
    Order results by film title alphabetically.
    """
    query ="""
    SELECT f.title, screen, t.price 
    FROM customers as c 
    JOIN tickets as t 
    ON c.customer_id=t.customer_id
    JOIN screenings as s
    ON t.screening_id = s.screening_id
    JOIN films as f
    ON s.film_id = f.film_id
    WHERE c.customer_id=?
    ORDER BY f.title ASC;
    """
    cursor = conn.execute(query, (customer_id,))
    for row in cursor:
        list.append(row)
    return list


def screening_sales(conn):
    list=[]
    """
    Return a list of tuples:
    (screening_id, film_title, tickets_sold)

    Include all screenings, even if tickets_sold is 0.
    Order results by tickets_sold descending.
    """
    query ="""
    SELECT s.screening_id, f.title, COUNT(t.ticket_id) as TicketsSold
    FROM screenings as s 
    LEFT JOIN tickets as t 
    ON s.screening_id = t.screening_id
    LEFT JOIN films as f
    ON s.film_id = f.film_id
    GROUP BY s.screening_id
    ORDER BY TicketsSold DESC;
    """
    cursor = conn.execute(query)
    for row in cursor:
        list.append(row)
    return list


def top_customers_by_spend(conn, limit):
    list=[]
    """
    Return a list of tuples:
    (customer_name, total_spent)

    total_spent is the sum of ticket prices per customer.
    Only include customers who have bought at least one ticket.
    Order by total_spent descending.
    Limit the number of rows returned to `limit`.
    """
    query ="""
    SELECT c.customer_name, SUM(t.price) AS TotalSpent 
    FROM customers as c 
    JOIN tickets as t 
    ON c.customer_id=t.customer_id
    JOIN screenings as s
    ON t.screening_id = s.screening_id
    JOIN films as f
    ON s.film_id = f.film_id
    GROUP BY c.customer_name
    ORDER BY TotalSpent DESC
    LIMIT ?;
    """
    cursor = conn.execute(query, (limit,))
    for row in cursor:
        list.append(row)
    return list
