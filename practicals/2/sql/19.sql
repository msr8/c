-- Display average price of the books published by each publisher
SELECT p_id, AVG(price) AS average_price FROM book GROUP BY p_id;
-- Display publisher_id and no. of books published of publishers who have published more than one book
SELECT p_id, COUNT(*) FROM book GROUP BY p_id HAVING COUNT(*) > 1;