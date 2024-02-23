<?php
    function fib($x) {
        if        ($x==1)          {return 0;}
        elseif    ($x==1 or $x==2) {return 1;}
        else                       {return fib($x-1) + fib($x-2);}
    }

    $x = intval(readline("Enter a number: "));

    for($i=1; $i<=$x; $i++) {
        print(fib($i)." ");
    }
    print("\n");
?>