#include <cs50.h>
#include <stdio.h>

int main(void) {

    // Bad
    /* const int n = get_int("Size: ");
    if (n < 1 ) main(); */

    int n;

    do {
        n = get_int("Size: ");
    } while (n < 1);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("#");
        }
        printf("\n");
    }
}
