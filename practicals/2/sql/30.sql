-- Adds a sale column
ALTER TABLE book2 ADD COLUMN sale DECIMAL(10, 2);
-- Creates the trigger
DELIMITER ##
CREATE TRIGGER update_price
BEFORE INSERT ON book2
FOR EACH ROW
BEGIN
    SET NEW.Price = NEW.Price - (NEW.Price*NEW.sale);
END ##
DELIMITER ;
-- Inserts some data
INSERT INTO book2 VALUES ('7154091655', 'Scylla', 'Mythology', 500, '2022-01-01', 200, 'P1', 0.2);
INSERT INTO book2 VALUES ('8478143049', 'Dark',   'Fiction',   350, '2022-01-01', 200, 'P7', 0.15);
SELECT * FROM book2;
-- Drops the trigger
DROP TRIGGER update_price;