#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>  // ✅ needed for strcmp

int penaltyTrackerA() {
    char userInput[10];  // ✅ string to store goal/miss input
    int score = 0;       // ✅ initialize score counter

    for (int i = 0; i < 5; i++) {
        printf("Team A Kick %d (goal/miss): ", i + 1);  // 👈 display 1 to 5
        scanf("%s", userInput);

        if (strcmp(userInput, "goal") == 0) {
            score++;
        }
    }

    return score;
}
int penaltyTrackerB() {
    char userInput[10];  // ✅ string to store goal/miss input
    int score = 0;       // ✅ initialize score counter

    for (int i = 0; i < 5; i++) {
        printf("Team B Kick %d (goal/miss): ", i + 1);  // 👈 display 1 to 5
        scanf("%s", userInput);

        if (strcmp(userInput, "goal") == 0) {
            score++;
        }
    }

    return score;
}


int main(){

    int scoreA = penaltyTrackerA();
    int scoreB= penaltyTrackerB();


   

printf("\nFinal Score:\nTeam A: %d\nTeam B: %d\n", scoreA, scoreB);

if (scoreA > scoreB) {
    printf("🏆 Team A wins!\n");
} else if (scoreB > scoreA) {
    printf("🏆 Team B wins!\n");
} else {
    printf("🤯 It's a tie! Game goes to sudden death!\n");
}


}