<?php
    $x = intval(readline("Enter a year: "));
    $is_leap = false;

    if ($x%4==0) {
        if     ($x%100!=0)    {$is_leap = true;}
        elseif ($x%400==0)    {$is_leap = true;}
    }

    print("$x is ");
    if (!$is_leap) {print("not ");}
    print("a leap year\n");
?>