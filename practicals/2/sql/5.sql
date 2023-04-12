CREATE DATABASE online_book;
USE             online_book;

CREATE TABLE book (
    ISBN                VARCHAR(10),
    Book_title          VARCHAR(30),
    Category            VARCHAR(30),
    Price               INT(6),
    Copyright_Date      DATE,
    Year_of_Publishing  YEAR,
    Page_count          INT(5)
);
DESC book;

CREATE TABLE publisher (
    P_ID                 VARCHAR(10),
    Name_of_publication  VARCHAR(30),
    Address              VARCHAR(50),
    Phone_no             INT(10),
    Email_ID             VARCHAR(30)
);
DESC publisher;

CREATE TABLE author (
    A_ID     VARCHAR(10),
    name     VARCHAR(30),
    address  VARCHAR(50),
    phone    INT(10),
    email    VARCHAR(30)
);
DESC author;

CREATE TABLE review (
    R_ID    VARCHAR(10),
    ISBN    VARCHAR(10),
    Rating  INT(1)
);
DESC review;
