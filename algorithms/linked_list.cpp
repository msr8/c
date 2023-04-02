#include <stdio.h>
#include <stdlib.h>



struct Node {
    int data;
    struct Node* next;
};

struct LinkedList {
    struct Node* head;
};



// We need to use pointers because else the function operates on a copy
void initialiseList(struct LinkedList *list) {
    list->head = NULL;
}

void appendList(struct LinkedList *list, int data) {
    // We gotta allocate new memeory bcz else if we creae a local var, it will be destroyed once function is over
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;

    // If the list has just been initialised
    if (list->head == NULL) {
        list->head = node;
    }
    // Else, gets to the last node
    else {
        struct Node* curr_node = list->head;
        while (curr_node->next != NULL) {
            curr_node = curr_node->next;
        }
        curr_node->next = node;
    }
}

// Print the contents of the list
void printList(struct LinkedList* list) {
    // If list is empty
    if (list->head == NULL) {
        printf("[]");
        return;
    }

    printf("[");
    struct Node* curr_node = list->head;

    while (curr_node->next != NULL) {
        printf("%d, ", curr_node->data);
        curr_node = curr_node->next;
    }

    printf("%d]", curr_node->data);
}




int main() {
    struct LinkedList list;

    initialiseList(&list);
    appendList(&list, 45);
    appendList(&list, 41);
    appendList(&list, 78);

    printList(&list);

    printf("\n");
}

