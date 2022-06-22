

#include <stdio.h>
#include <stdlib.h>


int main(void){

	int i, j, num = 1, sum = 0;

	while (num != 0){
		printf("Enter a positive number (0 to end)> ");         // prints initial prompt
		scanf("%d", &num);                            // takes num input from user
		printf("Primes before %d are :", num);        // prints initial output message
		for (i = 2; i <= num; i++){                   // starts i loop from 2 (0 and 1 do not count as prime)
			for(j = 2; j <= i; j++){              // inner for loop for a second index
				if(i % j == 0){               // if statement checks if i can be devided by j with no remainder (modulus)
					break;	  	      // Breaks the INNER for loop if j / i has a remainder
				}
			}
			if (i == j){                          // if i is divisible by j without a remainder it must mean i = j and is prime
				sum++;			      // if number is prime add 1 to sum
				printf(" %d", i);	      // print prime number
			}
		}
	printf("\n%d Prime numbers smaller than %d", sum, num); // print sum
	}
	return 0;
}
