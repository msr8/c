USE online_book;
-- Shows info about all the keys in the book table
SHOW INDEX FROM book;
-- Create a index on the student table
CREATE INDEX i_s_id ON student(s_id);
SHOW INDEX FROM student;
-- Delete the created index
DROP INDEX i_s_id ON student;