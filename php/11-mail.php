<?php
    ini_set("sendmail_from", "abc@gmail.com");

    $to     = "def@gmail.com";
    $sub    = "PHP";
    $msg    = "This is a text file";
    $header = "From abc@gmail.com";

    $result = mail($to, $sub, $msg, $header);
    print($result ? "Message sent" : "Failure");
?>