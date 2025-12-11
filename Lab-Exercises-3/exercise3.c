#include <stdio.h>
#include <string.h>

// Read 20 bookstore names
void fillBoard1(char Board1[20][100]) {

    for (int i = 0; i < 20; i++) {
        printf("Give name of bookstore %d: ", i + 1);
        scanf("%s", Board1[i]);   // reads one word (no spaces)
    }
}

// Read 500 book titles
void fillBoard2(char Board2[500][100]) {

    for (int i = 0; i < 500; i++) {
        printf("Give book title %d: ", i + 1);
        scanf("%s", Board2[i]);   // reads one word (no spaces)
    }
}

// Read the number of copies each bookstore has for each title
void fillBoard3(char Board1[20][100], char Board2[500][100], int Board3[20][500]) {

    int amount;

    for (int i = 0; i < 20; i++) {

        printf("\n--- Bookstore: %s ---\n", Board1[i]);

        for (int j = 0; j < 500; j++) {

            printf("Give amount of \"%s\" books: ", Board2[j]);
            scanf("%d", &amount);

            Board3[i][j] = amount;   // store number of copies
        }
    }
}

int main() {

    char Board1[20][100];     // bookstore names
    char Board2[500][100];    // book titles
    int  Board3[20][500];     // copies for each bookstore and title

    char title[100];
    char bookstore_name[100];

    // Fill input tables
    fillBoard1(Board1);
    fillBoard2(Board2);
    fillBoard3(Board1, Board2, Board3);


    // Find bookstores that have copies of a title


    int titleIndex = -1;

    while (titleIndex == -1) {

        printf("\nGive book title: ");
        scanf("%s", title);

        // Search for the book in Board2
        for (int j = 0; j < 500; j++) {
            if (strcmp(Board2[j], title) == 0) {
                titleIndex = j;
                break;
            }
        }

        if (titleIndex == -1)
            printf("Book not found. Try again.\n");
    }

    printf("\nBookstores that have \"%s\":\n", title);

    for (int i = 0; i < 20; i++) {

        if (Board3[i][titleIndex] > 0) {
            printf("%s, copies: %d\n", Board1[i], Board3[i][titleIndex]);
        }
    }

    // Count how many different books a store has

    int index = -1;

    while (index == -1) {

        printf("\nGive a bookstore name: ");
        scanf("%s", bookstore_name);

        for (int k = 0; k < 20; k++) {
            if (strcmp(Board1[k], bookstore_name) == 0) {
                index = k;
                break;
            }
        }

        if (index == -1)
            printf("Bookstore not found. Try again.\n");
    }

    int amount = 0;

    // Count how many titles have > 0 copies
    for (int v = 0; v < 500; v++) {
        if (Board3[index][v] > 0) {
            amount++;
        }
    }

    printf("\nThe bookstore \"%s\" has %d different books available.\n",
           bookstore_name, amount);

    return 0;
}
