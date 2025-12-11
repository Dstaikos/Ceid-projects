#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>   // required for tolower()

// Function that checks if a letter exists in the word
// Returns 1 if found, 0 if not found
int check(char word[], char letter) {

    int length = strlen(word);

    for (int i = 0; i < length; i++) {
        if (letter == tolower(word[i])) {
            return 1;
        }
    }

    return 0;
}

int main() {

    char word[20];   // buffer for the secret word (max 20 chars)

    // First user enters the word
    printf("Give word: ");
    scanf("%s", word);

    int length = strlen(word);

    // Clear the screen (Windows: cls / Linux: clear)
    system("cls");

    // Array that stores the guessed version (initially all '_')
    char newWord[length];
    int counter = 8;  // number of attempts

    for (int i = 0; i < length; i++) {
        newWord[i] = '_';
    }

    // Print the initial blank word
    for (int i = 0; i < length; i++) {
        printf("%c ", newWord[i]);
    }
    printf("\n");

    char letter;
    int foundempty = 0; // becomes 1 when no '_' remain

    // Main game loop
    while ((counter > 0) && (foundempty == 0)) {

        foundempty = 1; // will become 0 again if '_' exists

        printf("Attempts remaining: %d\n", counter);
        printf("Give letter: ");
        scanf(" %c", &letter);

        letter = tolower(letter); // convert input to lowercase

        int foundletter = check(word, letter);
        int repeatletter = 0;

        // Check if letter was already guessed
        for (int i = 0; i < length; i++) {
            if (letter == newWord[i]) {
                printf("Letter already used");
                repeatletter = 1;
                break;
            }
        }

        // If letter exists and is not a repeat → reveal it
        if (foundletter && !repeatletter) {
            for (int i = 0; i < length; i++) {
                if (letter == tolower(word[i])) {
                    newWord[i] = letter;
                }
            }
        }

        // If incorrect (and not a repeat), reduce attempts
        if (!foundletter && !repeatletter) {
            counter--;
        }

        printf("\n");

        // Print the current progress and check if any '_' remain
        for (int i = 0; i < length; i++) {
            printf("%c ", newWord[i]);
            if (newWord[i] == '_') {
                foundempty = 0;
            }
        }
        printf("\n");
    }

    // Final result message
    if (counter == 0) {
        printf("\nGame over. The word was:\n");
        for (int i = 0; i < length; i++) {
            printf("%c", word[i]);
        }
        printf("\n");
    } else {
        printf("\nCongratulations, you found the word!\n");
    }

    return 0;
}
