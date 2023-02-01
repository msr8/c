// WAP in C that takes the file name as an input from user, create a file "data" to store integer numbers from 1 to 10. Create two more files "even" and "odd", read the contents of "data" and check whether the number is even and odd and copied the same in to "even" and "odd" file
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