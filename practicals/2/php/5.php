<?php
    function is_prime ($x) {
        $ret = true;
        for ($i=2; $i<$x; $i++) {
            if ($x % $i == 0) {$ret = false;}
        }
    return $ret;
    }

    $x = intval(readline("Enter a number: "));

    print("$x is a ");
    print( is_prime($x) ? "prime" : "composite" );
    print(" number\n");
?>