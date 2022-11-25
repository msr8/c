<br><br>**Q1) WAP to calculate SI, given principal = 10k, rate = 5%, time = 5yrs**

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

**Q3) WAP to take mins as input and display total number of hours and minutes**

```c
# include <stdio.h>

int main() {
    int x, mins, hrs;

    printf("Enter the total number of minutes: ");
    scanf("%d", &x);

    hrs  = x / 60;
    mins = x % 60;

    printf("%d minutes equal to %d hours and %d minutes", x, hrs, mins);

    printf("\n");
}
```
<br><br>

**Q4) WAP that prints perimeter of a rectangle and take height and width as input**

```c
# include <stdio.h>

int main() {
    float h, w, p;

    printf("Enter the height of the rectangle: ");
    scanf("%f", &h);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &w);

    p = 2 * (h+w);
    printf("Perimeter of the rectangle is %.2f units", p);

    printf("\n");
}
```
<br><br>

**Q5) WAP to Convert Cº to Fº**

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

**Q6) WAP to caclulate volume of sphere**

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

**Q7) WAP to convert km/h to mi/h**

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

**Q8) WAP to swap two numbers using 3 variables**

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

**Q9) WAP to swap two numbers using 2 variables**

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

**Q10) WAP to caclulate the third angle of a triangle when two angles (in degrees) are given**

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

**Q11) WAP to caclulate the roots of a quadratic equation**

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

**Q12) WAP to caclulate compound interest**

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

**Q13) WAP to calculate the value of a,b,c,d after executing the following statements: `a=1394; b=a%10; a=a/10; c=a%10; a=a/10; d=a%10; a=a/10;`**

```c
# include <stdio.h>

int main() {
    int x = 1394;
    int a = x;
    int b, c, d;

    b = a % 10;
    a = a / 10;
    c = a % 10;
    a = a / 10;
    d = a % 10;
    a = a / 10;

    printf("Given that at the starting, the value of a was %d, now the values are as followes:\n\n", x);
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);
    printf("d: %d\n", d);

    printf("\n");
}
```
<br><br>

**Q14) WAP to accept a 3 digit number from the user and display the sum of all its digits**

```c
# include <stdio.h>
# include <string.h>

int main() {
    int  x;
    int  i;
    int  dig;
    int  sum=0;
    char x_str[4];

    printf("Enter a 3 digit number: ");
    scanf("%3d", &x);

    sprintf(x_str, "%d", x);
    for (i=0; i<strlen(x_str); i++) {
        dig  = (int)x_str[i];
        dig -= 48;
        sum += dig;
    }

    printf("The sum of the digits of %d is %d", x, sum);

    printf("\n");
}
```
<br><br>

**Q15) WAP to take a dimater of a circle as input and calculate the area and circumphrence of the circle**

```c
# include <stdio.h>
# include <cmath>

int main() {
    float x;
    float area, peri;
    
    printf("Enter the diamater of the circle: ");
    scanf("%f", &x);

    x   /= 2;
    peri = 2 * M_PI * x;
    area = M_PI * x * x;

    printf("For a circle having a diameter of %.2f units, the circumfrence is %.2f units and the area is %.2f sq. units", x*2, peri, area);

    printf("\n");
}
```
<br><br>

**Q16) WAP to accept a 4 digit number and display the product of digits placed at even places and do the same with digits placed at odd places**

```c
# include <stdio.h>

int cint(char c) {
    return (int)c - 48;
}

int main() {
    int  x;
    int  odd_prod;
    int  even_prod;
    char x_str[5];

    printf("Enter a 4 digit number: ");
    scanf("%4d", &x);

    sprintf(x_str, "%d", x);
    even_prod = cint(x_str[0]) * cint(x_str[2]);
    odd_prod  = cint(x_str[1]) * cint(x_str[3]);

    printf("For a number %d, the product of digits placed at odd places is %d and the product of digits placed at even places is %d", x, odd_prod, even_prod);

    printf("\n");
}
```
<br><br>

**Q17) WAP to accept in in smallcase, convert it to uppercase, and display the ASCII values of both the cases**

```c
# include <stdio.h>

int main() {
    char x;
    char x_up;

    printf("Enter an alphabet in small case: ");
    scanf("%c", &x);

    x_up = x - 32;

    printf("\nLowercase: %c (%d)", x,    x);
    printf("\nUppercase: %c (%d)", x_up, x_up);

    printf("\n");
}
```
<br><br>

**Q18) WAP to find greatest among two numbers**

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

**Q19) WAP to caclulate if the sum of the last two digits of an integer is even or odd**

```c
# include <stdio.h>

int main() {
    int  x = 134;
    int  y,z;
    int  sum;
    bool is_even;

    z       = x%10;
    y       = x%100 / 10;
    sum     = y + z;
    is_even = sum%2==0;

    printf("\n\nThe sum of the last two digits of %d is ", x);
    is_even ? printf("even") : printf("odd");

    printf("\n");
}
```
<br><br>

**Q21) WAP to find if an year is a leap year**

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

**Q22) WAP to find if a number is even or not**

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

**Q23) WAP to find if a character is capital or not**

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

**Q24) WAP to find if a character is a digit or not**

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

**Q25) WAP to accept 5 numbers and display their sum, average, and standard deviation**

```c
# include <stdio.h>
# include <cmath>

int main() {
    int   a,b,c,d,e;
    int   sum;
    float avg;
    float dev;

    printf("Enter 5 numbers: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    sum = a+b+c+d+e;
    avg = sum / 5.0;
    // https://www.scribbr.com/statistics/standard-deviation/
    dev = pow(a-avg,2) + pow(b-avg,2) + pow(c-avg,2) + pow(d-avg,2) + pow(e-avg,2);
    dev = dev / 4;
    dev = sqrt( (double)dev );

    printf("\nGiven that the set of the numbers is a population, the sum of the numbers is %d, the average is %.2f, and the standard deviation is %.2f", sum, avg, dev);

    printf("\n");
}
```
<br><br>

**Q26) WAP to accept a 4 digit number and display its palindrome**

```c
# include <stdio.h>

int main() {
    int  x;
    char x_str[5];

    printf("Enter a 4 digit number: ");
    scanf("%4d", &x);

    sprintf(x_str, "%d", x);
    char pal[5] = { x_str[3], x_str[2], x_str[1], x_str[0], '\0' };

    printf("The palindrome of %d is %s", x, pal);

    printf("\n");
}
```
<br><br>

**Q27) WAP to accept a character and display wether it is a vowel or consonant. Make use of conditional operator**

```c
# include <stdio.h>

int main() {
    char x;
    bool is_vow;

    printf("Enter a character: ");
    scanf("%c", &x);

    is_vow = x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U';

    printf("%c is a ", x);
    is_vow ? printf("vowel") : printf("constant");

    printf("\n");
}
```
<br><br>

**Q28) WAP to find out the memory allocated by int, float, long, char, double, short int, unsigned int, and unsigned char**

```c
# include <stdio.h>

int main() {
    int           _int;
    float         _float;
    long          _long;
    char          _char;
    double        _double;
    short int     _short_int;
    unsigned char _unsigned_char;

    printf("The amount of memory (in bytes) occupied by different types of variables is given below: \n\n");
    printf("int: %lu\n", sizeof _int);
    printf("float: %lu\n", sizeof _float);
    printf("long: %lu\n", sizeof _long);
    printf("char: %lu\n", sizeof _char);
    printf("double: %lu\n", sizeof _double);
    printf("short int: %lu\n", sizeof _short_int);
    printf("unsigned char: %lu\n", sizeof _unsigned_char);

    printf("\n");
}
```
<br><br>

**Q29) WAP to input 4 values of a,b,c,d and evaluate the ratio of a+b and c-d and print the result if c-d does not equal to 0**

```c
# include <stdio.h>

int main() {
    int   a, b, c, d;
    int   a_b;
    int   c_d;
    float res;

    printf("Enter 4 numbers: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    a_b = a+b;
    c_d = c-d;
    if (c_d != 0) {
        res  = (float) a_b/c_d;
        printf("The ratio of %d+%d and %d-%d is %.2f", a, b, c, d, res);
    }

    printf("\n");
}
```
<br><br>

**Q30) WAP to input an employees sallery and print out his gross sallery, considering that if his basic sallery is <1500, then his HRA is 10% and his DA is 90%. Otherwise, his HRA is Rs500 and his DA is 98%**

```c
# include <stdio.h>

int main() {
    float sal, hra, da, sum;

    printf("Enter your sallery: ");
    scanf("%f", &sal);

    if (sal < 1500) {
        hra = 0.1 * sal;
        da  = 0.9 * sal;
    }
    else {
        hra = 500;
        da  = 0.98 * sal;
    }
    sum = sal + hra + da;

    printf("Considering your sallery is %.2f, your HRA is %.2f and your DA is %.2f, thus making your total sallery %.2f", sal, hra, da, sum);

    printf("\n");
}
```
<br><br>

**Q31) WAP to tell if an employee has company insurance or not considering that the company insures them only if they're married, they're unmarried and are 30+ yr old male, or they're unmarried and are a 25+ yr old female**

```c
# include <stdio.h>

int main() {
    int  age;
    char marr;
    char gend;
    bool is_insured;

    // https://stackoverflow.com/questions/24099976/read-two-characters-consecutively-using-scanf-in-c
    printf("Please enter your gender (M for male and F for female): ");
    scanf(" %c", &gend);
    printf("Please enter your marital status (M for married and U for unmarried): ");
    scanf(" %c", &marr);
    printf("Please enter your age: ");
    scanf("%d", &age);

    is_insured = (marr=='M') || (marr=='U' and gend=='M' and age>=30) || (marr=='U' and gend=='F' and age>=25);

    printf("\nYou are ");
    if (!is_insured)    { printf("not "); }
    printf("insured");

    printf("\n");
}
```
<br><br>

**Q32) WAP to accept the length and breadth of a rectangle and determine if, magnitude wise, area is greater than the perimeter or is perimeter greater than the area**

```c
# include <stdio.h>

int main() {
    float l,b;
    float p,a;

    printf("Please enter the length of the rectangle: ");
    scanf("%f", &l);
    printf("Please enter the breadth of the rectangle: ");
    scanf("%f", &b);

    p = 2 * (l+b);
    a = l * b;

    printf("Given that the length and breadth of a rectangle is %.2f units and %.2f units respectively, magnitude wise, the ", l, b);
    p > a ? printf("perimeter") : printf("area");
    printf(" is greater than the ");
    p < a ? printf("perimeter") : printf("area");

    printf("\n");
}
```
<br><br>

**Q33) WAP to accept the length and breadth of a rectangle and determine if, magnitude wise, area is greater than the perimeter or is perimeter greater than the area**

```c
# include <stdio.h>

int main() {
    float l,b;
    float p,a;

    printf("Please enter the length of the rectangle: ");
    scanf("%f", &l);
    printf("Please enter the breadth of the rectangle: ");
    scanf("%f", &b);

    p = 2 * (l+b);
    a = l * b;

    printf("Given that the length and breadth of a rectangle is %.2f units and %.2f units respectively, magnitude wise, the ", l, b);
    p > a ? printf("perimeter") : printf("area");
    printf(" is greater than the ");
    p < a ? printf("perimeter") : printf("area");

    printf("\n");
}
```
<br><br>

