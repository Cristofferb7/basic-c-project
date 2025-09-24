#include <stdio.h>
#include <stdbool.h>


int sleepHours;
char userSelection;
float totalSleep;
float totalHours;



int main()
{

    while (userSelection != 'C' && 'c' != userSelection)
    {
    printf("welcome to the sleep tracker, please select one of these options to check: \n");
    printf("A to enter sleep\n");
    printf("B to check total sleep\n");
    printf("C to exit\n");

    userSelection = getchar(); //wait for the user to type a character
    getchar(); //deletes the next line

    if (userSelection == 'A' || userSelection == 'a')

{
    printf("please enter sleep\n");
    scanf("%d",&sleepHours);
    getchar();
    totalSleep+= sleepHours;
    printf("this is the amount of hours you entered %d", sleepHours);
    getchar();

    


    }

    else if (userSelection == 'B' || userSelection == 'b')
    {
        printf("you have selected to check total sleep\n");
        printf("this is your total sleep %f" ,totalSleep);
        getchar();
    }

}


    return 0;
}
























