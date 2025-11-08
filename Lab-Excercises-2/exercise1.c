#include <stdio.h>


int func1(){


for(int i=1;i<=100;i++){ // loop from 1 to 100


    printf("%d", i); //print number
    printf("\t"); // print tab

    if (i % 10 == 0){
        printf("\n"); // switch lines every 10 numbers

}

}

}


int main(){

    func1(); // call the function


    return 0;
}
