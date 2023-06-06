USE online_book;

-- Find books with a price greater than the price of any book in the fantasy category
SELECT *
FROM book
WHERE price > ANY (SELECT price FROM book WHERE Category ="fantasy");
-- Find books with a page count greater than the page count of all books published by publisher having the id P3
SELECT *
FROM book
WHERE page_count > ALL (SELECT page_count FROM book WHERE p_id="P3");
-- Find books with at least one review
SELECT *
FROM book
WHERE EXISTS (SELECT * FROM review WHERE review.ISBN = book.ISBN);
-- Find books with no reviews
SELECT *
FROM book
WHERE NOT EXISTS (SELECT * FROM review WHERE review.ISBN = book.ISBN);