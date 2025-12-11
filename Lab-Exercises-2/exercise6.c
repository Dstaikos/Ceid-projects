#include <stdio.h>

// returns the number that appears most consecutively
int find_most_consecutive() {
    int n;

    printf("give the amount of numbers: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("invalid amount.\n");
        return 0;
    }

    int num, prev, max_num, count = 1, max_count = 1;

    // read first number
    printf("give first number: ");
    scanf("%d", &prev);
    max_num = prev;

    // process the rest
    for (int i = 2; i <= n; i++) {
        printf("give number(%d in order): ", i);
        scanf("%d", &num);

        if (num == prev)
            count++;        // continue streak
        else
            count = 1;      // reset streak

        if (count > max_count) {
            max_count = count;
            max_num = num;  // update max streak number
        }

        prev = num;
    }

    return max_num; // return result
}

int main() {
    int result = find_most_consecutive();
    printf("The number that appeared the most times was %d\n", result);
    return 0;
}
