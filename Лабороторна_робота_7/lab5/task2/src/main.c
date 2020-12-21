#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int prime_or_not(int num);           

int main(){


    srand(time(NULL));

    int x = 0;
    int y = 10000;

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
    int num1 = rand() % range_for_rand + min_number_of_range;
    //Второе число
    int num2 = rand() % range_for_rand + min_number_of_range;

    int result1 = prime_or_not(num1);
    int result2 = prime_or_not(num2);

    return 0;
}

int prime_or_not(int num){
    
    //изначально инициализируем его как простое
    int result = 1 ;            

    for(int i = 2 ; i < num / 2 ; i++) {
        if(num % i == 0) {
            //Не простое
            result = 0;         
            break;
        }

    }

    return result;
}