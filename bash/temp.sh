# Write basic shell script to check whether the number entered by user is prime or not
read -p "Enter a number: " x

for (( i=2; i<x**(1/2); i++ )); do
    if (( x%i == 0 )); then
        echo "$x is not a prime number"
        exit
    fi
done

echo "$x is a prime number"