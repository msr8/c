USE online_book;
-- Display number of books having price greater than 600
SELECT COUNT(isbn) AS count FROM book WHERE price>600;
-- Display average price of the books
SELECT AVG(price) AS average FROM book;
-- Display sum of the prices of all the books
SELECT SUM(price) AS total FROM book;
-- Display the lowest rating
SELECT MIN(rating) AS lowest FROM review;
-- Display the highest rating
SELECT MAX(rating) AS highest FROM review;