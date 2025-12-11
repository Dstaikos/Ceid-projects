#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 10   // number of sentences
#define M 100  // max length of each sentence

int main() {

    char lexicon[N][M];   // array of N strings
    int lengths[101] = {0};  // counts of word lengths (1–100)

    char sent[M];

    // Read N sentences from the user
    for (int i = 0; i < N; i++) {
        printf("Give sentence %d: ", i + 1);
        fgets(sent, 100, stdin);
        sent[strcspn(sent, "\n")] = 0;   // remove newline
        strcpy(lexicon[i], sent);        // store in lexicon
    }

    char current[M];

    // Process each sentence
    for (int i = 0; i < N; i++) {

        int count = 0;   // current word length
        strcpy(current, lexicon[i]);

        int length = strlen(current);

        // Count word lengths character by character
        for (int j = 0; j < length; j++) {

            if (isalnum(current[j])) {
                // letters and digits count towards word length
                count++;
            } else {
                // any punctuation or space ends the current word
                if (count > 0) {
                    lengths[count]++;  // store count of this word length
                    count = 0;
                }
            }
        }

        // If sentence ended while still in a word, record it
        if (count > 0) {
            lengths[count]++;
        }
    }

    // Print board
    printf("\nWord length \t\t Number of occurrences\n\n");

    for (int i = 1; i <= 100; i++) {

        printf("%d\t\t\t ", i);

        for (int j = 0; j < lengths[i]; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
