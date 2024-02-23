#include <stdio.h>


int main() {
    printf("DATE: %s\n", __DATE__);
    printf("TIME: %s\n", __TIME__);
    printf("LINE: %d\n", __LINE__);
    printf("FILE: %s\n", __FILE__);

    printf("\n");
}