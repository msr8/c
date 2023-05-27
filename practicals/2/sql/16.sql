-- Show mysql version
SELECT VERSION();
-- Show current time
SELECT CURTIME();
-- Show today's date
SELECT CURDATE();
SELECT CURRENT_DATE();
SELECT DATE(CURDATE());
-- Show today's day
SELECT DAYNAME(CURDATE());
-- Show current month in a numerical format (ie 1-12)
SELECT MONTH(CURDATE());
-- Show current month in an alphabetical format (like may)
SELECT MONTHNAME(CURDATE());
-- Show current year
SELECT YEAR(CURDATE());
-- Show system's date and time
SELECT SYSDATE();