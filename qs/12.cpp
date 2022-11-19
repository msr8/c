// WAP to caclulate compound interest
# include <stdio.h>
# include <cmath>

int main() {
    int p = 1e3;
    int r = 10;
    int t = 2;
    int ci =  ( p * pow(1+(r/100.0) , t) ) - p;
    printf("Given that the principle is %d, rate is %d%% over %dyrs, the CI is %d\n", p,r,t,ci);

    printf("\n");
}


