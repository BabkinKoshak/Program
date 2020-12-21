#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int divider_of_numbers (int n1, int n2);

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

    //Первая пара чисел
    int number1_1 = rand() % range_for_rand + min_number_of_range;
    int number1_2 = rand() % range_for_rand + min_number_of_range;

    if (number1_1 > number1_2){
        int temp = number1_2;
        number1_2 = number1_1;
        number1_1 = temp;
    }

    int result1 = divider_of_numbers(number1_1,number1_2);

    //Вторая пара чисел
    int number2_1 = rand() % range_for_rand + min_number_of_range;
    int number2_2 = rand() % range_for_rand + min_number_of_range;

    if (number1_1 > number1_2){
        int temp = number2_2;
        number2_2 = number2_1;
        number2_1 = temp;
    }

    int result2 = divider_of_numbers(number2_1,number2_2);

    return 0;
}

int divider_of_numbers (int n1, int n2){

    int div;

    for(int i = 1; i <= n1 && i <= n2; ++i){
        //Находит найбольший общий делитель пар чисел
        if(n1%i==0 && n2%i==0){
            div = i;
        }

    }
    
    return div;

}