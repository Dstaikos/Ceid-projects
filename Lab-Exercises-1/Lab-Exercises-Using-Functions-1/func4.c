#include <stdio.h>

int func4(int num){

    int reversed = 0;

    int temp = num; // Store original number

    // Reverse the digits of the number
    while (temp > 0) {
        int digit = temp % 10;          // Get last digit
        reversed = reversed * 10 + digit; // Append digit to reversed number
        temp /= 10;                     // Remove last digit from temp
    }

    // Display result
    printf("The reversed number is: %d\n", reversed);


}

int main() {

    int num;


    // Ask user for a 5-digit positive integer
    printf("Give a five digit, positive integer: ");
    scanf("%d", &num);

    // Validate that the input is exactly 5 digits
    while (num <= 10000 || num > 99999) {
        printf("Give a five digit, positive integer: ");
        scanf("%d", &num);
    }

    int result = func4(num);

    return 0;
}
