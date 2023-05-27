USE online_book;
-- Natural
SELECT * FROM book
NATURAL JOIN review;
-- Equi
SELECT * FROM book
INNER JOIN review
ON book.isbn=review.isbn;