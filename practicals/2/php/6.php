<?php
    function is_even ($x) {
        return $x%2 == 0;
    }

    $x = intval(readline("Enter a number: "));
    print("$x is an ");
    print( is_even($x) ? "even" : "odd" );
    print(" number\n")
?>