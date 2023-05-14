<?php
    function factorial($x) {
        if ($x==1 or $x==2) {return $x;}
        else                {return $x * factorial($x-1);}
    }

    $x = readline("Enter a number: ");

    print("\nFactorial of $x is ".factorial($x)."\n");
?>