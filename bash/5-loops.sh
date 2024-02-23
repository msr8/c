# For loop
for i in {1..5};    do printf "%d " $i; done
printf "\n"
for i in {1..5..2}; do printf "%d " $i; done
printf "\n"
for (( i=1 ; i<=5 ; i++ )); do printf "%d " $i; done
