#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*🔍 Challenge Breakdown

Program Goals (as seen in your comments):
	1.	✅ Find all prime numbers below a given upper limit
	2.	✅ Find the first prime number above a given lower limit
	3.	✅ Define constant MAX equal to 1000
	4.	✅ If upper limit < 2 OR > MAX → exit the program
	5.	✅ Do same for lower limit
	6.	✅ Make check_if_prime(), limit_out_of_bounds_check(), and error_print() 
    functions */


    const int MAX = 1000;
    bool isPrime = true;
    bool check_if_prime(int number){
       
    if (number < 2)
        return false;

    for (int i = 2; i < number; i++) {
        if (number % i == 0)
            return false;
    }

    return true;
}

bool limit_out_of_bounds_check(int number) {
    if (number < 2 || number > MAX) {
        printf("Number is out of the valid range (2 to %d).\n", MAX);
        return true;
    } else {
        return false;
    }
}
    void error_print(char *msg) {
    fprintf(stderr, "Error: %s\n", msg);
}



int main(){
int userInput;
printf("welcome to the game, please insert a number:\n");
scanf("%d", &userInput);



if (limit_out_of_bounds_check(userInput)) {
    error_print("Number is out of bounds (must be between 2 and 1000).");
    return 1;
}

if (check_if_prime(userInput)) {
    printf("%d is a prime number.\n", userInput);
} else {
    printf("%d is NOT a prime number.\n", userInput);
}

for (int i = 2; i <= userInput; i++) {
    if (check_if_prime(i)) {
        printf("%d ", i);
    }
}

printf("\nPlease enter a lower limit:\n");
int lowerLimit;
scanf("%d", &lowerLimit);

if (limit_out_of_bounds_check(lowerLimit)) {
    error_print("Lower limit is out of bounds (must be between 2 and 1000).");
    return 1;
}

int candidate = lowerLimit + 1;
while (candidate <= MAX) {
    if (check_if_prime(candidate)) {
        printf("The first prime number above %d is %d.\n", lowerLimit, candidate);
        break;
    }
    candidate++;
}

}