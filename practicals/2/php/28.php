<?php
    $fn = "temp.txt";
    print("Enter some text:\n");
    $x  = readline();
    
    $fptr = fopen($fn, "w");
    fprintf($fptr, $x);
    print("\nWritten to $fn\n");
    fclose($fptr);

    $fptr = fopen($fn, "r");
    $text = fread($fptr, filesize($fn));
    print("\nContents of $fn:\n$text\n");
    fclose($fptr);
?>