<?php
    $a = array(1,2,3);

    $b = array(
        1 => "one",
        2 => "two",
        3 => "three"
    );

    $c = array(
        array(1,2,3),
        array(4,5,6),
        array(6,7,8)
    );

    print("\n\nIndexed Array:\n");
    var_dump($a);
    print("\n\nAssociative Array:\n");
    var_dump($b);
    print("\n\nMulti-Deimensional Array:\n");
    var_dump($c);
?>