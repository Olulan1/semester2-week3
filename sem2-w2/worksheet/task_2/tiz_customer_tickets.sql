
--Write a function that returns details of tickets purchased by a specific customer.

--The function should return a list of tuples containing (in order):
-- 1. the film title (f.title)
-- 2. the screen (screen)
-- 3. the ticket price (t.price)

-- query = """
SELECT f.title, screen, t.price 
FROM customers as c 
JOIN tickets as t 
ON c.customer_id=t.customer_id
JOIN screenings as s
ON t.screening_id = s.screening_id
JOIN films as f
ON s.film_id = f.film_id
WHERE c.customer_id=1
ORDER BY f.title ASC;

--- """
