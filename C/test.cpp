// A
// AB
// ABC
// ABCD
#include <stdio.h>

int main() {
    int  lines = 4;
    char start = 'A';
    int  j = 0;

    for (int i=1; i<=lines; i++) {

        for (j=0; j<i; j++) {
            printf("%d ", j);
            // printf("%c ", start+j);
        }

        printf("\n");
    }


    printf("\n");
}

