#include <stdio.h>

// Initialize the hotel matrix with all rooms free (0)
void init(int hotel[8][20]) {

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 20; j++) {
            hotel[i][j] = 0;   // room is free
        }
    }
}

// Print all available rooms (rooms = 0) in each section
void PrintAvailable(int hotel[8][20]) {

    for (int i = 0; i < 8; i++) {

        printf("Available rooms in section %d:\n", i + 1);

        for (int j = 0; j < 20; j++) {
            if (hotel[i][j] == 0) {
                printf("%d\n", j + 1);
            }
        }
    }
}

// Book the first free room in a section
void Book(int hotel[8][20]) {

    int section;

    printf("Give section number: ");
    scanf("%d", &section);

    // Validate section input
    while (section < 1 || section > 8) {
        printf("Give section number (1-8): ");
        scanf("%d", &section);
    }

    int j = 0;

    // Find first free room
    while (j < 20 && hotel[section - 1][j] == 1) {
        j++;
    }

    // If found, book it
    if (j < 20) {
        hotel[section - 1][j] = 1;
        printf("Room %d booked in section %d.\n", j + 1, section);

    } else {
        // If no rooms free, ask user again
        printf("No available rooms in section %d. Choose another.\n", section);
        Book(hotel);
    }
}

// Cancel an existing reservation
void cancelBooking(int hotel[8][20]) {

    int section, room;

    printf("Give section number: ");
    scanf("%d", &section);

    // Validate section
    while (section < 1 || section > 8) {
        printf("Give section number (1-8): ");
        scanf("%d", &section);
    }

    printf("Give room number: ");
    scanf("%d", &room);

    // Validate room
    while (room < 1 || room > 20) {
        printf("Give room number (1-20): ");
        scanf("%d", &room);
    }

    hotel[section - 1][room - 1] = 0;   // free the room
    printf("Booking cancelled for section %d, room %d.\n", section, room);
}


int main() {

    int hotel[8][20];  // 8 sections, 20 rooms each
    char choice = ' ';

    init(hotel);       // initialize all rooms

    while (choice != 'D') {

        // Menu
        printf("\nA -> Print available rooms in each section\n");
        printf("B -> Book a room\n");
        printf("C -> Cancel a reservation\n");
        printf("D -> End program\n");
        scanf(" %c", &choice);

        // Validate option
        while ((choice != 'A') && (choice != 'B') &&
               (choice != 'C') && (choice != 'D')) {

            printf("Invalid choice. Try again:\n");
            scanf(" %c", &choice);
        }

        if (choice == 'A')
            PrintAvailable(hotel);

        if (choice == 'B')
            Book(hotel);

        if (choice == 'C')
            cancelBooking(hotel);

        if (choice == 'D')
            return 0;   // exit program
    }

    return 0;
}
