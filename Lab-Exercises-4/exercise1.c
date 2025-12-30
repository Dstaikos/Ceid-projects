#include <stdio.h>
#include <string.h>

#define N 10

//initialize the struct
struct Account {

    char name[20];
    float deposit;
    char date[15];

};


//function that gets inputs for the info of each deposit
void inputs(int n, struct Account accounts[]){

    for (int i=0;i<n;i++){

        printf("Account #%d\n", i+1);


        printf("Give name: ");
        scanf("%19s", accounts[i].name);

        printf("Give deposit: ");
        scanf("%f", &accounts[i].deposit);

        printf("Give date: ");
        scanf("%14s", accounts[i].date);

    }

}

void readName(int n, struct Account accounts[]){

    char searchName[20];
    float sum = 0;
    int count = 0;

    //asking user to give name input

    printf("Give name youre looking for: ");
    scanf("%19s", searchName);



    for(int i=0;i<n;i++){
        if (strcmp(searchName, accounts[i].name)==0){//check if that name exists
            printf("\nName: %s", accounts[i].name);         //
            printf("\nDeposit: %.2f", accounts[i].deposit); // printing account info for that name
            printf("\nDate: %s", accounts[i].date);         //

            sum += accounts[i].deposit; // adding deposit value into a sum in case there is more than one deposit in this account
            count++;//increasing counter to check how many times the name was found/ whether it was found

        }
    }

    if (count > 1){//if there is more than one deposit, print total deposit value

        printf("\nTotal deposit amount: %.2f\n", sum);
    }

    if (count == 0){ // account with that name not found

       printf("\nNo accounts found for this name.\n");
    }

}

//initialize array and call functions
int main() {

    struct Account accounts[N];

    inputs(N, accounts);

    readName(N, accounts);


    return 0;

}
