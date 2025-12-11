#include <stdio.h>
#include <string.h>

#define M 200
#define MAX_WORDS 100
#define MAX_POS 100

// Check if word already exists in the list of distinct words
int exists(char distinct[][M], int count, char *word) {
    for (int i = 0; i < count; i++) {
        if (strcmp(distinct[i], word) == 0)
            return 1;
    }
    return 0;
}

// Find positions of word inside B (word boundaries respected)
int find_positions(char *B, char *word, int pos[]) {
    int count = 0;
    int lenB = strlen(B);
    int lenW = strlen(word);

    for (int i = 0; i <= lenB - lenW; i++) {

        if (strncmp(&B[i], word, lenW) == 0) {

            int before_ok = (i == 0 || B[i - 1] == ' ');
            int after_ok  = (i + lenW == lenB || B[i + lenW] == ' ');

            if (before_ok && after_ok)
                pos[count++] = i;
        }
    }

    return count;
}

int main() {

    char A[M], B[M];
    char distinct[MAX_WORDS][M];
    int distinctCount = 0;

    printf("Enter string A: ");
    fgets(A, M, stdin);
    A[strcspn(A, "\n")] = 0;

    printf("Enter string B: ");
    fgets(B, M, stdin);
    B[strcspn(B, "\n")] = 0;

    // extract distinct words from A
    char tempA[M];
    strcpy(tempA, A);

    char *word = strtok(tempA, " ");

    while (word != NULL) {

        if (!exists(distinct, distinctCount, word)) {
            strcpy(distinct[distinctCount], word);
            distinctCount++;
        }

        word = strtok(NULL, " ");
    }

    //  For each distinct word, search in B
    for (int i = 0; i < distinctCount; i++) {

        int positions[MAX_POS];
        int found = find_positions(B, distinct[i], positions);

        printf("Word '%s' appears at positions: ", distinct[i]);

        if (found == 0) {
            printf("None");
        } else {
            for (int k = 0; k < found; k++)
                printf("%d ", positions[k]);
        }

        printf("\n");
    }

    return 0;
}
