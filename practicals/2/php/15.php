<?php
    $n = intval(readline("Enter a number: "));
    $num1 = 0;
    $num2 = 1;

    $counter = 0;
    while ($counter < $n){
        print("$num1 ");
        $num3 = $num2 + $num1;
        $num1 = $num2;
        $num2 = $num3;
        $counter = $counter + 1;
    }
?>