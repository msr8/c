USE online_book;
-- Delete the record of the P5 publisher from the author table
DELETE FROM publisher WHERE p_id="P5";
SELECT * FROM publisher;
-- Add p_id to books
UPDATE book SET p_id="P1" WHERE isbn="1133820410";
UPDATE book SET p_id="P3" WHERE isbn IN ("3140866387","1674916338");
UPDATE book SET p_id="P2" WHERE isbn="9057777720";
SELECT * FROM book;