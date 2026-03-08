/*
Write a function that returns the customers who have spent
the most money on tickets.

The function should return a list of tuples containing (in order):
1. Customer name (c.customer_name)
2. Total amount spent on tickets (Sum(Ticket Price) as TotalSpent)


Only customers who have purchased at least one ticket 
should be included.

Results should be ordered by total amount spent, 
from highest to lowest, and limited to a 
specified number of rows (passed in by the argument `limit`)
*/

-- query = """
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
LIMIT 10;

-- """
