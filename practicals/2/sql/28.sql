USE online_book;
-- Create a table having an auto incrementing attribute
CREATE TABLE student (
    s_id  INT AUTO_INCREMENT PRIMARY KEY,
    sname VARCHAR(30)
);
-- Insert values into the table
INSERT INTO student(sname) VALUES ("Ram"),("Mahesh");
SELECT * FROM student;