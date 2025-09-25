#include <stdio.h>
#include <stdlib.h>




/*📝 Challenge 
	•	You have 3 planets orbiting a star.
	•	Each planet takes a different number of days (a, b, c) to complete 1 orbit.
	•	You want to find:
	1.	How many days until all three align again (they’re at the same starting point).
	2.	How many orbits each planet completes in that time.*/




char planetA[50], planetB[50], planetC[50];
int orbitA, orbitB, orbitC;
int aligmentDay= 0;

int main(){

printf("Enter planet A name: ");
scanf("%s", planetA);
printf("Enter orbit days: ");
scanf("%d", &orbitA);

printf("Enter planet B name: ");
scanf("%s", planetB);
printf("Enter orbit days: ");
scanf("%d", &orbitB);

printf("Enter planet C name: ");
scanf("%s", planetC);
printf("Enter orbit days: ");
scanf("%d", &orbitC);

for (int day = 1; ; day++) {  // loop forever
    if (day % orbitA == 0 && day % orbitB == 0 && day % orbitC == 0) {
        // alignment found
        aligmentDay = day;

        break;
    }
}

printf("\nAll planets align again after %d days.\n", aligmentDay);
int revolutionsA = aligmentDay / orbitA;
int revolutionsB = aligmentDay / orbitB;
int revolutionsC = aligmentDay / orbitC;

printf("%s completed %d orbits.\n", planetA, revolutionsA);
printf("%s completed %d orbits.\n", planetB, revolutionsB);
printf("%s completed %d orbits.\n", planetC, revolutionsC);






























}




