-- Display number of books having price greater than 600
SELECT COUNT(isbn) FROM book WHERE price>600;
-- Display average price of the books
SELECT AVG(price) FROM book;
-- Display sum of the prices of all the books
SELECT SUM(price) FROM book;
-- Display the lowest rating
SELECT MIN(rating) FROM review;
-- Display the highest rating
SELECT MAX(rating) FROM review;