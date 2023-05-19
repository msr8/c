<?php
    function reverse_string($x) {
        $x_len = strlen($x);
        $ret   = "";

        for ($i=0; $i<$x_len; $i++) {
            $ret[$i] = $x[$x_len-$i-1];
        }
        
        return $ret;
    }

    $x = readline("Enter a string: ");

    print("\nReverse of $x is ".reverse_string($x)."\n");
?>