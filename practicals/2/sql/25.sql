-- Create tables
CREATE TABLE orders (
    order_id INT PRIMARY KEY,
    order_date DATE
);
CREATE TABLE order_items (
    item_id INT PRIMARY KEY,
    order_id INT,
    item_name VARCHAR(50),
    FOREIGN KEY (order_id) REFERENCES orders(order_id) ON UPDATE CASCADE ON DELETE CASCADE
);
-- Insert data
INSERT INTO orders      VALUES (1, "2023-03-01");
INSERT INTO order_items VALUES (1, 1, "Item 1");
-- Update the order_id in orders table
UPDATE orders
SET order_id = 2
WHERE order_id = 1;
SELECT * FROM order_items;
-- Delete the order from orders table
DELETE FROM orders WHERE order_id = 2;
SELECT * FROM order_items;