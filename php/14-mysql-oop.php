<?php
    $server = "localhost";
    $user   = "username";
    $pass   = "password";
    $db     = "online_book";

    // Create a connection
    $conn = new mysqli($server, $user, $pass);
    // Check if any error was encountered
    if (!$conn->connect_error) { print("Connection was successful\n"); }
    else                       { exit("Connection failed: $conn->connect_error\n"); }

    // Create a DB
    $cmd = "CREATE DATABASE $db";
    // Run the query and check if it was ran successfully
    if ($conn->query($cmd) == TRUE) { print("Database created successfully\n"); }
    else                            { print("Error creating database: $conn->error\n"); }

    // Create a table
    $conn = new mysqli($server, $user, $pass, $db);
    $cmd  = "CREATE TABLE book (isbn VARCHAR(10), title VARCHAR(30));";
    // Run the query and check if it was ran successfully
    if ($conn->query($cmd) == TRUE)  { print("Table created successfully\n"); }
    else                             { print("Error creating table: $conn->error\n"); }

    // Insert data
    $cmd = "INSERT INTO book VALUES (\"1234567890\", \"Harry Potter\")";
    // Run the query and check if it was ran successfully
    if ($conn->query($cmd) == TRUE)  { print("Data inserted successfully\n"); }
    else                             { print("Error inserting data: $conn->error\n"); }

    // CLose the connection
    $conn->close();
?>