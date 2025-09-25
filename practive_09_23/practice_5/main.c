#include <stdio.h>
#include <stdlib.h>


/*
📝 Challenge: Lucky Number Finder
	•	Ask the user for a range of numbers (start and end).
	•	Your program should loop through that range and:
	1.	Print only the numbers that are divisible by 3 or 5 but not both.
	2.	Count how many such numbers you found and print the total at the end.*/


    int number1;
    int number2;
    int divisible3;
    int divisible5;

    int main(){


printf("hey user, enter a number1 cycle: ");
        scanf("%d",&number1);
        printf("hey user, enter a number2 cycle: ");
        scanf("%d",&number2);

int count = 0;

for (int i = number1; i <= number2; i++) {
    if ((i % 3 == 0 || i % 5 == 0) && !(i % 3 == 0 && i % 5 == 0)) {
        printf("%d is a lucky number\n", i);
        count++;
    }
}

printf("Total lucky numbers: %d\n", count);

    }
