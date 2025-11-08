#include <stdio.h>


int ascii(number,counter){


    while (number <= 126) {  // from ASCII 48 ('0') to 126 ('~')

        printf("%c(%d)\t", number, number);  // print ASCII code and character
        number++; //increase number by 1
        counter++; //increase counter by 1

        if (counter == 10) {   // new line every 10 characters
            printf("\n");
            counter = 0;
        }
    }


}

int main() {

    //initialize variables
    int i = 48;
    int count = 0;

    ascii(i,count); //calling the function


    return 0;
}

