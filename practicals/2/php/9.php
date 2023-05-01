<?php
    $a = intval(readline("Enter a number: "));
    $b = intval(readline("Enter a number: "));
    print("\n\$a: $a | \$b: $b");
    
    $tmp = $a;
    $a   = $b;
    $b   = $tmp;
    
    print("\n\$a: $a | \$b: $b");
?>