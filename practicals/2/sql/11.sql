USE online_book;
-- Get information of all the books whose price is greater than 600
SELECT * FROM book WHERE price>500;
-- Get information about the books of the "fantasy" category
SELECT * FROM book where category='fantasy';
-- Get all the information about the publishers operating from California
SELECT * FROM publisher WHERE address LIKE '%CA %';
-- Get author name using their email
SELECT name FROM author where email='benjamin.taylor@gmail.com';
-- Get all the information of the ratings in the range 2-4
SELECT * FROM review WHERE rating BETWEEN 2 AND 4;