| S.No. | Question |
| ----- | -------- |
| 1 | In a company an employee is paid as under: If his basic salary is less than Rs. 1500, then HRA = 10% of basic salary and DA = 90% of basic salary. If his salary is either equal to or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic salary |
| 2 | A character is entered through keyboard, WAP to determine whether the character is entered capital, small, digit or special character |
| 3 | WAP to find the largest of 3 numbers using conditional operators |
| 4 | WAP to check whether an entered year is leap year or not |
| 5 | WAP to calculate the Armstrong numbers between 1 and 500 |
| 6 | WAP to determine if a number is prime or not |
| 7 | A five digit number is taken input from user, write a program to reverse that number and find sum of the digit of its digit too |
| 8 | WAP to print table of any number entered by the user |
| 9 | WAP to print the following patterns using loops: |
| 10 | WAP to print sum of series "1 - 1/2 + 1/3 - 1/4.....n" terms |
| 11 | WAP to find the sum of series "x - x^3/3! + x^5/5! - x^7/7! + x^9/9!....n " terms |
| 12 | WAP to print first 20 nos. of fibonacci series |
| 13 | WAP to convert hexadecimal number into a binary number |
| 14 | WAP to check whether the input character is a vowel or not using switch case |
| 15 | WAP to find diameter, circumference and area of a circle using functions |
| 16 | Write a program in C to swap elements using call by reference |
| 17 | Write a program to calculate factorial of a number using recursive function |
| 18 | WAP to calculate factorial of a number using recursion |
| 19 | WAP to find maximum and minimum element of array |
| 20 | WAP to store n elements in an array and print the elements using pointer |
| 21 | WAP to find the sum and product of 2 matrix using function (user defined) |
| 22 | Write a program in C to find the largest element in an array using dynamic memory allocation (malloc() and free() functions) |
| 23 | WAP to check if a given word is a palindrome or not |
| 24 | WAP to reverse a string, concatenate two strings, length of a string, copy one string to other using a user defined function and menu driven program |
| 25 | WAP to print a string in reverse using a pointer |
| 26 | WAP to count the number of vowels and consonants in a string using a pointer |
| 27 | WAP to read and print employee details like Employee ID, EName, salary using structures |
| 28 | Create a structure item (char item_name[10], int qty, float price, float total_amt). Enter details regarding items. Create a pointer variable *pitem of a structure item and access the elements or members of a structure using pointer variable by using -> operator |
| 29 | Create a structure student (char name[10], int marks[3], int total, float percentage). Enter the marks of 5 students in 3 subjects and calculate the percentage |
| 30 | Create a structure Distance (int feet and float inch). Take two distances as input from user and add them (inch and feet separately). Display total distance in feets and inches |
| 31 | Create a union union Data (int i, float f, char str[20]). WAP to show how to access and print members of union and also print the maximum memory occupied by union members |
| 32 | WAP to add two numbers with the help of command line arguments |
| 33 | WAP to create and store information in a text file (using fprintf and fscanf functions) |
| 34 | WAP to create and store information in a binary file (using fread and fwrite functions) |
| 35 | WAP to create and store information in a data file (using getc and putc functions) |
| 36 | WAP to create and store information in a data file(using fgets and fputs functions) |
| 37 | WAP to create and store information in a data file (using getw and putw functions) |
| 38 | WAP in C to show the functionality of fseek function |
| 39 | Write a program in C to count a number of words and characters in a file |
| 40 | Write a program in C to merge two files and write it in a new file |
| 41 | WAP in C to show the functionality of ftell() and rewind() functions of file handling |
| 42 | WAP in C that takes the file name as an input from user, create a file "data" to store integer numbers from 1 to 10. Create two more files "even" and "odd", read the contents of "data" and check whether the number is even and odd and copied the same in to "even" and "odd" file |
| 43 | WAP in C to show the use of calloc() and realloc() functions |
| 44 | WAP to show the use of following directives #IF, #ELSE and #ENDIF in C |
| 45 | WAP to show the use of STRINGIZE (#) AND TOKENPASTING (##) operator in C |

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q1) In a company an employee is paid as under: If his basic salary is less than Rs. 1500, then HRA = 10% of basic salary and DA = 90% of basic salary. If his salary is either equal to or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic salary

<br>

```c
#include <stdio.h>


int main() {
    int sal, hra, da;

    printf("Enter your salary: ");
    scanf("%d", &sal);

    if (sal < 1500) {
        hra = 0.1 * sal;
        da  = 0.9 * sal;
    }
    else {
        hra = 500;
        da  = 0.98 * sal;
    }

    printf("\nGiven your salary is Rs.%d, your HRA is Rs.%d and DA is Rs.%d", sal, hra, da);

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/1.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q2) A character is entered through keyboard, WAP to determine whether the character is entered capital, small, digit or special character

<br>

```c
#include <stdio.h>


int main() {
    char x;
    char res[18];

    printf("Enter a character: ");
    scanf(" %c", &x);

    printf("%c is a ", x);
    // a(97) to z(122)
    if (x>=97 and x<=122)        {printf("small letter");}
    // A(65) to Z(90)
    else if (x>=65 and x<=90)    {printf("capital letter");}
    // 1(49) to 9(57)
    else if (x>=49 and x<=57)    {printf("digit");}
    // Special Digit
    else                         {printf("special chatacter");}

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/2.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q3) WAP to find the largest of 3 numbers using conditional operators

<br>

```c
#include <stdio.h>


int main() {
    int a,b,c;
    int max;

    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    max = (a>b) ? ( (a>c) ? a : c) : ( (b>c) ? b : c);

    printf("\nAmong those 3 numbers, %d is the greatest number", max);

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/3.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q4) WAP to check whether an entered year is leap year or not

<br>

```c
#include <stdio.h>


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

<center> <img src="/Users/mark/Documents/full/screenshots/4.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q5) WAP to calculate the Armstrong numbers between 1 and 500

<br>

```c
#include <stdio.h>
#include <string.h>
#include <cmath>


bool is_arm(int x) {
    int  sum = 0;
    int  i;
    char ch;
    int  dig;
    int  x_len;
    char x_str[10] = "";

    sprintf(x_str, "%d", x);
    x_len = strlen(x_str);

    for(i=0; i < x_len; i++) {
        ch   = x_str[i];
        dig  = (int)x_str[i];
        dig -= 48;
        sum += pow(dig, 3);
    }

    return x == sum;
}


int main() {
    int start = 1;
    int end   = 500;

    printf("Armstrong numbers between %d and %d are:\n\n", start, end);
    for (int i=start; i<=end; i++) {
        if (not is_arm(i))    {continue;}
        printf("%d ", i);
    }

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/5.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q6) WAP to determine if a number is prime or not

<br>

```c
#include <stdio.h>
#include <string.h>
#include <cmath>


bool is_prime(int x) {
    bool res=true;
    int  end=x/2;

    for (int i=2; i<=end; i++) {
        if (x%i == 0) {
            res = false;
            break;
        }
    }

    return res;
}


int main() {
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("\n%d is ", x);
    is_prime(x) ? : printf("not ");
    printf("a prime number");

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/6.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q7) A five digit number is taken input from user, write a program to reverse that number and find sum of the digit of its digit too

<br>

```c
#include <stdio.h>
#include <string.h>


void rev_str(char *dest, char *source) {
    int i;
    int src_len;

    src_len = strlen(source);
    for (i=0; i<src_len; i++) {
        dest[src_len-i-1] = source[i];
    }
    dest[src_len] = '\0';
}


int main() {
    int  x;
    char x_str[6];
    char x_rev[6];
    int  x_len;
    int  sum=0;

    printf("Enter a 5 digit number: ");
    scanf("%d", &x);

    sprintf(x_str, "%d", x);
    rev_str(x_rev, x_str);
    x_len = strlen(x_str);
    for (int i=0; i<x_len; i++) {
        sum += x_str[i] - 48;
    }

    printf("\nThe reverse of %d is %s, and the sum of its digits is %d", x, x_rev, sum);

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/7.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q8) WAP to print table of any number entered by the user

<br>

```c
#include <stdio.h>


int main() {
    int x;
    int end=10;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("\nThe table of %d is:\n", x);
    for (int i=0; i<=end; i++) {
        printf("%d * %d = %d\n", x, i, x*i);
    }

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/8.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q9) WAP to print the following patterns using loops:

<br>

```c
// *       1       55555   A
// **      12      4444    AB
// **      123     333     ABC
// ****    1234    22      ABCD
// *****   12345   1       ABCDE
#include <stdio.h>
#define  n 5


void _1() {
    int j;
    for (int i=1; i<n+1; i++) {
        for (j=0; j<i; j++) {
            printf("*");
        }
        printf("\n");
    }
}


void _2() {
    int j;
    for (int i=1; i<n+1; i++) {
        for (j=1; j<i+1; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}


void _3() {
    int j;
    for (int i=n; i>0; i--) {
        for (j=0; j<i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
}


void _4() {
    int j;
    for (int i=1; i<n+1; i++) {
        for (j=1; j<i+1; j++) {
            printf("%c", j+64);
        }
        printf("\n");
    }
}


int main() {

    _1();
    printf("\n");
    _2();
    printf("\n");
    _3();
    printf("\n");
    _4();

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/9.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q10) WAP to print sum of series "1 - 1/2 + 1/3 - 1/4.....n" terms

<br>

```c
#include <stdio.h>
#include <string.h>


int main() {
    int   n;
    float ans=0;
    char  op='+';

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i=1; i<n+1; i++) {
        if (op == '+') {
            ans += 1.0/i;
            op   = '-';
        }
        else {
            ans -= 1.0/i;
            op   = '+';
        }
    }

    printf("\n%.5f", ans);

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/10.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q11) WAP to find the sum of series "x - x^3/3! + x^5/5! - x^7/7! + x^9/9!....n " terms

<br>

```c
#include <stdio.h>
#include <string.h>
#include <cmath>



int fact(int x) {
    if   (x==1)    {return 1;}
    else           {return x * fact(x-1);}
}


int main() {
    int   x;
    int   n;
    float ans=0;
    char  op='+';
    float elem;
    int   j=1;

    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the number of terms: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++) {
        elem = pow(x,j) / fact(j);
        if (op=='+') {
            ans += elem;
            op = '-';
        }
        else {
            ans -= elem;
            op = '+';
        }
        j+=2;
    }

    printf("\n%f", ans);

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/11.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q12) WAP to print first 20 nos. of fibonacci series

<br>

```c
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
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/12.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q13) WAP to convert hexadecimal number into a binary number

<br>

```c
#include <stdio.h>
#include <string.h>


const char* chhex2bin(char x) {
    switch (x) {
        case '0':    return "0000";
        case '1':    return "0001";
        case '2':    return "0010";
        case '3':    return "0011";
        case '4':    return "0100";
        case '5':    return "0101";
        case '6':    return "0110";
        case '7':    return "0111";
        case '8':    return "1000";
        case '9':    return "1001";
        case 'A':    return "1010";
        case 'B':    return "1011";
        case 'C':    return "1100";
        case 'D':    return "1101";
        case 'E':    return "1110";
        case 'F':    return "1111";
        default:     return "invalid";
    }
}


int main() {
    char x[100];
    int  x_len;
    char x_bin[400]="";

    printf("Enter a hexadecimal value: ");
    scanf(" %s", x);

    x_len = strlen(x);
    for (int i=0; i<x_len; i++) {
        strcat(x_bin, chhex2bin(x[i]));
    }

    printf("\n%s in binary is %s", x, x_bin);

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/13.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q14) WAP to check whether the input character is a vowel or not using switch case

<br>

```c
#include <stdio.h>


int main() {
    char x;
    bool isVow=false;

    printf("Enter a chracter: ");
    scanf(" %c", &x);

    switch(x) {
        case 'a':
            isVow = true;
            break;
        case 'A':
            isVow = true;
            break;
        case 'e':
            isVow = true;
            break;
        case 'E':
            isVow = true;
            break;
        case 'i':
            isVow = true;
            break;
        case 'I':
            isVow = true;
            break;
        case 'o':
            isVow = true;
            break;
        case 'O':
            isVow = true;
            break;
        case 'u':
            isVow = true;
            break;
        case 'U':
            isVow = true;
            break;
    }

    printf("\n\n%c is a ", x);
    isVow ? printf("vowel") : printf("consonant");

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/14.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q15) WAP to find diameter, circumference and area of a circle using functions

<br>

```c
#include <stdio.h>
#include <cmath>


float diameter(float r) {
    return r*2;
}

float circumfrence(float r) {
    return 2*M_PI*r;
}

float area(float r) {
    return M_PI*r*r;
}


int main() {
    float x;

    printf("Enter the radius: ");
    scanf("%f", &x);

    printf("\nDiameter:     %.3f units\n", diameter(x));
    printf("Circumfrence: %.3f units\n", circumfrence(x));
    printf("Area:         %.3f sq. units\n", area(x));

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/15.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q16) Write a program in C to swap elements using call by reference

<br>

```c
#include <stdio.h>


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore swapping:\n");
    printf("a: %d    b: %d", a, b);
    swap(&a, &b);
    printf("\nAfter swapping:\n");
    printf("a: %d    b: %d", a, b);

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/16.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q17) Write a program to calculate factorial of a number using recursive function

<br>

```c
#include <stdio.h>


int fact(int x) {
    if   (x==1)    {return 1;}
    else           {return x * fact(x-1);}
}


int main() {
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("\n%d! is %d", x, fact(x));

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/17.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q18) WAP to calculate factorial of a number using recursion

<br>

```c
#include <stdio.h>


int fact(int x) {
    if   (x==1)    {return 1;}
    else           {return x * fact(x-1);}
}


int main() {
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("\n%d! is %d", x, fact(x));

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/18.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q19) WAP to find maximum and minimum element of array

<br>

```c
#include <stdio.h>
#define ARR_LEN 10



int max(int *arr) {
    int res=arr[0];

    for (int i=0; i<ARR_LEN; i++) {
        if (arr[i] > res)    {res = arr[i];}
    }

    return res;
}


int min(int *arr) {
    int res=arr[0];

    for (int i=0; i<ARR_LEN; i++) {
        if (arr[i] < res)    {res = arr[i];}
    }

    return res;
}


int main() {
    int arr[ARR_LEN] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("From the given array, the maximum element is %d\n", max(arr));
    printf("From the given array, the minimum element is %d\n", min(arr));

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/19.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q20) WAP to store n elements in an array and print the elements using pointer

<br>

```c
#include <stdio.h>
#include <stdlib.h>


int main() {
    int n;
    int *arr;
    int i;

    printf("Enter the number of integers in the array: ");
    scanf("%d", &n);
    arr = (int*) calloc(n, sizeof(int));
    printf("\n");
    for(i=0; i<n; i++) {
        printf("Enter integer number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\n\033[1;97mINDEX: VALUE\033[0m\n");
    for(i=0; i<n; i++) {
        printf("%d: %d\n", i, *(arr+i));
    }

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/20.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q21) WAP to find the sum and product of 2 matrix using function (user defined)

<br>

```c
#include <stdio.h>


void readMatrix(int c[][3], int row, int col) {
    int i,j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}

void sumMatrix(int a[][3], int b[][3], int c[][3], int row, int col) {
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void productMatrix(int a[][3], int b[][3], int c[][3], int row, int col) {
    int i, j, k;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            c[i][j] = 0;
            for (k = 0; k < col; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int c[3][3];

    sumMatrix(a, b, c, 3, 3);
    printf("Sum of matrix A and B: \n");
    readMatrix(c, 3, 3);

    productMatrix(a, b, c, 3, 3);
    printf("\nProduct of matrix A and B: \n");
    readMatrix(c, 3, 3);

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/21.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q22) Write a program in C to find the largest element in an array using dynamic memory allocation (malloc() and free() functions)

<br>

```c
#include <stdio.h>
#include <stdlib.h>


int max(int *arr, int arr_len) {
    int res = arr[0];

    for (int i=0; i<arr_len; i++) {
        if (arr[i] > res)    {res = arr[i];}
    }

    return res;
}


int min(int *arr, int arr_len) {
    int res     = arr[0];

    for (int i=0; i<arr_len; i++) {
        if (arr[i] < res)    {res = arr[i];}
    }

    return res;
}



int main() {
    int n;
    int *arr;
    int i;
    int max_elem;
    int min_elem;

    printf("Enter the number of integers in the array: ");
    scanf("%d", &n);
    arr = (int*) calloc(n, sizeof(int));
    printf("\n");
    for(i=0; i<n; i++) {
        printf("Enter integer number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\n");
    printf("From the given array, the maximum element is %d\n", max(arr, n));
    printf("From the given array, the minimum element is %d\n", min(arr, n));

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/22.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q23) WAP to check if a given word is a palindrome or not

<br>

```c
#include <stdio.h>
#include <string.h>


void rev_str(char *dest, char *source) {
    int i;
    int src_len;

    src_len = strlen(source);
    for (i=0; i<src_len; i++) {
        dest[src_len-i-1] = source[i];
    }
    dest[src_len] = '\0';
}


int main() {
    char x[100];
    char x_rev[100];

    printf("Enter a word: ");
    scanf("%s", x);

    rev_str(x_rev, x);

    if (strcmp(x, x_rev) == 0) {
        printf("\n%s is a palindrome", x);
    }
    else {
        printf("\n%s is not a palindrome", x);
    }

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/23.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q24) WAP to reverse a string, concatenate two strings, length of a string, copy one string to other using a user defined function and menu driven program

<br>

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define  clrscr() system("clear");


void rev_str(char *dest, char *source) {
    int i;
    int src_len;

    src_len = strlen(source);
    for (i=0; i<src_len; i++) {
        dest[src_len-i-1] = source[i];
    }
    dest[src_len] = NULL;
}


void concat(char *s1, char *s2) {
    int s1_len = strlen(s1);
    int s2_len = strlen(s2);

    for (int i=0; i<s2_len; i++) {
        s1[s1_len+i] = s2[i];
    }
    s1[s1_len + s2_len] = NULL;
}


int str_len(char *x) {
    return (int)(strchr(x, NULL) - x);
}


void str_copy(char *dest, char *source) {
    int src_len = strlen(source);
    for(int i=0; i<src_len; i++) {
        dest[i] = source[i];
    }
    dest[src_len] = NULL;
}



void node_home();
void node_1();
void node_2();
void node_3();
void node_4();

void node_home() {
    int chc;

    printf("\n\nWhat would you like to do? \n\n");
    printf("1) Reverse a string\n");
    printf("2) Concatenate two strings\n");
    printf("3) Find the length of a string\n");
    printf("4) Copy a string to another\n");
    printf("5) Exit\n\n");

    scanf("%d", &chc);

    switch (chc) {
        case 1:
            node_1();
            break;
        case 2:
            node_2();
            break;
        case 3:
            node_3();
            break;
        case 4:
            node_4();
            break;
        case 5:
            exit(0);
            break;
        default:
            exit(-1);
            break;
    }
}


void node_1() {
    clrscr();
    char x[100];
    char x_rev[100];

    printf("\n\nEnter a string: ");
    scanf("%s", x);

    rev_str(x_rev, x);

    printf("\nReverse of %s is %s\n\n", x, x_rev);
    node_home();
}


void node_2() {
    char s1[100];
    char s2[100];

    printf("\n\nEnter s1: ");
    scanf("%s", s1);
    printf("Enter s2: ");
    scanf("%s", s2);

    printf("(Before concatentation)\n");
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
    concat(s1, s2);
    printf("\n(After concatentation)\n");
    printf("s1: %s\n", s1);
    printf("s2: %s\n\n", s2);
    node_home();
}


void node_3() {
    clrscr();
    char x[100];
    int  x_len;

    printf("\n\nEnter a string: ");
    scanf("%s", x);

    x_len = str_len(x);

    printf("\n%s is %d characters long\n\n", x, x_len);
    node_home();
}


void node_4() {
    char s1[100];
    char s2[100];

    printf("\n\nEnter s1: ");
    scanf("%s", s1);
    printf("Enter s2: ");
    scanf("%s", s2);

    printf("(Before copying)\n");
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
    str_copy(s1, s2);
    printf("\n(After copying)\n");
    printf("s1: %s\n", s1);
    printf("s2: %s\n\n", s2);
    node_home();
}



int main() {
    clrscr();

    node_home();

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/24.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q25) WAP to print a string in reverse using a pointer

<br>

```c
#include <stdio.h>
#include <string.h>


void print_in_rev(char *x) {
    int x_len = strlen(x);
    
    for (int i=x_len-1; i>=0; i--) {
        printf("%c", x[i]);
    }
}


int main() {
    char x[100];

    printf("Enter a string: ");
    scanf("%s", x);

    printf("\nThe reverse of %s is ", x);
    print_in_rev(x);

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/25.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q26) WAP to count the number of vowels and consonants in a string using a pointer

<br>

```c
#include <stdio.h>
#include <string.h>


void count_vowels_constants(char *x, int *vowels, int *consonants) {
    int x_len = strlen(x);
    int ch;
    *vowels     = 0;
    *consonants = 0;

    for (int i=0; i<x_len; i++) {
        ch = x[i];
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            *vowels = *vowels+1;
        }
        else {
            *consonants = *consonants+1;
        }
    }
}

int main() {
    char x[100];
    int  vowels;
    int  consonants;

    printf("Enter a string: ");
    scanf("%s", x);

    count_vowels_constants(x, &vowels, &consonants);

    printf("\n%s contains %d vowels and %d consonants", x, vowels, consonants);

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/26.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q27) WAP to read and print employee details like Employee ID, EName, salary using structures

<br>

```c
#include <stdio.h>


struct Employee {
    int   id;
    char  name[100];
    float salary;
};


int main() {
    struct Employee e;

    printf("Enter the employee's ID: ");
    scanf("%d", &e.id);
    printf("Enter the employee's name: ");
    scanf("%s", e.name);
    printf("Enter the employee's salary: ");
    scanf("%f", &e.salary);

    printf("\nEmployee details:\n");
    printf("ID:     %d\n",   e.id);
    printf("Name:   %s\n",   e.name);
    printf("Salary: %.2f\n", e.salary);

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/27.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q28) Create a structure item (char item_name[10], int qty, float price, float total_amt). Enter details regarding items. Create a pointer variable *pitem of a structure item and access the elements or members of a structure using pointer variable by using -> operator

<br>

```c
#include <stdio.h>


struct Item {
    char  item_name[10];
    int   qty;
    float price;
    float total_amt;
};

int main() {
    struct Item i;
    struct Item *iptr = &i;

    printf("Enter the item's name: ");
    scanf("%s", iptr->item_name);
    printf("Enter the item's quantity: ");
    scanf("%d", &iptr->qty);
    printf("Enter the item's price: ");
    scanf("%f", &iptr->price);

    iptr->total_amt = iptr->qty * iptr->price;

    printf("\nItem details: \n");
    printf("Item name:    %s\n",   iptr->item_name);
    printf("Quantity:     %d\n",   iptr->qty);
    printf("Price:        %.2f\n", iptr->price);
    printf("Total amount: %.2f\n", iptr->total_amt);

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/28.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q29) Create a structure student (char name[10], int marks[3], int total, float percentage). Enter the marks of 5 students in 3 subjects and calculate the percentage

<br>

```c
#include <stdio.h>


struct Student {
    char  name[10];
    int   marks[3];
    int   total;
    float percentage;
};

int main() {
    struct Student students[5];
    struct Student s;
    int    n=5;
    int    i,j;

    // Takes input
    for (i=0; i<n; i++) {
        printf("\nEnter the name of student %d: ", i+1);
        scanf("%s", students[i].name);
        printf("Enter the marks of student %d in 3 subjects: ", i+1);
        for (j=0; j<3; j++) {
            scanf("%d", &students[i].marks[j]);
        }
    }

    // Calculates total and percentage
    for (i=0; i<n; i++) {
        students[i].total      = students[i].marks[0] + students[i].marks[1] + students[i].marks[2];
        students[i].percentage = students[i].total / 3.0;
    }

    // Prints their details
    printf("\n");
    for (i=0; i<n; i++) {
        printf("\nStudent %d details:\n", i+1);
        printf("Name:        %s\n",       students[i].name);
        printf("Marks:      %d %d %d\n",  students[i].marks[0], students[i].marks[1], students[i].marks[2]);
        printf("Total:      %d\n",        students[i].total);
        printf("Percentage: %.2f%%\n",    students[i].percentage);
    }

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/29.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q30) Create a structure Distance (int feet and float inch). Take two distances as input from user and add them (inch and feet separately). Display total distance in feets and inches

<br>

```c
#include <stdio.h>
#include <cmath>


struct Distance {
    int   feet;
    float inch;
};


struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance res;
    res.inch = d1.inch + d2.inch;
    res.feet = d1.feet + d2.feet + (int)(res.inch / 12);
    res.inch = res.inch - ( (int)(res.inch / 12)*12 );
    return res;
}


int main() {
    struct Distance d1, d2, res;

    printf("Enter first distance (feet and inches):  ");
    scanf("%d %f", &d1.feet, &d1.inch);

    printf("Enter second distance (feet and inches): ");
    scanf("%d %f", &d2.feet, &d2.inch);

    res = addDistances(d1, d2);

    printf("\nTotal distance: %d feet and %.2f inches\n", res.feet, res.inch);

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/30.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q31) Create a union union Data (int i, float f, char str[20]). WAP to show how to access and print members of union and also print the maximum memory occupied by union members

<br>

```c
#include <stdio.h>


union Data {
    int   i;
    float f;
    char  str[20];
};


int main() {
    union Data x;

    printf("Enter a number: ");
    scanf("%d", &x.i);
    printf("Value currently stored in union: %d", x.i);

    printf("\n\nEnter a float: ");
    scanf("%f", &x.f);
    printf("Value currently stored in union: %f", x.f);

    printf("\n\nEnter a string: ");
    scanf("%s", x.str);
    printf("Value currently stored in union: %s", x.str);

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/31.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q32) WAP to add two numbers with the help of command line arguments

<br>

```c
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    int n1, n2;

    n1 = atoi(argv[1]);
    n2 = atoi(argv[2]);

    printf("%d + %d = %d", n1, n2, n1+n2);
    
    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/32.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q33) WAP to create and store information in a text file (using fprintf and fscanf functions)

<br>

```c
#include <stdio.h>


int main() {
    FILE *fptr;
    char fn[] = "data.txt";
    char x[100];
    char x_read[100];
    
    printf("Enter a string: ");
    scanf("%s", x);

    fptr = fopen(fn, "w");
    fprintf(fptr, "%s", x);
    fclose(fptr);
    
    fptr = fopen(fn, "r");
    fscanf(fptr, "%s", x_read);
    fclose(fptr);
    
    printf("\nData in %s: %s", fn, x_read);
    
    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/33.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q34) WAP to create and store information in a binary file (using fread and fwrite functions)

<br>

```c
#include <stdio.h>
#include <string.h>


int main() {
    FILE *fptr;
    char fn[] = "data.bin";
    char x[100];
    char x_read[100];
    
    printf("Enter a string: ");
    scanf("%s", x);

    fptr = fopen(fn, "w");
    fwrite(x, sizeof(char), strlen(x), fptr);
    fclose(fptr);
    
    fptr = fopen(fn, "r");
    fread(x_read, sizeof(char), strlen(x), fptr);
    fclose(fptr);
    
    printf("\nData in %s: %s", fn, x_read);

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/34.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q35) WAP to create and store information in a data file (using getc and putc functions)

<br>

```c
#include <stdio.h>
#include <string.h>


int main() {
    FILE *fptr;
    char fn[] = "data.txt";
    char x[100];
    char x_read[100];
    int  x_len;
    int  ch;
    int  index=0;
    
    printf("Enter a string: ");
    scanf("%s", x);
    x_len = strlen(x);

    fptr = fopen(fn, "w");
    for (int i=0; i<x_len; i++) {
        putc(x[i], fptr);
    }
    fclose(fptr);
    
    fptr = fopen(fn, "r");
    while (ch != EOF) {
        ch = fgetc(fptr);
        x_read[index] = ch;
        index++;
    }
    fclose(fptr);

    printf("\nData in %s: %s", fn, x_read);
    
    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/35.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q36) WAP to create and store information in a data file(using fgets and fputs functions)

<br>

```c
#include <stdio.h>


int main() {
    FILE *fptr;
    char fn[] = "data.bin";
    char x[100];
    char x_read[100];
    
    printf("Enter a string: ");
    scanf("%s", x);

    fptr = fopen(fn, "w");
    fputs(x, fptr);
    fclose(fptr);
    
    fptr = fopen(fn, "r");
    fgets(x_read, 100, fptr);
    fclose(fptr);
    
    printf("\nData in %s: %s", fn, x_read);

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/36.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q37) WAP to create and store information in a data file (using getw and putw functions)

<br>

```c
#include <stdio.h>
#include <string.h>


int main() {
    FILE *fptr;
    char fn[] = "data.bin";
    char x[100];
    char x_read[100];
    int  x_len;
    int  ch;
    int  index=0;
    
    printf("Enter a string: ");
    scanf("%s", x);
    x_len = strlen(x);

    fptr = fopen(fn, "wb");
    for (int i=0; i<x_len; i++) {
        putw(x[i], fptr);
    }
    fclose(fptr);
    
    fptr = fopen(fn, "rb");
    while (ch != EOF) {
        ch = getw(fptr);
        x_read[index] = ch;
        index++;
    }
    fclose(fptr);
    
    printf("\nData in %s: %s", fn, x_read);

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/37.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q38) WAP in C to show the functionality of fseek function

<br>

```c
#include <stdio.h>


int main() {
    FILE *fptr;
    char fn[] = "data.txt";
    char x[100];
    int  offset;
    int  ch;

    printf("Enter a string: ");
    scanf("%s", x);
    
    fptr = fopen(fn, "w");
    fprintf(fptr, "%s", x);
    fclose(fptr);

    fptr = fopen(fn, "r");
    printf("Enter the offset value: ");
    scanf("%d", &offset);
    fseek(fptr, offset, SEEK_SET);
    ch = fgetc(fptr);
    fclose(fptr);

    printf("\ncharacter at offset %d is %c", offset, ch);

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/38.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q39) Write a program in C to count a number of words and characters in a file

<br>

```c
#include <stdio.h>


int main() {
    FILE *fptr;
    char fn[] = "data.txt";
    int  characters=0;
    int  words=1;
    int  ch;

    fptr = fopen(fn, "r");

    while (ch != EOF) {
        ch = fgetc(fptr);
        if   (ch==' ' or ch=='\n')    { words ++; }
        else                          { characters++; }
    }
    
    printf("%s contains %d words spanning a total of %d characters", fn, words, characters);

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/39.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q40) Write a program in C to merge two files and write it in a new file

<br>

```c
#include <stdio.h>
#include <string.h>


void write(char *filename, char *text) {
    FILE *fptr;

    fptr = fopen(filename, "w");

    fprintf(fptr, "%s", text);
    fclose(fptr);
}


void read(char *filename, char *output) {
    FILE *fptr;
    int  ch;
    int  index=0;

    fptr = fopen(filename, "r");

    while (true) {
        ch = fgetc(fptr);
        if (ch == EOF)    {break;}
        output[index] = ch;
        index++;
    }
    output[index] = NULL;

    fclose(fptr);
}


int main() {
    char fn1[] = "file1.txt";
    char fn2[] = "file2.txt";
    char fn3[] = "file3.txt";
    char out1[100];
    char out2[100];

    read(fn1, out1);
    read(fn2, out2);
    strcat(out1, out2);
    write(fn3, out1);
    
    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/40.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q41) WAP in C to show the functionality of ftell() and rewind() functions of file handling

<br>

```c
#include <stdio.h>


int main() {
    FILE *fptr;
    char fn[] = "data.txt";
    char x[100];
    int  pos;

    printf("Enter a string: ");
    scanf("%s", x);
    
    fptr = fopen(fn, "w");
    fprintf(fptr, "%s", x);
    fclose(fptr);

    fptr = fopen(fn, "r");
    fgetc(fptr);
    pos = ftell(fptr);
    printf("\nThe pointer is currently at the position %d in the file", pos);

    rewind(fptr);
    pos = ftell(fptr);
    printf("\nThe pointer is currently at the position %d in the file", pos);

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/41.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q42) WAP in C that takes the file name as an input from user, create a file "data" to store integer numbers from 1 to 10. Create two more files "even" and "odd", read the contents of "data" and check whether the number is even and odd and copied the same in to "even" and "odd" file

<br>

```c
#include <stdio.h>

int main() {
    FILE *fp_data, *fp_even, *fp_odd;
    char data_file[20];
    char even_file[20];
    char odd_file[20];
    int number;
    
    printf("Enter the name of data file: ");
    scanf("%s", data_file);
    printf("Enter the name of even file: ");
    scanf("%s", even_file);
    printf("Enter the name of odd file: ");
    scanf("%s", odd_file);

    fp_data = fopen(data_file, "w");
    for (int i = 1; i <= 10; i++) {
        fprintf(fp_data, "%d\n", i);
    }
    fclose(fp_data);

    fp_data = fopen(data_file, "r");
    fp_even = fopen(even_file, "w");
    fp_odd = fopen(odd_file, "w");
    
    while (fscanf(fp_data, "%d", &number) == 1) {
        if (number % 2 == 0) {
            fprintf(fp_even, "%d\n", number);
        } else {
            fprintf(fp_odd, "%d\n", number);
        }
    }

    fclose(fp_data);
    fclose(fp_even);
    fclose(fp_odd);
    
    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/42.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q43) WAP in C to show the use of calloc() and realloc() functions

<br>

```c
#include <stdio.h>
#include <stdlib.h>


int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int*) calloc(n, sizeof(int));
    printf("\narr can currently store %d integers\n\n", n);
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (int*) realloc(arr, n*sizeof(int));
    printf("\narr can currently store %d integers\n\n", n);

    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/43.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q44) WAP to show the use of following directives #IF, #ELSE and #ENDIF in C

<br>

```c
#include <stdio.h>
#define NUMBER 100


int main() {
    #if NUMBER < 0
        printf("NUMBER is negative\n");
    #elif NUMBER == 0
        printf("NUMBER is zero\n");
    #else
        printf("NUMBER is positive\n");
    #endif
   
    printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/44.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

## Q45) WAP to show the use of STRINGIZE (#) AND TOKENPASTING (##) operator in C

<br>

```c
#include <stdio.h>
#define concat(a, b) a##b
#define str(s) #s


int main() {
   int xy = 100;
   
   printf("Value of xy: %d\n", xy);
   printf("String of xy: %s\n", str(xy));
   printf("Concatenated value of x and y: %d\n", concat(x, y));
   
   printf("\n");
}
```

<br><br>

<center> <img src="/Users/mark/Documents/full/screenshots/45.png"> </center>

<div style="page-break-after: always; visibility: hidden">\pagebreak</div>

