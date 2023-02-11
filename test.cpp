#include<stdio.h>
int rec(int);
int main()
{
int a,fact;
printf("Enter any number");
scanf("%d",&a);
fact = rec(a);
printf("Factorial Value=%d",fact);
}
int rec(int x)
{
int f;
if(x==1)
{
return(1);
}
else
{
f = x *rec(x-1); //3 * rec(2) //3* rec(2) * rec(1) //3*2*1 //6
}
return (f);
}
