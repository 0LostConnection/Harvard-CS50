#include <cs50.h>
#include <stdio.h>

int add(int x, int y);

int main(void) {
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("Result: 1000%i\n", add(x, y));
}

int add(int x, int y) {
    return x + y;
}