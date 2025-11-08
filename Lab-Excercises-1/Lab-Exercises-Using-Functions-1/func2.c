#include <stdio.h>

int func2(int hours, int minutes, int seconds) {

    // Convert input time to total seconds

    int seconds_total = hours * 3600 + minutes * 60 + seconds;


    // Total seconds in a day
    int remaining_time = (24 * 3600) - seconds_total;

    // Convert remaining seconds to hh:mm:ss
    int final_hours = remaining_time / 3600;
    int final_minutes = (remaining_time % 3600) / 60;
    int final_seconds = remaining_time % 60;

    // Print time remaining
    printf("Time remaining util midnight: %02d:%02d:%02d\n", final_hours, final_minutes, final_seconds);

}


int main(){

    int hours, minutes, seconds;

    // Ask for input
    printf("Give time hh:mm:ss: ");
    scanf("%d:%d:%d", &hours, &minutes, &seconds);

    // Validate input (reject invalid times)
    while (!(hours >= 0 && hours < 24 && minutes >= 0 && minutes < 60 && seconds >= 0 && seconds < 60)) {
        printf("Invalid time. Please enter a valid time (hh:mm:ss): ");
        scanf("%d:%d:%d", &hours, &minutes, &seconds);
    }

    int result = func2(hours, minutes, seconds);



    return 0;
}
