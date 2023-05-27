<?php
    $x     = readline("Enter a charater: ");
    $x_ord = ord($x);

    print("\n'$x' is ");
    // 0:48, 9:57
    if ($x_ord>=48 and $x_ord<=57) {
        print("a digit\n");
    }
    // A:65 Z:90 a:97 z:122
    else if ( ($x_ord>=65 and $x_ord<=90) or ($x_ord>=97 and $x_ord<=122) ) {
        print("a letter\n");
    }
    // If its neither of them
    else {
        print("neither a digit or a letter\n");
    }
?>