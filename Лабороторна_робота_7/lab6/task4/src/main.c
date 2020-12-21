#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void amount_of_word (char str_one[]);

int main() {

    srand(time(NULL));

    int x = 32;
    int y = 39;

    int range_for_rand;
    int min_number_of_range;

    if ( x < y ){
        range_for_rand = y - x + 1;
        min_number_of_range = x + 1;
    }
    else if ( x > y ){
        range_for_rand = x - y;
        min_number_of_range = y;
    }

    int length_of_arr = 55;

    //Первая фраза
    char str_one[length_of_arr]; 

    for (int i; i < length_of_arr; i++ ){
        str_one[i] = rand () % range_for_rand + min_number_of_range;
    }
    //Вторая
    char str_two[length_of_arr]; 

    for (int i; i < length_of_arr; i++ ){
        str_two[i] = rand () % range_for_rand + min_number_of_range;
    }

    amount_of_word(str_one);
    amount_of_word(str_two);

    return 0;
}

void amount_of_word (char str_one[]){
    //длинна
    int length = 0; 
    //кол-во слов               
    int counter = 0;              

    //узнаем длинну
    for (int i = 0; ; i++) {    
        if (str_one[i] == '\0') {
            break;
        } else {
            length++;
        }
    }

    //узнаем кол-во слов
    for (int i = 0; i < length; i++) {
        if (str_one[i] != ' ' && (str_one[i + 1] == ' ' || str_one[i + 1] == '\0')) {
            counter++;
        }
    }

}