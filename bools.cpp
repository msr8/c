# include <stdio.h>

int main () {
    bool a = true;
    bool b = false;

    // Prints ou current data
    printf("A: ");
    printf(a ? "True":"False");
    printf("\nB: ");
    printf(b ? "True":"False");

    // Calculates the bools
    bool _and = a && b;
    bool _or  = a || b;
    bool _eq  = a == b;

    // Prints out the results
    printf("\n");
    printf("\nA || B: %s");
    printf(_or  ? "True":"False");
    printf("\nA && B: ");
    printf(_and ? "True":"False");
    printf("\nA == B: ");
    printf(_eq  ? "True":"False");

    printf("\n");
}


