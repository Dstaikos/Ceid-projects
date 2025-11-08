#include <stdio.h>

float func1(float a, float b, float c) {
    // Check if the three sides satisfy the triangle inequality theorem
    if (a + b > c && a + c > b && b + c > a) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    float a, b, c; // Declare three variables to store the lengths of the triangle's sides

    // Get the length of the first side
    printf("Give length of the first side: ");
    scanf("%f", &a);

    // Get the length of the second side
    printf("Give length of the second side: ");
    scanf("%f", &b);

    // Get the length of the third side
    printf("Give length of the third side: ");
    scanf("%f", &c);

    // Call the function correctly
    float result = func1(a, b, c);

    // Print result
    if (result == 1) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}
