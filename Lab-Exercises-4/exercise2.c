#include <stdio.h>
#include <string.h>

#define N 10

//initialize struct
typedef struct employees{

    char f_name[20];
    char l_name[20];
    int salary;
    int t_sales;
    int hire_year;


}EMPL;



int main(){

    EMPL employee[N];//initialize array

    //getting inputs for each employee's info
    for(int i=0;i<N;i++){

        printf("Give employee first name: ");
        scanf("%19s", employee[i].f_name);

        printf("Give employee last name: ");
        scanf("%19s", employee[i].l_name);

        printf("Give employee salary: ");
        scanf("%d", &employee[i].salary);

        printf("Give employee total sales: ");
        scanf("%d", &employee[i].t_sales);

        printf("Give employee hire year: ");
        scanf("%d", &employee[i].hire_year);
    }


    int max_salary = employee[0].salary;      //
    int max_tsales = employee[0].t_sales;     // setting the value in the first index of each array as the maximum value
    int max_hireyear = employee[0].hire_year; //

    char max_fname_salary[20], max_lname_salary[20];       //
    char max_fname_tsales[20], max_lname_tsales[20];       //  initializing variables for the first and last names that have the max value for each category
    char max_fname_hireyear[20], max_lname_hireyear[20];   //

    strcpy(max_fname_salary, employee[0].f_name);   //
    strcpy(max_lname_salary, employee[0].l_name);   //
                                                    //
    strcpy(max_fname_tsales, employee[0].f_name);   //
    strcpy(max_lname_tsales, employee[0].l_name);   //   setting the names in the first index of the arrays as the max names
                                                    //
    strcpy(max_fname_hireyear, employee[0].f_name); //
    strcpy(max_lname_hireyear, employee[0].l_name); //

    for(int i=1;i<N;i++){//looping from the second position in the array because the first already have the max_value

        if (employee[i].salary > max_salary){//checking if this employee's salary is larger than the current maximum

            max_salary = employee[i].salary; // setting this salary as the maximum
            strcpy(max_fname_salary, employee[i].f_name); //
            strcpy(max_lname_salary, employee[i].l_name); // setting the fist and last names of this employee as the names that have the largest slary
        }

        if (employee[i].t_sales > max_tsales){//checking if this employee's sales amount is larger than the current maximum

            max_tsales = employee[i].t_sales;// setting this amount of sales as the maximum
            strcpy(max_fname_tsales, employee[i].f_name); //
            strcpy(max_lname_tsales, employee[i].l_name); // setting the fist and last names of this employee as the names that have the largest amount of sales
        }

        if (employee[i].hire_year > max_hireyear){//checking if this employee's year of hiring is larger than the current maximum

            max_hireyear = employee[i].hire_year;// setting this year of hiring as the maximum
            strcpy(max_fname_hireyear, employee[i].f_name); //
            strcpy(max_lname_hireyear, employee[i].l_name); // setting the fist and last names of this employee as the names that have the largest year of hiring
        }
    }


    printf("The employee with the highest salary was %s %s, with a salary of %d\n", max_fname_salary, max_lname_salary, max_salary);                    //
    printf("The employee with the highest total sales was %s %s, with a total amount of %d sales\n", max_fname_tsales, max_lname_tsales, max_tsales);   // printing the max values and names for each category
    printf("The employee with the highest hire year was %s %s, hired in %d\n", max_fname_hireyear, max_lname_hireyear, max_hireyear);                   //


    return 0;

}
