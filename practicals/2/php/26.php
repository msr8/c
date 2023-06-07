<?php
    class Car {
        public $x;
        public $y;

        function __construct() {
            $this->x = 0;
            $this->y = 0;
        }

        function move($direction, $distance) {
            if      ($direction=="right")    { $this->x += $distance; }
            else if ($direction=="left")     { $this->x -= $distance; }
            else if ($direction=="up")       { $this->y += $distance; }
            else if ($direction=="down")     { $this->y -= $distance; }
        }
        function print_coords() {
            printf(__CLASS__." is currently at ($this->x,$this->y)\n");
        }
    }


    $obj = new Car();
    $obj->print_coords();
    $obj->move("right", 5);
    $obj->move("left",  2);
    $obj->move("up",   10);
    $obj->move("down", 19);
    $obj->print_coords();
?>