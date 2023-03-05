#include <stdio.h>
#include <string.h>


enum mode {
    LOW,
    MEDIUM,
    HIGH
};


int main() {
    enum mode intensity;

    intensity = LOW;
    printf("Intensity: %d\n", intensity);
    intensity = MEDIUM;
    printf("Intensity: %d\n", intensity);
    intensity = HIGH;
    printf("Intensity: %d\n", intensity);

    printf("\n");
}