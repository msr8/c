// WAP to print first 20 nos. of fibonacci series
#include <stdio.h>


int get_fib(int x) {
    if      (x==1)            {return 0;}
    else if (x==2 or x==3)    {return 1;}
    else                      {return get_fib(x-1) + get_fib(x-2);}
}


int main() {
    int end = 20;

    for (int i=1; i<end+1; i++) {
        printf("%d ", get_fib(i));
    }

    printf("\n");
}
