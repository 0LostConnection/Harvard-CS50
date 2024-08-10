#include <cs50.h>
#include <stdio.h>

int main(void) {
    int age = get_int("How old are you? ");
    if (age < 18) {
        printf("You're underage!\n\n");
    }

    else {
        printf("You're a big boy/girl!\n\n");
    }

    int counter = 0;

    printf("10 Count test!\n");

    while (counter <= 10) {
        printf("Count: %i", counter);
        get_string("");
        counter++;
    }

    printf("Done, thx! :)\n");
}