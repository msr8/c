USE online_book;
-- Add a column
ALTER TABLE book ADD author_name varchar(30);
-- Rename a column
ALTER TABLE book RENAME COLUMN author_name TO author;
-- Change datatype of a column
ALTER TABLE book MODIFY COLUMN author VARCHAR(50);
-- Remove a column
ALTER TABLE book DROP COLUMN year_of_publishing;
-- Set a column to be the primary key
ALTER TABLE book ADD PRIMARY KEY(ISBN);
-- Remove the primary key
ALTER TABLE book DROP PRIMARY KEY;
-- Set a column to be the foreign key
ALTER TABLE review ADD FOREIGN KEY(ISBN) REFERENCES book(ISBN);
-- Remove a foreign key
ALTER TABLE book DROP FOREIGN KEY ISBN;