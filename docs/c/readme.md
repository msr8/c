**Q1) WAP to calculate SI, given principal = 10k, rate = 5%, time = 5yrs**

```c
# include <stdio.h>


int main() {
    float prin = 1e4;
    float rate = 5;
    float time = 5;
    float si   = (prin*rate*time)/100;

    printf("Given that the principal is %d, rate is %d%% over %dyrs, the SI produced is %d", (int)prin, (int)rate, (int)time, (int)si);

    printf("\n");
}
```
<br><br>

**Q2) WAP to display a^2, a^3, a^4, a^5 of a number a=5. Without using any library, compute above values & display the result in proper format**

```c
# include <stdio.h>


int main() {
    int a   = 5;
    int a_2 = a*a;
    int a_3 = a*a*a;
    int a_4 = a*a*a*a;
    int a_5 = a*a*a*a*a;

    printf("Given that a is %d:\n\n", a);
    printf("a^2: %d\n", a_2);
    printf("a^3: %d\n", a_3);
    printf("a^4: %d\n", a_4);
    printf("a^5: %d\n", a_5);

    printf("\n");
}
```
<br><br>

**Q3) WAP to Convert Cº to Fº**

```c
# include <stdio.h>

int main() {
    float c,f;

    printf("Enter the temperature in celcius: ");
    scanf("%f", &c);
    f = (c * 1.8) + 32;
    printf("\n%.1fºC is equal to %.1fºF", c, f);

    printf("\n");
}
```
<br><br>

**Q4) WAP to caclulate volume of sphere**

```c
# include <stdio.h>
# include <cmath>

int main() {
    float rad, vol;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &rad);
    vol = (4/3.0) * M_PI * pow(rad, 3);
    printf("\nGiven that the radius is %.2f units, volume of the sphere is %.2f cubic units", rad, vol);

    printf("\n");
}
```
<br><br>

**Q5) WAP to convert km/h to mi/h**

```c
# include <stdio.h>

int main() {
    int km, mi;

    printf("Enter the speed in km/h: ");
    scanf("%d", &km);
    mi = km / 1.609;
    printf("\n%d km/h is equal to %d mi/h", km, mi);

    printf("\n");
}
```
<br><br>

**Q6) WAP to swap two numbers using 3 variables**

```c
# include <stdio.h>

int main() {
    int a = 5;
    int b = 7;
    int c = a;
    a = b;
    b = c;
    printf("\nA:%d, B:%d", a, b);

    printf("\n");
}
```
<br><br>

**Q7) WAP to swap two numbers using 3 variables**

```c
# include <stdio.h>

int main() {
    int a = 5;
    int b = 7;
    a = a+b;
    b = a-b;
    a = a-b;
    printf("\nA:%d, B:%d", a, b);

    printf("\n");
}
```
<br><br>

**Q8) WAP to caclulate the third angle of a triangle when two angles (in degrees) are given**

```c
# include <stdio.h>

int main() {
    int a = 70;
    int b = 45;
    int c = 180-a-b;
    printf("\n\nAssuming that the two angles are %ddegrees and %ddegrees, the third angle is %ddegrees", a, b, c);

    printf("\n");
}
```
<br><br>

**Q9) WAP to caclulate the roots of a quadratic equation**

```c
# include <stdio.h>
# include <cmath>

int main() {
    int a = 1;
    int b = 7;
    int c = 12;
    int a_r, b_r;
    a_r = ( -b + sqrt((b*b)-(4*a*c)) ) / (2*a);
    b_r = ( -b - sqrt((b*b)-(4*a*c)) ) / (2*a);
    printf("The solutions for the equation %dx^2 + %dx + %d are %d & %d\n", a, b, c, a_r, b_r);

    printf("\n");
}
```
<br><br>

**Q10) WAP to caclulate compound interest**

```c
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
```
<br><br>

**Q11) WAP to find if an year is a leap year**

```c
# include <stdio.h>

int main() {
    int  yr;
    bool is_leap;

    printf("Enter the year: ");
    scanf("%d", &yr);
    
    is_leap = ( (yr%4==0) && (yr%100!=0) ) || (yr%400==0); 

    printf("%d is ", yr);
    if (!is_leap)    {printf("not ");}
    printf("leap year");

    printf("\n");
}
```
<br><br>

**Q12) WAP to find if a number is even or not**

```c
# include <stdio.h>

int main() {
    int  x;
    bool is_even;

    printf("\n\nEnter a number: ");
    scanf("%d", &x);

    is_even = x%2 == 0;

    printf("%d is ", x);
    is_even ? printf("an") : printf("not a");
    printf(" even number");

    printf("\n");
}
```
<br><br>

**Q13) WAP to find if a character is capital or not**

```c
# include <stdio.h>

int main() {
    char x;
    int  x_int;
    bool is_cap;

    printf("\n\nEnter a character: ");
    scanf("%c", &x);

    x_int  = x;
    is_cap = x_int>=65 && x_int<=90;

    printf("%c is", x);
    is_cap ? printf("") : printf(" not");
    printf(" a capital character");

    printf("\n");
}
```
<br><br>

**Q14) WAP to find if a character is a digit or not**

```c
# include <stdio.h>

int main() {
    char x;
    int  x_int;
    bool is_dig;

    printf("\n\nEnter a character: ");
    scanf("%c", &x);

    x_int  = x;
    is_dig = x_int>=48 && x_int<=57;

    printf("%c is", x);
    is_dig ? printf("") : printf(" not");
    printf(" a digit");

    printf("\n");
}
```
<br><br>

**Q15) WAP to find greatest among two numbers**

```c
# include <stdio.h>

int main() {
    int a = 59;
    int b = 44;
    int grt;

    grt = (a>b) ? a : b;

    printf("\n\nThe greatest number among %d and %d is %d", a, b, grt);

    printf("\n");
}
```
<br><br>

**Q16) WAP to caclulate if the sum of the last two digits of an integer is even or odd**

```c
# include <stdio.h>

int main() {
    int  x = 134;
    int  y,z;
    int  sum;
    bool is_even;

    z       = x%10;
    y       = x%100 / 10;
    sum     = x + y;
    is_even = sum%2==0;

    printf("\n\nThe sum of the last two digits of %d is ", x);
    is_even ? printf("even") : printf("odd");

    printf("\n");
}
```
<br><br>

