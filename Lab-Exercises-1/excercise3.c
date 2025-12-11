#include <stdio.h>

int main() {
    double small, big;

    // Ask user for number of small and big bottles
    printf("Give amount of small bottles: ");
    scanf("%lf", &small);
    printf("Give amount of big bottles: ");
    scanf("%lf", &big);

    // Calculate total cost
    double total_cost = (small * 0.008) + (big * 0.02);

    // Apply 8% discount if total bottles > 3000 or cost > 200
    if (small + big > 3000 || total_cost > 200 && total_cost <= 600) {
        total_cost = total_cost * 0.92;
    }

    // Apply 20% discount if cost > 600
    if (total_cost > 600) {
        total_cost = total_cost * 0.8;
    }

    // Display final total cost
    printf("The total cost is: %lf", total_cost);

    return 0;
}
