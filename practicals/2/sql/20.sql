USE online_book;
-- Get the books whose publisher ids we do not have
SELECT * FROM book WHERE p_id IS NULL;
-- Get the books whose publisher ids we have
SELECT * FROM book WHERE p_id IS NOT NULL;