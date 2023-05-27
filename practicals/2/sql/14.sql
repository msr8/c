-- Get all the information about the publishers operating from California
SELECT * FROM publisher WHERE address LIKE '%CA %';
-- Visually convert all the books' titles to lower case
SELECT LOWER(book_title) FROM book;
-- Visually convert all the books' titles to upper case
SELECT UPPER(book_title) FROM book;
-- Visually trim all the books' titles
SELECT TRIM(book_title) FROM book;
-- Visually pad "_" on the right of the book titles until they're 30 characters long
SELECT RPAD(book_title,30,"_") FROM book;
-- Visually pad "_" on the left of the book titles until they're 30 characters long
SELECT LPAD(book_title,30,"_") FROM book;
-- Visually reverse all the book titles
SELECT REVERSE(book_title) FROM book;