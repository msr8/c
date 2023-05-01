-- Get information of fantasy and thriller books
SELECT * FROM book where category='fantasy' OR  category='thriller';
-- Get information of fantasy books costing more than 800
SELECT * FROM book where category='fantasy' AND price>800;
-- Get information about the publishers not operating from California
SELECT * FROM publisher WHERE address NOT LIKE '%CA %';