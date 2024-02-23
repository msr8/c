<?php
    $x = readline("Enter a number: ");
    
    $sum = array_sum(str_split($x));

    print("\nSum of the digits of $x is $sum\n");
?>