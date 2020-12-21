#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Perfect_Number(int number_for_func);

int main(){

    //Used for a dynamic random update
    srand(time(NULL));

    int x = 0;
    int y = 9000;

    int range_for_rand;
    int min_number_of_range;

    
    if ( x < y ){
        range_for_rand = y - x + 1;
        min_number_of_range = x;
    }
    else if ( x > y ){
        range_for_rand = x - y + 1;
        min_number_of_range = y;
    }

    //Первое число
    int number1 = rand() % range_for_rand + min_number_of_range;

    //Второе число
    int number2 = rand() % range_for_rand + min_number_of_range;
    

    int result1 = PerfectN_umber(number1);
    int result2 = PerfectN_umber(number2);
    
    return 0;
}

int Perfect_Number(int number_for_func){

    int i;
    int sum_of_dividers = 0;       //Initializing sum

    int perfect;


    for (i = 1; i < number_for_func; i++) {
        if (number_for_func % i == 0) {
            sum_of_dividers += i; //Getting all the i values which suit us and summing them in the result
        }
    }

    if (sum_of_dividers == number_for_func){
        perfect = 1; //true
    }
    else{
        perfect = 0; //false
    }
    
    return perfect;

}