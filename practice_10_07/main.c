#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/*📋 Program Flow:
	1.	Ask the user how many 4th down attempts they want to simulate (e.g., 5)
	2.	For each attempt:
	•	Ask: "Attempt X (convert/fail):"
	•	User types "convert" or "fail"
	3.	At the end:
	•	Print how many 4th downs were converted
	•	Show conversion percentage (e.g., 60%)
*/

int userInput;

int attemptConv(int number) {
    char result[10];
    int conversions = 0;

    for (int i = 0; i < number; i++) {
        printf("Attempt %d (convert/fail): ", i + 1);
        scanf("%9s", result);
        if (strcmp(result, "convert") == 0) {
            conversions++;
        }
    }
    return conversions;
}

int main() {
    printf("How many 4th down attempts would you like to simulate? ");
    scanf("%d", &userInput);

    int conversions = attemptConv(userInput);

    printf("Total conversions: %d\n", conversions);
    if (userInput > 0) {
        double percentage = ((double)conversions / userInput) * 100;
        printf("Conversion percentage: %.0f%%\n", percentage);
    }

    return 0;
}