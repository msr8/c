a=9
b=2

echo "a = $a | b = $b"
echo "a + b = $((a+b))"
echo "a - b = $((a-b))"
echo "a * b = $((a*b))"
echo "a % b = $((a%b))"
echo "a ** b = $((a**b))"
# This will output an integer, ie 4, cause bash does not support floating point numbers
echo "a / b = $((a/b))"

# Assignment
c=$((a+b))
echo "c = $c"
# Other assignment operators (doing them wihtout the brackets does not work)
((a+=5))
((a-=5))
((a*=5))
((a/=5))
((a%=5))
# Unary operators
((a++))
((a--))
