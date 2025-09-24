#include <stdlib.h>
#include <stdio.h>


typedef enum {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY,
}weekDays;




int main(){

    int userInput;
    weekDays today;



        printf("select 1-7 something\n");
        scanf("%d", &userInput);
        getchar();

   today = (weekDays) userInput;



    switch (today)
    {
    case MONDAY:
        printf( "monday\n");
        break;
    case TUESDAY:
        printf( "tuesday\n" );
        break;
    case WEDNESDAY:
        printf( "wednesday\n");
        break;
    case THURSDAY:
        printf( "thursday\n");
        break;
    case FRIDAY:
        printf( "friday\n");
        break;
    case SATURDAY:
        printf( "saturday\n");
        break;
    case SUNDAY:
        printf( "sunday\n");
        break;
    
    default:
        printf("invalid request try again");

        
    
    }

        return 0;


}