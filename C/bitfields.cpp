#include <stdio.h>


struct DATE1 {
    int date;
    int month;
    int year;
};

struct DATE2 {
    // We use "unsigned" so that we dont have to waste a bit on MSB
    unsigned int date:5;   // 0-31
    unsigned int month:4;  // 0-15
    unsigned int year:12;  // 0-4095
};



int main() {
    struct DATE1 date1 = {14, 7, 2023};
    struct DATE2 date2 = {14, 7, 2023};
    
    printf("\ndate1: %d/%d/%d (%lu)", date1.date, date1.month, date1.year, sizeof(date1));
    printf("\ndate2: %d/%d/%d (%lu)", date2.date, date2.month, date2.year, sizeof(date2));

    printf("\n");
}