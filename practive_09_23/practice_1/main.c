#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int userInput;

int main() {

    do {
        printf("Enter a number (-1 to quit): ");
        scanf("%d", &userInput);

        if (userInput == -1) {
            printf("We gotta exit the program\n");
        }

       // 3. handle only positives
    if (userInput > 0) {
        int power = 1;

        // inner loop: keep doubling until >= userInput
        while (power < userInput) {
            power *= 2;
        }

        printf("Smallest power of 2 >= %d is %d\n", userInput, power);
    }

    } while (userInput != -1);

    return 0;
}