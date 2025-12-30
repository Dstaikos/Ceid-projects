#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 10
#define M 30
#define LEX_SIZE 7


//initialize struct
struct word_pair{

    char word[M];
    int length;

};



//function that returns the length of a string
int string_length(char string[]){

    int length = 0;
    while (string[length]!='\0'){
        length++;
    }

    return length;

}

// function that asks user for input until its valid and then stores the word and its length to the arrays.
void initialize(struct word_pair word_table[], int size){

    char word[M];
    int wordLen;

    for(int i = 0;i<size;i++){

        int isValid = 1;

        do{

            isValid = 1;

            printf("Give string #%d: ", i+1);
            fgets(word, M, stdin);
            word[strcspn(word, "\n")] = '\0';

            wordLen = string_length(word);

            for (int j=0; j<wordLen;j++){
                if(!isalnum((unsigned char)word[j])){
                    printf("Only alphanumeric characters allowed.\n");
                    isValid=0;
                    break;
        }
            }
        }while(isValid != 1);

        strcpy(word_table[i].word,word);
        word_table[i].length = wordLen;
    }
}

//function that replaces a specific string with another one
void replace(struct word_pair word_table[], int size, char search_string[M], char replacement_string[M]) {

    for(int i=0;i<size;i++){
        if (strcmp(word_table[i].word, search_string) == 0){

            strcpy(word_table[i].word,replacement_string);

            word_table[i].length = string_length(replacement_string);
        }
    }


}

//function that receives a string and checks if it exists as a substring or as a subsequence in the original
void sub_string_sequence(struct word_pair word_table[], int size, char search_string[M]) {

    int search_len = string_length(search_string);

    for (int w = 0; w < size; w++) {

        char *word = word_table[w].word;
        int word_len = string_length(word);

        /* ---------- substring check---------- */
        int substring_found = 0;

        if (search_len <= word_len) {
            for (int i = 0; i <= word_len - search_len; i++) {

                int found = 1;

                for (int j = 0; j < search_len; j++) {
                    if (word[i + j] != search_string[j]) {
                        found = 0;
                        break;
                    }
                }

                if (found == 1) {
                    printf("Substring found: %s\n", word);
                    substring_found = 1;
                    break;
                }
            }
        }

        /* ---------- subsequence check ---------- */
        int s = 0;

        for (int j = 0; j < word_len; j++) {
            if (word[j] == search_string[s]) {
                s++;
            }
            if (s == search_len) {
                printf("Subsequence found: %s\n", word);
                break;
            }
        }
    }
}


//function that translates specific english words to italian if their spotted in the string
void translate(struct word_pair word_table[], int size){

    char lexicon[][2][M]={
    {"table", "tavolo"},
    {"word", "parola"},
    {"car", "auto"},
    {"tree", "albero"},
    {"addition", "aggiuntaguidare"},
    {"drive" , "fahern"},
    {"bicycle", "macchina"}
    } ;


    for(int i=0;i<size;i++){

        for(int j=0;j<LEX_SIZE;j++){

            if (strcmp(word_table[i].word, lexicon[j][0])== 0){

                strcpy(word_table[i].word, lexicon[j][1]);

                word_table[i].length = string_length(lexicon[j][1]);

                break;
            }
        }

    }


}

//function for printing the array
void print_table(struct word_pair word_table[], int size) {

    printf("\n\t\tWORD TABLE\n");

    for (int i = 0; i < size; i++) {
        printf("%2d. %-29s | length: %d\n", i + 1, word_table[i].word, word_table[i].length);
    }
}

//calling functions and getting inputs
int main(){

    struct word_pair word_table[N];

    initialize(word_table, N);

    char search_string[M];
    char replace_string[M];
    char search_string_sub[M];

    printf("Give the string you want to find in the table: ");
    scanf("%29s", search_string);

    printf("Give the string you want to replace it with: ");
    scanf("%29s", replace_string);

    replace(word_table, N, search_string, replace_string);

    printf("Give a string to search for substrings and subsequences: ");
    scanf("%29s", search_string_sub);

    sub_string_sequence(word_table, N, search_string_sub);

    translate(word_table, N);

    print_table(word_table, N);




    return 0;
}
