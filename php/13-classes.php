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


    $apple = new Fruit("Apple", "Red");

    print("Name:  $apple->name\n");
    print("Color: $apple->color\n");
    print("Program execution complete\n");
?>