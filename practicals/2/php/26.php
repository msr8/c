<?php
    class Fruit {
        public $name;
        public $color;

        function __construct($name, $color) {
            $this->name  = $name;
            $this->color = $color;
        }

        function __destruct() {
            print("Destroying $this->name\n");
        }
    }

    class Apple extends Fruit {
        function introduce() {
            print("Hello, I am a $this->color $this->name\n");
        }
    }


    $obj = new Apple("apple", "red");
    $obj->introduce();
?>