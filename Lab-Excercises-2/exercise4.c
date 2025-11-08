#include <stdio.h>

int calculation(N){

    int result = 0;// we will store the final result here

    for(int i = 3;i<= N*3;i+=3){ // loop from 3 to 3*N skipping 3 characters each time

        result += i*i; // adding the squared number to the result

    }

    return result;
}

int main() {

    int num; // initialize the number


    printf("give a positive number below 10: ");
    scanf("%d", &num); // asking for number input from user

    while (num <= 0 || num >= 10){ // check if number is between 1-9

        printf("give a positive number below 10: ");
        scanf("%d", &num); // if not ask for input again
    }

    printf("the result is: %d", calculation(num)); // print the result of the function

    return 0;

}
