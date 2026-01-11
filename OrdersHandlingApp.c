#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void menu(){
    printf("\t     MENU\n");

    printf("\t    ------\n\n");

    printf("Basic Operations\n");
    printf("-----------------\n");
    printf("0 - Exit\n");
    printf("1 - Insert an order\n");
    printf("2 - Display customer orders\n\n");

    printf("Pending Orders\n");
    printf("----------------\n");
    printf("3 - Display pending orders\n");
    printf("4 - Save pending orders to file\n");
    printf("5 - Load pending orders from file\n");
    printf("6 - Execute order (calculate initial order cost)\n\n");

    printf("Orders ready for payment\n");
    printf("-------------------------\n");
    printf("7 - Display orders ready for payment\n");
    printf("8 - Pay order (calculate final order cost)\n\n");

    printf("Completed orders\n");
    printf("------------------\n");
    printf("9 - Display completed orders\n");
    printf("10 - Save completed orders to a separate file\n");
    printf("11 - Load completed orders from file\n\n\n");

}

typedef enum {

    PENDING,
    READY,
    CLOSED

} Status;

typedef struct{

    char name[50];
    int smallB;
    int bigB;
    char orderDate[11];
    char mustExecuteDate[11];
    float initialCost;
    float discount;
    float finalCost;
    char executeDate[11];
    Status status;

}Order;




//--------------------------(1)--------------------------------//

Order getOrder(){

    Order o;

    printf("Customer Name: ");
    scanf("%49s",o.name);

    printf("Amount of small bottles: ");
    scanf("%d",&o.smallB);

    printf("Amount of big bottles: ");
    scanf("%d",&o.bigB);

    printf("Order date (dd/mm/yyyy): ");
    scanf("%10s", o.orderDate);

    printf("Execution deadline (dd/mm/yyyy): ");
    scanf("%10s", o.mustExecuteDate);

    return o;
}
//----------------------------------------------------------------------------//






//----------------------------------(2)-----------------------------------------//

void printClientOrders(Order orders[100], int count){

    char searchName[50];

    printf("Name of the customer you are looking for: ");
    scanf("%49s",searchName);

    int found = 0;
    for(int i=0;i<count;i++){
        if(strcmp(orders[i].name,searchName)==0){
            found = 1;

            printf("\nOrders for %s:\n\n",searchName);

            if(orders[i].status == PENDING){
                printf("Amount of small bottles: %d\n", orders[i].smallB);
                printf("Amount of big bottles: %d\n", orders[i].bigB);
                printf("Order date: %s\n", orders[i].orderDate);
                printf("Order must be executed by: %s\n", orders[i].mustExecuteDate);
                printf("Status: PENDING\n\n");
            }

            else if(orders[i].status == READY){
                printf("Amount of small bottles: %d\n", orders[i].smallB);
                printf("Amount of big bottles: %d\n", orders[i].bigB);
                printf("Order date: %s\n", orders[i].orderDate);
                printf("Order must be executed by: %s\n", orders[i].mustExecuteDate);
                printf("Initial cost: %.2f\n", orders[i].initialCost);
                printf("Status: READY\n\n");
            }
            else if(orders[i].status == CLOSED){
                printf("Amount of small bottles: %d\n", orders[i].smallB);
                printf("Amount of big bottles: %d\n", orders[i].bigB);
                printf("Order date: %s\n", orders[i].orderDate);
                printf("Order must be executed by: %s\n", orders[i].mustExecuteDate);
                printf("Initial cost: %.2f\n", orders[i].initialCost);
                printf("Discount: %.2f\n", orders[i].discount);
                printf("Final cost: %.2f\n", orders[i].finalCost);
                printf("Order was executed on: %s\n", orders[i].executeDate);
                printf("Status: CLOSED\n\n");
            }
        }
    }
    if(found==0){
        printf("Customer not found\n");
    }
}
//-----------------------------------------------------------------------------------//









//-------------------------------(3)-----------------------------------------------//

void printPendingOrders(Order orders[100], int count){

    printf("Pending Orders:\n\n");

    for(int i=0;i<count;i++){
        if (orders[i].status == PENDING){

            printf("Customer name: %s\n", orders[i].name);
            printf("Amount of small bottles: %d\n", orders[i].smallB);
            printf("Amount of big bottles: %d\n", orders[i].bigB);
            printf("Order date: %s\n", orders[i].orderDate);
            printf("Order must be executed by: %s\n", orders[i].mustExecuteDate);
            printf("Status: PENDING\n\n\n");
        }
    }

}
//------------------------------------------------------------------------------------//





//-----------------------------------(4)-----------------------------------------------//


void writePendingOrders(Order orders[100], int count){

    FILE *fileName;

    fileName = fopen("Pending_Orders.txt","a");

    if(fileName == NULL){
        printf("Error opening file.\n");
        return;
    }

    for(int i=0;i<count;i++){
        if (orders[i].status == PENDING){

        fprintf(fileName, "%s %d %d %s %s\n",
        orders[i].name,
        orders[i].smallB,
        orders[i].bigB,
        orders[i].orderDate,
        orders[i].mustExecuteDate);
        }
    }
    fclose(fileName);
}
//--------------------------------------------------------------------------------------//




//----------------------------------------(5)----------------------------------------//

void loadPendingOrders(Order orders[100], int *count){

    FILE *fileName;

    fileName = fopen("Pending_Orders.txt", "r");

    if(fileName == NULL){
        printf("File not found\n");
        return;
    }

    Order o;

    while(fscanf(fileName, "%49s %d %d %10s %10s",
                 o.name,
                 &o.smallB,
                 &o.bigB,
                 o.orderDate,
                 o.mustExecuteDate) == 5){

        o.status = PENDING;
        o.initialCost = 0;
        o.discount = 0;
        o.finalCost = 0;
        strcpy(o.executeDate, "-");

        orders[*count] = o;
        (*count)++;
    }

    fclose(fileName);

}
//-----------------------------------------------------------------------------------//






//------------------------------------(6)---------------------------------------------//

float calculateInitialCost(int SB, int BB){

    float initialCost = SB * 0.08 + BB * 0.35;

    return initialCost;

}

//------------------------------------------------------------------------------------//






//------------------------------------(7)---------------------------------------------//

void printReadyOrders(Order orders[100], int count){

    printf("Orders Ready For Payment:\n\n");

    for(int i=0;i<count;i++){
        if (orders[i].status == READY){
            printf("Customer name: %s\n", orders[i].name);
            printf("Amount of small bottles: %d\n", orders[i].smallB);
            printf("Amount of big bottles: %d\n", orders[i].bigB);
            printf("Order date: %s\n", orders[i].orderDate);
            printf("Order must be executed by: %s\n", orders[i].mustExecuteDate);
            printf("Initial cost: %.2f\n", orders[i].initialCost);
            printf("Status: READY\n\n\n");
        }
    }
}
//------------------------------------------------------------------------------------//




//------------------------------------(8)---------------------------------------------//

float calculateDiscount(int SB, int BB, float initialCost){

    float discount = 0.0;

    if(initialCost > 600){

        discount = initialCost*0.24;

    }else if((initialCost>300) || ((SB+BB) > 1000)){

        discount = initialCost*0.12;
    }
    return discount;
}
//-------------------------------------------------------------------------------------//




//----------------------------------(9)----------------------------------------------//


void printClosedOrders(Order orders[100], int count){

    printf("Paid Orders:\n\n");

    for(int i=0;i<count;i++){
        if (orders[i].status == CLOSED){
            printf("Customer name: %s\n", orders[i].name);
            printf("Amount of small bottles: %d\n", orders[i].smallB);
            printf("Amount of big bottles: %d\n", orders[i].bigB);
            printf("Order date: %s\n", orders[i].orderDate);
            printf("Order must be executed by: %s\n", orders[i].mustExecuteDate);
            printf("Initial cost: %.2f\n", orders[i].initialCost);
            printf("Discount: %.2f\n", orders[i].discount);
            printf("Final cost: %.2f\n", orders[i].finalCost);
            printf("Execution date: %s\n", orders[i].executeDate);
            printf("Status: CLOSED\n\n\n");
        }
    }
}
//---------------------------------------------------------------------------------------//




//------------------------------------(10)----------------------------------------------//

void writeClosedOrders(Order orders[100], int count)  {

    FILE *fileName;

    fileName = fopen("Closed_Orders.txt","a");

    if(fileName == NULL){
        printf("Error opening file.\n");
        return;
    }

    for(int i=0;i<count;i++){
        if (orders[i].status == CLOSED){

        fprintf(fileName, "%s %d %d %s %s %.2f %.2f %.2f %s\n",
        orders[i].name,
        orders[i].smallB,
        orders[i].bigB,
        orders[i].orderDate,
        orders[i].mustExecuteDate,
        orders[i].initialCost,
        orders[i].discount,
        orders[i].finalCost,
        orders[i].executeDate);
        }
    }
    fclose(fileName);
}
//-----------------------------------------------------------------------------------//




//----------------------------------(11)----------------------------------------------//
void loadClosedOrders(Order orders[100], int *count){

    FILE *fileName = fopen("Closed_Orders.txt", "r");

    if(fileName == NULL){
        printf("File not found\n");
        return;
    }

    Order o;

    while(fscanf(fileName,
                 "%49s %d %d %10s %10s %f %f %f %10s",
                 o.name,
                 &o.smallB,
                 &o.bigB,
                 o.orderDate,
                 o.mustExecuteDate,
                 &o.initialCost,
                 &o.discount,
                 &o.finalCost,
                 o.executeDate) == 9){

        o.status = CLOSED;

        orders[*count] = o;
        (*count)++;
    }

    fclose(fileName);
}

//-----------------------------------------------------------------------------------//



int main(){

    Order orders[100];

    int count = 0;

    int choice;

    menu();

    printf("Choose option(1-11): ");
    scanf("%d",&choice);

    while(choice !=0){

        while(choice<0 || choice > 11){
            printf("Please input valid option number: ");
            scanf("%d",&choice);
        }

        system("cls");


        if(choice==1){

            orders[count] = getOrder();
            orders[count].status = PENDING;
            count++;

            printf("Order inserted!\n\n");

            char cont;
            do {
                printf("Back To Main Menu(m) / Exit(e): ");
                scanf(" %c", &cont);
          }while(cont != 'm' && cont != 'e');
                if(cont == 'e'){
                    return 0;
                }
            system("cls");
        }


        if(choice==2){
            printClientOrders(orders, count);
            char cont;
            do {
                printf("\nBack To Main Menu(m) / Exit(e): ");
                scanf(" %c", &cont);
          }while(cont != 'm' && cont != 'e');
                if(cont == 'e'){
                    return 0;
                }
            system("cls");
        }

        if(choice==3){
            printPendingOrders(orders, count);
            char cont;
            do {
                printf("\nBack To Main Menu(m) / Exit(e): ");
                scanf(" %c", &cont);
          }while(cont != 'm' && cont != 'e');
                if(cont == 'e'){
                    return 0;
                }
            system("cls");
        }

        if(choice==4){
            writePendingOrders(orders, count);
            printf("Pending orders Saved in Pending_Orders.txt\n");
            char cont;
            do {
                printf("\nBack To Main Menu(m) / Exit(e): ");
                scanf(" %c", &cont);
          }while(cont != 'm' && cont != 'e');
                if(cont == 'e'){
                    return 0;
                }
            system("cls");
        }

        if(choice==5){
            count = 0;
            loadPendingOrders(orders, &count);
            printf("Pending orders loaded successfully.\n");
            char cont;
            do {
                printf("\nBack To Main Menu(m) / Exit(e): ");
                scanf(" %c", &cont);
          }while(cont != 'm' && cont != 'e');
                if(cont == 'e'){
                    return 0;
                }
            system("cls");
        }




        if(choice==6){
            int found = 0;

            for(int i=0;i<count;i++){
                if(orders[i].status==PENDING){
                    orders[i].initialCost = calculateInitialCost(orders[i].smallB, orders[i].bigB);
                    orders[i].status = READY;
                    printf("Order executed for customer %s\n",orders[i].name);
                    found = 1;
                    break;
                }
            }
            if(found==0){
                printf("No Pending Orders Available\n");
            }

                  char cont;
            do {
                printf("\nBack To Main Menu(m) / Exit(e): ");
                scanf(" %c", &cont);
          }while(cont != 'm' && cont != 'e');
                if(cont == 'e'){
                    return 0;
                }
            system("cls");
        }



        if(choice==7){
            printReadyOrders(orders, count);
            char cont;
            do {
                printf("\nBack To Main Menu(m) / Exit(e): ");
                scanf(" %c", &cont);
          }while(cont != 'm' && cont != 'e');
                if(cont == 'e'){
                    return 0;
                }
            system("cls");
        }

        if(choice==8){

            int found = 0;

            char currentDate[11];

            for(int i=0;i<count;i++){
                if(orders[i].status==READY){
                    orders[i].discount = calculateDiscount(orders[i].smallB, orders[i].bigB, orders[i].initialCost);
                    orders[i].finalCost = orders[i].initialCost - orders[i].discount;
                    orders[i].status = CLOSED;
                    printf("Give the date that the order was executed(current date): ");
                    scanf("%10s",currentDate);
                    strcpy(orders[i].executeDate, currentDate);
                    printf("\nOrder confirmed for customer %s\n",orders[i].name);
                    found = 1;
                    break;
                }
            }
            if(found==0){
                printf("No Ready Orders Available\n");
            }

            char cont;
            do {
                printf("\nBack To Main Menu(m) / Exit(e): ");
                scanf(" %c", &cont);
          }while(cont != 'm' && cont != 'e');
                if(cont == 'e'){
                    return 0;
                }
            system("cls");
        }

        if(choice==9){
            printClosedOrders(orders, count);
            char cont;
            do {
                printf("\nBack To Main Menu(m) / Exit(e): ");
                scanf(" %c", &cont);
          }while(cont != 'm' && cont != 'e');
                if(cont == 'e'){
                    return 0;
                }
            system("cls");
        }

        if(choice==10){
            writeClosedOrders(orders, count);
            printf("Closed orders Saved in Closed_Orders.txt\n");
            char cont;
            do {
                printf("\nBack To Main Menu(m) / Exit(e): ");
                scanf(" %c", &cont);
          }while(cont != 'm' && cont != 'e');
                if(cont == 'e'){
                    return 0;
                }
            system("cls");
        }

        if(choice==11){
            count = 0;
            loadClosedOrders(orders, &count);
            printf("Closed orders loaded successfully.\n");
            char cont;
            do {
                printf("\nBack To Main Menu(m) / Exit(e): ");
                scanf(" %c", &cont);
          }while(cont != 'm' && cont != 'e');
                if(cont == 'e'){
                    return 0;
                }
            system("cls");
        }



        menu();
        printf("Choose option(1-11): ");
        scanf("%d",&choice);
    }


    return 0;
}
