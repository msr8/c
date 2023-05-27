<?php
    $x     = readline("Enter a charater: ");
    $x_ord = ord($x);

    print("\n");
    // 0:48, 9:57
    if ($x_ord>=48 and $x_ord<=57) {
        print("'$x' is a digit\n");
    }
    // A:65 Z:122
    else if ($x_ord>=65 and $x_ord<=122) {
        print("'$x' is a letter\n");
    }
    // If its neither of them
    else {
        print("'$x' is neither a digit or a letter\n");
    }
?>