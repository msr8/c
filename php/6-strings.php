<?php
    $x = "Hello world";
    $y = "world";
    $z = "Mark";
    print("x:                  $x\n");
    print("y:                  $y\n");
    print("z:                  $z\n\n");
    print("strlen(x):          ".strlen($x)."\n");
    print("str_word_count(x):  ".str_word_count($x)."\n");
    print("strrev(x):          ".strrev($x)."\n");
    print("strpos(x,y):        ".strpos($x,$y)."\n");
    print("str_replace(y,z,x): ".str_replace($y,$z,$x)."\n");
?>