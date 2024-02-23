USE online_book;
-- Add a column
ALTER TABLE book ADD publisher varchar(10);
-- Rename a column
ALTER TABLE book RENAME COLUMN publisher TO p_id;
-- Change datatype of a column
ALTER TABLE book MODIFY COLUMN p_id VARCHAR(5);
-- Remove a column
ALTER TABLE book DROP COLUMN year_of_publishing;
-- Set a column to be the primary key
ALTER TABLE book ADD PRIMARY KEY(isbn);
-- Remove the primary key
ALTER TABLE book DROP PRIMARY KEY;
DESC book;