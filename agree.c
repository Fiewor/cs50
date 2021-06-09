#include <cs50.h>
#include <stdio.h>

int main(void) {
    char c = ("Do you agree?");
// in C, you have to use single quotes when you're comparing individual characters (char)
    if (c == 'y' || c == 'Y') printf("Agreed");
    else if (c == 'n' || c == 'N') printf("Not agreed.");
}