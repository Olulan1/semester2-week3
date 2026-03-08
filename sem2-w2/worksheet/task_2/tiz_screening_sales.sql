-- Write a function that returns the number of tickets sold 
-- for each screening.

-- The function should return a list of tuples containing (in order):
-- 1. the screening ID (s.screening_id)
-- 2. the film title (f.title)
-- 3. the number of tickets sold (SUM(tickets per screening) AS TicketsSold)

-- All screenings should be included, even if no tickets were 
-- sold for that screening.

-- Results should be ordered by the number of tickets sold, 
-- from highest to lowest.

-- query = """


SELECT s.screening_id, f.title, COUNT(t.ticket_id) as TicketsSold
FROM screenings as s 
LEFT JOIN tickets as t 
ON s.screening_id = t.screening_id
LEFT JOIN films as f
ON s.film_id = f.film_id
GROUP BY s.screening_id
ORDER BY TicketsSold DESC;




-- """