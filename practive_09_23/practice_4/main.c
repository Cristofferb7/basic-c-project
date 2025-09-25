#include <stdio.h>
#include <stdlib.h>




	/*•	You have 3 blinking traffic lights at an intersection.
	•	Each light has a different cycle length in seconds (a, b, c).
	•	You want to find:
	1.	After how many seconds will all three lights blink together again.
	2.	How many times each light has blinked in that time.*/



    int light1;
    int light2;
    int light3;
    int cycle;
    int lightIntercept;
    int alignment = 0;

    int main(){

        printf("hey user, enter a light1 cycle: ");
        scanf("%d",&light1);
        printf("hey user, enter a light2 cycle: ");
        scanf("%d",&light2);
        printf("hey user, enter a light3 cycle: ");
        scanf("%d",&light3);

        for (int t = 1;; t++)
        {
           if (t % light1 == 0 && t % light2 == 0 && t % light3 == 0) {
        alignment=t;
        break;
            }
        }

    int blinks1 = alignment / light1;
    int blinks2 = alignment / light2;
    int blinks3 = alignment / light3;

printf("\nAll lights align again after %d seconds.\n", alignment);
printf("Light 1 blinked %d times.\n", blinks1);
printf("Light 2 blinked %d times.\n", blinks2);
printf("Light 3 blinked %d times.\n", blinks3);



    }