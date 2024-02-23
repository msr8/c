<?php
    function simple_interest() {
        print("SIMPLE INTEREST\n");
        $p  = intval(readline("Enter the principal amount: "));
        $r  = intval(readline("Enter the rate of interest per annum: "));
        $t  = intval(readline("Enter the time (in years): "));
        $si = ($p*$r*$t) / 100;
        print("\nThe simple interest is $si\n\n");
    }

    function compound_interest() {
        print("COMPOUND INTEREST\n");
        $p  = intval(readline("Enter the principal amount: "));
        $r  = intval(readline("Enter the rate of interest per annum: "));
        $t  = intval(readline("Enter the time (in years): "));
        $ci = ( $p * ( (1+($r/100))**$t ) ) - $p; 
        print("\nThe simple interest is $ci\n\n");
    }


    simple_interest();
    compound_interest();
?>