a=9;b=4
if [ $a -gt $b ]; then
    echo "$a > $b"
elif [ $a -lt $b ]; then
    echo "$a < $b"
else
    echo "$a == $b"
fi


x=6
if [ $x -ge 0 ] && [ $x -le 10 ]; then
    echo "0<=x<=10"
fi


fn="foo.txt"
if [ ! -f $fn ]; then
    echo "$fn doesnt exist"
else
    echo "$fn exists"
fi