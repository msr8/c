USE online_book;

-- Book
INSERT INTO book VALUES ('1674916338', 'Harry Potter',         'Fantasy',   700, '1995-04-17', 1996, 352),
                        ('3140866387', 'Hunger Games',         'Thriller',  550, '2001-11-08', 2002, 414),
                        ('9057777720', 'Sherlock Holmes',      'Mystery',   800, '2004-01-19', 2004, 321),
                        ('7428714265', 'Bridge to Terabithia', 'Fiction',   300, '2011-07-17', 2012, 355),
                        ('1133820410', 'Game of Thrones',      'Fantasy',   900, '2012-08-23', 2013, 139);
SELECT * FROM book;

-- Publisher
INSERT INTO publisher VALUES ('P1', 'Swift Publishing',      '1234 Maple Avenue, Los Angeles, CA 90001',     '9876543210', 'swiftpublishing@gmail.com'),
                             ('P2', 'Phoenix Publications',  '5678 Oak Street, Apt 45B, New York, NY 10002', '8765432109', 'phoenixpublications@gmail.com'),
                             ('P3', 'Golden Pen Publishing', '7890 Pine Drive, Unit 12, Chicago, IL 60603',  '7654321098', 'goldenpenpublishing@gmail.com'),
                             ('P4', 'Moonbeam Books',        '4321 Cedar Lane, Boston, MA 02108',            '6543210987', 'moonbeambooks@gmail.com'),
                             ('P5', 'Starry Sky Press',      '1234 Birch Road, San Francisco, CA 94109',     '5432109876', 'starryskypress@gmail.com');
SELECT * FROM publisher;

-- Author
INSERT INTO author VALUES ('A1', 'Ethan Lee',       '5678 Elm St, Apt 3D, Houston, TX',   '9876543210', 'ethan.lee@gmail.com'),
                          ('A2', 'Harper Miller',   '1234 Oak Ave, Suite 7B, Miami, FL',  '9876123456', 'harper.miller@gmail.com'),
                          ('A3', 'Amelia Wilson',   '7890 Cedar Ln, Chicago, IL',         '9876012345', 'amelia.wilson@gmail.com'),
                          ('A4', 'Benjamin Taylor', '4321 Maple Dr, San Francisco, CA',   '9876987654', 'benjamin.taylor@gmail.com'),
                          ('A5', 'Mia Anderson',    '8765 Pine Rd, Apt 9C, New York, NY', '9876098765', 'mia.anderson@gmail.com');
SELECT * FROM author;

-- Review
INSERT INTO review VALUES ('R1', 9057777720, 3),
                          ('R2', 1133820410, 5),
                          ('R3', 1674916338, 2),
                          ('R4', 7428714265, 4),
                          ('R5', 3140866387, 1);
SELECT * FROM review;

