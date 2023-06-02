USE online_book;

-- Makes the procedure
DELIMITER ##
CREATE PROCEDURE p1()
BEGIN
desc book;
desc author;
desc publisher;
desc review;
END ##
DELIMITER ;
-- Calls the procedure
CALL p1;
-- Drops the procedure
DROP PROCEDURE p1;
