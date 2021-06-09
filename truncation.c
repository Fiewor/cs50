#include <cs50.h>
#include <stdio.h>
int x = get_int("x: ");
int y = get_int("y: ");

float z = (float)x / (float)y;
// you can typecast(change the datatype) by putting
// the datatype that you want in parenthesis
// e.g. (float)
printf("%f\n", z);

// syntatic sugar - a different way of doing something syntatically that doesn't give you any new capabiilities that you didn't already have, just makes it more pleasant/simpler to type
