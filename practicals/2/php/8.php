<?php
    function is_armstrong($x) {
        $x_str = strval($x);
        $sum = 0;
        for ($i=0; $i<strlen($x_str); $i++) {
            $sum += intval($x_str[$i]) ** 3;
        }
        return $x == $sum;
    }
    
    $x = readline("Enter a number: ");
    
    print("$x is ");
    if (!is_armstrong($x)) {print("not ");}
    print("an armstrong number");
?>