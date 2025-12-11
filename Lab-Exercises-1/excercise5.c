#include <stdio.h>

int main() {
    int month, day;
    int days_in_month;

    // Ask for month number
    printf("Give month number (1-12): ");
    scanf("%d", &month);

    // Validate month input
    while (month < 1 || month > 12) {
        printf("Invalid month. Give again (1-12): ");
        scanf("%d", &month);
    }

    // Determine number of days in the given month
    switch (month) {
        case 2:
            days_in_month = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days_in_month = 30;
            break;
        default:
            days_in_month = 31;
            break;
    }

    // Ask for day of month
    printf("Give current day: ");
    scanf("%d", &day);

    // Validate day input
    while (day < 1 || day > days_in_month) {
        printf("Give current day (1-%d): ", days_in_month);
        scanf("%d", &day);
    }

    // Add 50 days
    for (int i = 0; i < 50; i++) {
        day++;

        // Recalculate month/day rollover
        switch (month) {
            case 2:
                days_in_month = 28;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                days_in_month = 30;
                break;
            default:
                days_in_month = 31;
                break;
        }

        if (day > days_in_month) {
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
            }
        }
    }

    // Display the final date
    printf("The date in 50 days will be %d/%d\n", month, day);
    return 0;
}
