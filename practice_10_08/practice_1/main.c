#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


/*🏀 Challenge: Free Throw Practice Tracker (Basketball Edition)

You’re going to simulate a basketball player practicing free throws. You’ll ask the user how many shots they took, and for each one, whether it was made or missed.

⸻

🎯 Program Goals:
	1.	Ask: “How many free throws did the player take?”
	2.	For each shot:
	•	Ask: “Shot X (make/miss):”
	•	Count how many were made
	3.	At the end:
	•	Print how many shots were made
	•	Print the shooting percentage (e.g., 80%)
*/

int userInput;

int trackFreeThrows(int totalShots){
    int conversions=0;

    char result [10];
    for (int i = 0; i < totalShots; i++)
    {
        printf("did you make the shot (make/miss)?\n");
        scanf("%s", result);

        if (strcmp(result, "make") == 0) {
            conversions++;
        }
    }
    return conversions;
}

int main() {
    printf("How many free thorws did the player take?\n ");
    scanf("%d", &userInput);

    int made = trackFreeThrows (userInput);


    printf("Total made: %d\n", made);
float percentage = ((float)made / userInput) * 100;
printf("Shooting percentage: %.1f%%\n", percentage);

}