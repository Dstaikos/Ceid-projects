#include <stdio.h>

int population_double(double pop, double growth){

    double start_pop = pop;//store the value of the original population

    int counter = 0;// years counter

    while (pop < start_pop * 2) { //check if population has doubled
        pop += pop * growth / 100.0; // apply the growth rate to the current population
        counter++; // increase the years counter by 1
    }


    return counter;

}

int main() {

    double population, gr;//initialize variables



    printf("Give current population: ");
    scanf("%lf", &population); // getting population input from user

    printf("Give yearly population growth rate (in %%): ");
    scanf("%lf", &gr); // getting growth rate input from user


    printf("It took %d years for the population to double.\n", population_double(population,gr));// printing the result of the function

    return 0;
}
