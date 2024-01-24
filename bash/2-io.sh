printf "Enter something: "
read x # Read a single line
echo "You entered: $x"

echo -ne "\n"

echo -n "Enter two nums (seperated by spaces): "
read x y # Read two nums
printf "You entered: %d and %d\n" $x $y