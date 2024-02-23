#include <stdio.h>
#include <stdlib.h>

// Structure to represent a term in the polynomial
struct Term {
    int coefficient;
    int exponent;
    struct Term* next;
};

// Structure to represent the polynomial
struct Polynomial {
    struct Term* head;
};

// Function to initialize the polynomial
void initializePolynomial(struct Polynomial* polynomial) {
    polynomial->head = NULL;
}

// Function to insert a term into the polynomial
void insertTerm(struct Polynomial* polynomial, int coefficient, int exponent) {
    struct Term* newTerm = (struct Term*)malloc(sizeof(struct Term));
    newTerm->coefficient = coefficient;
    newTerm->exponent = exponent;
    newTerm->next = NULL;

    if (polynomial->head == NULL) {
        polynomial->head = newTerm;
    } else {
        struct Term* currentTerm = polynomial->head;
        while (currentTerm->next != NULL) {
            currentTerm = currentTerm->next;
        }
        currentTerm->next = newTerm;
    }
}

// Function to print the polynomial
void printPolynomial(struct Polynomial* polynomial) {
    struct Term* currentTerm = polynomial->head;

    while (currentTerm != NULL) {
        printf("%dx^%d", currentTerm->coefficient, currentTerm->exponent);

        if (currentTerm->next != NULL) {
            printf(" + ");
        }

        currentTerm = currentTerm->next;
    }

    printf("\n");
}

// Function to add two polynomials
struct Polynomial addPolynomials(struct Polynomial* polynomial1, struct Polynomial* polynomial2) {
    struct Polynomial result;
    initializePolynomial(&result);

    struct Term* term1 = polynomial1->head;
    struct Term* term2 = polynomial2->head;

    while (term1 != NULL && term2 != NULL) {
        if (term1->exponent > term2->exponent) {
            insertTerm(&result, term1->coefficient, term1->exponent);
            term1 = term1->next;
        } else if (term1->exponent < term2->exponent) {
            insertTerm(&result, term2->coefficient, term2->exponent);
            term2 = term2->next;
        } else {
            int sum = term1->coefficient + term2->coefficient;
            insertTerm(&result, sum, term1->exponent);
            term1 = term1->next;
            term2 = term2->next;
        }
    }

    // Append the remaining terms of polynomial1
    while (term1 != NULL) {
        insertTerm(&result, term1->coefficient, term1->exponent);
        term1 = term1->next;
    }

    // Append the remaining terms of polynomial2
    while (term2 != NULL) {
        insertTerm(&result, term2->coefficient, term2->exponent);
        term2 = term2->next;
    }

    return result;
}

int main() {
    // Create the first polynomial: 3x^2 + 4x + 2
    struct Polynomial polynomial1;
    initializePolynomial(&polynomial1);
    insertTerm(&polynomial1, 3, 2);
    insertTerm(&polynomial1, 4, 1);
    insertTerm(&polynomial1, 2, 0);

    // Create the second polynomial: 2x^3 + 5x + 1
    struct Polynomial polynomial2;
    initializePolynomial(&polynomial2);
    insertTerm(&polynomial2, 2, 3);
    insertTerm(&polynomial2, 5, 1);
    insertTerm(&polynomial2, 1, 0);

    // Add the polynomials
    struct Polynomial sum = addPolynomials(&polynomial1, &polynomial2);

    // Print the polynomials and their sum
    printf("Polynomial 1: ");
    printPolynomial(&polynomial1);

    printf("Polynomial 2: ");
    printPolynomial(&polynomial2);

    printf("Sum: ");
    printPolynomial(&sum);

    printf("\n");
}
