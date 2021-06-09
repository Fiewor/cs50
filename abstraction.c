// a simplification on top of more complex implementaion details
#include <stdio.h>
// creating a new function (*C-type confsion)

//below is what is known as a PROTOTYPE which is a hint - a way of telling the compiler that there will be a function called meow just not yet
void meow(void);

int main(void) {
    for(int i = 0; i < 3; i++) {
        meow(3);
    }
}

// put custom functions at the bottom of the file
// void meow(void) {
void meow(int n) {
    for(int i = 0; i < n; i++) {
        print("meow\n");
    }
}