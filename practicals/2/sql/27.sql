USE online_book;
-- Create a view
CREATE VIEW expensive_books AS
SELECT * FROM book
WHERE price>600;
-- Display the created view
SELECT * FROM expensive_books;
-- Delete the view
DROP VIEW expensive_books;