<?php
    $server = "localhost";
    $user   = "username";
    $pass   = "password";
    $db     = "online_book";

    // Create a connection
    $conn = mysqli_connect($server, $user, $pass);
    // Check if any error was encountered
    if ($conn) { print("Connection was successful\n"); }
    else       { exit("Connection failed: $conn->connect_error\n"); }

    // Create a DB
    $cmd = "CREATE DATABASE $db";
    // Run the query and check if it was ran successfully
    if ( mysqli_query($conn,$cmd) ) { print("Database created successfully\n"); }
    else                            { print("Error creating database: $conn->error\n"); }

    // Create a table
    $conn = mysqli_connect($server, $user, $pass, $db);
    $cmd  = "CREATE TABLE book (isbn VARCHAR(10), title VARCHAR(30));";
    // Run the query and check if it was ran successfully
    if ( mysqli_query($conn,$cmd) )  { print("Table created successfully\n"); }
    else                             { print("Error creating table: $conn->error\n"); }

    // Insert data
    $cmd = "INSERT INTO book VALUES (\"1234567890\", \"Harry Potter\")";
    // Run the query and check if it was ran successfully
    if ( mysqli_query($conn,$cmd) )  { print("Data inserted successfully\n"); }
    else                             { print("Error inserting data: $conn->error\n"); }

    // Close the connection
    mysqli_close($conn);
?>