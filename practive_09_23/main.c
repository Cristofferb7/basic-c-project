#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


    
    
/*
challenge : prime numbers challenge 🚀
    1. define contstant MAX 100
    2.	Get input from user:
	•	Upper limit for finding primes.
	•	Lower limit for checking the next prime.
	3.	Validate input:
	•	If upper > MAX → exit with cleanup.
	•	If lower < 2 → exit with cleanup.
	4.	Find all primes below upper limit:
	•	Loop from 2 to upper.
	•	For each number, check if it’s prime.
	•	Check divisibility from 2 to sqrt(num) (optimization) or just up to num-1 (simpler but slower).
	5.	Print them.
	6.	Find the first prime > lower limit.
	7.	Call cleanup function and exit.*/