-- SET FOREIGN_KEY_CHECKS=0;
USE online_book;
-- Add primary keys
ALTER TABLE book      ADD CONSTRAINT pk_isbn PRIMARY KEY(isbn);
ALTER TABLE review    ADD CONSTRAINT pk_r_id PRIMARY KEY(r_id);
ALTER TABLE publisher ADD CONSTRAINT pk_p_id PRIMARY KEY(p_id);
ALTER TABLE author    ADD CONSTRAINT pk_a_id PRIMARY KEY(a_id);
-- Add foreign keys
ALTER TABLE review    ADD CONSTRAINT fk_isbn FOREIGN KEY(isbn) REFERENCES book(isbn);
ALTER TABLE book      ADD CONSTRAINT fk_p_id FOREIGN KEY(p_id) REFERENCES publisher(p_id);