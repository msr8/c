<?php
    $text = "\n1) Addition\n2) Subtraction\n3) Multiplication\n4) Division\n\nWhat would you like to do?\n";

    print($text);
    $chc = intval(readline());
    
    print("\n");
    $num1 = intval(readline("Enter number 1: "));
    $num2 = intval(readline("Enter number 1: "));

    switch ($chc) {
        case 1:
            print("$num1 + $num2 = ".$num1+$num2); break;
        case 2:
            print("$num1 - $num2 = ".$num1-$num2); break;
        case 3:
            print("$num1 * $num2 = ".$num1*$num2); break;
        case 4:
            print("$num1 / $num2 = ".$num1/$num2); break;
        default:
            print("Invalid choice");
    }
    print("\n")
?>