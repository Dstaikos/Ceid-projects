#include <stdio.h>

int isPrime(int number) {
    if (number <= 1)  // 0 and 1 are not prime
        return 0;

    //check if the number is divisible by any number other than itself
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0)
            return 0;  // not prime
    }

    return 1;  // prime
}

int main() {
    // initialize variables
    int num;
    int count = 0;

    printf("Give number: ");
    scanf("%d", &num); // ask user for number

    if (isPrime(num)){

        printf("The number is Prime");  // 1 = prime
        return 0;

    }else{
        // calculate and print the amount of number that can divide the number
        for (int i = 1; i <= num;i++){
        if (num % i == 0){
            count++;
            }
        }
        printf("The number is not prime, and the amount of numbers it can be divided by is %d", count);
    }

    return 0;
}
