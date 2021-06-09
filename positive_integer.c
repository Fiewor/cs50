#include <cs50>
#include <stdio.h>

int get_positive_int(void);

int main (void) {
    int i = get_positive_int();
    printf("%i\n", i);
}

// Prompt user for positive integer
// using INT instead of VOID because this function is returning an output (which is an int)
int get_positive_int(void) {
    int n; //declaring it oustide the do/while so that it would have a global scopee
    do {
        n = get_int("Positive Integer: ");
    }
    while (n < 1);
    // DO the following WHILE n is less than 1
    return n;
}