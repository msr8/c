<?php
    function is_armstrong($x) {
        $x_str = strval($x);
        $sum = 0;
        foreach (str_split($x_str) as $i){
            $sum += intval($i) ** 3;
        }
        return $x == $sum;
    }
    
    $x = intval(readline("Enter a number: "));
    
    print("$x is ");
    if (!is_armstrong($x)) {print("not ");}
    print("an armstrong number\n");
?>