#include <stdio.h>

// Function that performs all 4 tasks of the exercise
void function7() {
    int N;

    // Ask user for how many natural numbers to process
    printf("Give the amount of integers: ");
    scanf("%d", &N);

    int sum = 0;
    float average = 0.0;
    int newList[N]; // Array to store squared numbers

    // Calculate sum and fill array of squares
    for (int i = 0; i < N; i++) {
        sum += (i + 1);             // Add current natural number
        newList[i] = (i + 1) * (i + 1); // Store its square
    }

    // Compute average as a float
    average = (float)sum / N;

    // Display the first N natural numbers
    printf("\nThe first %d natural numbers are: ", N);
    for (int i = 0; i < N; i++)
        printf("%d ", i + 1);

    // Display the sum and average
    printf("\nThe sum is: %d", sum);
    printf("\nThe average is: %.2f", average);

    // Display the new sequence of squared numbers
    printf("\nThe squared numbers are: ");
    for (int i = 0; i < N; i++)
        printf("%d ", newList[i]);

    printf("\n");
}

// Main function calls the above
int main() {
    function7();
    return 0;
}
