-- USE online_book;
-- -- Duplicate the book table
-- CREATE TABLE book2 AS SELECT * FROM book;
-- -- Delete a record from both the tables
-- SET FOREIGN_KEY_CHECKS=0;
-- DELETE FROM book  WHERE p_id IS NULL;
-- DELETE FROM book2 WHERE p_id IS NULL;
-- -- Add a record to both the tables
-- INSERT INTO book  VALUES ("9868167751", "The Lord of the Rings", "Fantasy",  "500", "1997-11-16", 512, "P6");
-- INSERT INTO book2 VALUES ("6581697619", "To Kill a Mockingbird", "Thriller", "600", "2003-07-21", 341, "P6");


USE online_book;
-- Union (does not contain duplicates)
SELECT * FROM book
UNION
SELECT * FROM book2;
-- Union all (contains duplicates)
SELECT * FROM book
UNION ALL
SELECT * FROM book2;
-- Intersect
SELECT book_title
FROM book
WHERE book_title IN (SELECT book_title FROM book2);
-- Minus
SELECT book_title
FROM book
WHERE book_title NOT IN (SELECT book_title FROM book2);