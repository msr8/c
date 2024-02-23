USE online_book;
-- Order the books in ascending order based on their price
SELECT * FROM book ORDER BY price;
-- Order the books in descending order based on their page count
SELECT * FROM book ORDER BY page_count DESC;
-- Order the reviews in descending order based on their rating
SELECT * FROM review ORDER BY rating DESC;