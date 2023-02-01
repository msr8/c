// Create a structure Distance (int feet and float inch). Take two distances as input from user and add them (inch and feet separately). Display total distance in feets and inches
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