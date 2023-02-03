// Create a structure item (char item_name[10], int qty, float price, float total_amt). Enter details regarding items. Create a pointer variable *pitem of a structure item and access the elements or members of a structure using pointer variable by using -> operator
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