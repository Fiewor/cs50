#include <cs50.h>
#include <stdio.h>

int get_width_and_height(void);
int main(void) {
    int i = get_width_and_height();
}

int get_width_and_height(void) {
    int w = get_int("Width: ");
    int h = get_int("Height: ");
    for (int i = 0; i < w; i++) {
        for (int j = 0; i < h; i++) {
            print("#");
        }
        printf("\n");
    }
}