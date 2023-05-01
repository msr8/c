<?php
    $x = readline("Enter a word: ");
    
    print("$x is ");
    if ($x != strrev($x)) {print("not ");}
    print("a palindrome");
?>