<?php
    $nums = array();
    for ($i=0; $i<3; $i++) {
        $nums[$i] = intval(readline("Enter number ".($i+1).": "));
    }
    
    print("\nThe maxmimum of the given numbers is ".max($nums));
?>