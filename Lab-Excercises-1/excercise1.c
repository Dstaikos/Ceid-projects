#include <stdio.h>

int main() {
    float a, b, c; // Declare three integers to store the lengths of the triangle's sides

    // Get the length of the first side
    printf("give length of the first side: ");
    scanf("%f", &a);

    // Get the length of the second side
    printf("give length of the second side: ");
    scanf("%f", &b);

    // Get the length of the third side
    printf("give length of the third side: ");
    scanf("%f", &c);

    // Check if the three sides satisfy the triangle inequality theorem
    if (a + b > c && a + c > b && b + c > a) {
        printf("The triangle is valid");  // If the condition is true, it's a valid triangle
    } else {
        printf("The triangle is not valid");  // Otherwise, it's not a valid triangle
    }

    return 0;
}
