<?php
    function add(&$x, $val) {
        $x += $val;
    }

    $x = 8;
    add($x, 2);
    print($x);  // 10
?>