#include <cs50.h>
#include <stdio.h>

int main(void) {
    char agreed = get_char("Do you agree? [y/N]: ");

    if (agreed == 'y' || agreed == 'Y') {
        printf("Agreed.\n");
    } else if (agreed == 'n' || agreed == 'N') {
        printf("Not agreed.\n");
    } else
        main();
}