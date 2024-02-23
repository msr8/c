USE online_book;
-- Get information about the publishers operating from California
SELECT * FROM publisher WHERE address    LIKE "%CA %";
-- Get information about all the books whose title starts with "H"
SELECT * FROM book      WHERE book_title LIKE "H%";
-- Get information about all the books whose title has "a" as the second letter
SELECT * FROM book      WHERE book_title LIKE "_a%";