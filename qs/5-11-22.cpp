#include <stdio.h>
#include <math.h>


void _1(int a, int b) {
    int c = a;
    a = b;
    b = c;
    printf("\n_1(): A:%d, B:%d", a, b);
}

void _2(int a, int b) {
    a = a+b;
    b = a-b;
    a = a-b;
    printf("\n_2(): A:%d, B:%d", a, b);
}

void _3() {
    int a = 70;
    int b = 45;
    int c = 180-a-b;
    printf("\n\n_3(): Assuming that the two angles are %ddegrees and %ddegrees, the third angle is %ddegrees", a, b, c);
}

void _4() {
    int a = 1;
    int b = 7;
    int c = 12;
    int a_r, b_r;
    a_r = ( -b + sqrt((b*b)-(4*a*c)) ) / (2*a);
    b_r = ( -b - sqrt((b*b)-(4*a*c)) ) / (2*a);
    printf("\n\n_4(): The solutions for the equation %dx^2 + %dx + %d are %d & %d\n", a, b, c, a_r, b_r);
}

void _5() {
    int p = 1e3;
    int r = 10;
    int t = 2;
    int ci =  ( p * pow(1+(r/100.0) , t) ) - p;
    printf("\n_5(): Given that the principle is %d, rate is %d%% over %dyrs, the CI is %d\n", p,r,t,ci);
}

void _6() {
    int a_, b, c, d;
    int a = 1394;
    a_ = a;
    b = a%10;
    a = a/10;
    c = a%10;
    a = a/10;
    d = a%10;
    a = a/10;
    printf("\n_6(): Given that at the starting a=%d, in the end, a=%d, b=%d, c=%d. d=%d", a_,a,b,c,d);
}




int main() {
    int a,b;

    a = 10;
    b = 7;

   printf("\nGiven that A:%d & B:%d,", a, b);
    _1(a,b);
    _2(a,b);
    _3();
    _4();
    _5();
    _6();



    printf("\n ");
}


