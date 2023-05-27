USE online_book;
-- Right Outer
SELECT * FROM book
RIGHT JOIN review
ON book.isbn=review.isbn;
-- Left Outer
SELECT * FROM book
LEFT JOIN review
ON book.isbn=review.isbn;
-- Full Outer
SELECT * FROM book
RIGHT JOIN review
ON book.isbn=review.isbn
UNION
SELECT * FROM book
LEFT JOIN review
ON book.isbn=review.isbn;
-- Cross
SELECT * FROM book
CROSS JOIN review;