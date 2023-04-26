USE online_book;
-- Get the ISBN, title, and price of all the books whose price is greater than 600
SELECT isbn,book_title,price FROM book WHERE price>600;
-- Get all the information about the books of the "fantasy" category
SELECT * FROM book where category='fantasy';
-- Get all the information about the publishers operating from California
SELECT * FROM publisher WHERE address LIKE '%CA %';
-- Get author name using their email
SELECT name FROM author where email='benjamin.taylor@gmail.com';
-- Get all the information of the ratings above or equal to 3
SELECT * FROM review WHERE rating>=3;
