#include <stdio.h>
#include<stdlib.h>


int main(){
    int x,l,b,r,a;
    float pie=3.14;
    printf("Hello world!\n");
    printf("choose a option");
    printf("1.area of rectangle\n");
    printf("2.area of circle\n");
    printf("3.area of square\n");
    printf("4.exit\n");
    scanf("%d",&x);
    while(1) {
        switch(x) {
            case 1:
                printf("enter the length and breadth\n");
                scanf("%d%d\n",&l,&b);
                printf("area of rectangle is %d\n",l*b);
                break;
            case 2:
                printf("enter the radius of circle\n");
                scanf("%d",&r);
                printf("area of circle is %f\n",pie*r*r);
                break;
            case 3:
                printf("enter the side of square\n");
                scanf("%d",&a);
                printf("area of square is %d\n",a*a);
                break;
            case 4:
                exit(0);
            default:
                printf("invalid choice");
                break;
        }
    }
        return 0;
    

}