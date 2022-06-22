

// Print Prime

#include <stdio.h>
#include <stdlib.h>

int isPrime(int num);
void printPrime(int index, int n);
void printSum(int index, int n, int sum);

int main(void){
	int index = 2, n, sum = 0;
	printf("Please enter a positive integer number (0 to end): ");
	scanf("%d", &n);
	if(n != 0){
		printPrime(index, n);
		printSum(index, n, sum);
	}	
	return 0;
}
int isPrime(int num){
        int i;
        for(i = 2; i <= num/2; i++){
                if(num % i == 0){
                return 0;
                }
        }
        return 1;
}
void printPrime(int index, int n){
	printf("Primes before %d are: ", n);
	while(index <= n){
        	if(isPrime(index)){
            	printf("%d ", index);
        	}
        index++;
    	}
}
void printSum(int index, int n, int sum){
    while(index <= n){
        if(isPrime(index)){
            sum++;
        }
        index++;
    }
    printf("\n%d Prime numbers smaller than %d\n",sum, n);
}
