#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*💡 CHALLENGE: Even or Odd Prime Sorter


Youll write a program that:
	1.	Asks the user for a range of numbers (two inputs: start and end)
	2.	Checks each number in that range
	3.	For each number:
	•	If it’s prime, tell the user if it’s even or odd
	•	If it’s not prime, skip it
	4.	Print a final count of:
	•	Total primes found
	•	How many were even vs. odd */


    int userInput;
    int userInput2;
    int MAX = 100;

bool check_if_prime(int number) {
    if (number <= 1) return false;
    if (number == 2) return true;
    if (number % 2 == 0) return false;
    for (int i = 3; i * i <= number; i += 2) {
        if (number % i == 0) return false;
    }
    return true;
}

void rangeFunction (int number1, int number2){
    int totalPrimes = 0;
    int evenPrimes = 0;
    int oddPrimes = 0;

    for (int num = number1; num <= number2; num++) {
        if (check_if_prime(num)) {
            totalPrimes++;
            if (num % 2 == 0) {
                evenPrimes++;
                printf("%d is an even prime number.\n", num);
            } else {
                oddPrimes++;
                printf("%d is an odd prime number.\n", num);
            }
        }
    }

    printf("Total primes found: %d\n", totalPrimes);
    printf("Even primes: %d\n", evenPrimes);
    printf("Odd primes: %d\n", oddPrimes);
}

int main(){
    printf("hey please enter a number between 1 and 100\n");
    scanf("%d", &userInput);
    printf("hey please enter a number between 1 and 100\n");
    scanf("%d", &userInput2);
    if (userInput < 1 || userInput > MAX || userInput2 < 1 || userInput2 > MAX) {
        printf("Invalid number! Please enter something between 1 and %d.\n", MAX);
        return 1;
    }

    rangeFunction(userInput,userInput2);

}