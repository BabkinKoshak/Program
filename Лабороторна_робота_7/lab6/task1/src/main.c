#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LEN 15

void make_it_centralized(int filler, char our_string[]);

int main() {

    srand(time(NULL));

    int x = 97;
    int y = 122;

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

    //Заполнитель
    int filler = '_';                          

    const int array_length = 5;
    char our_string[array_length];                

    //Создаем элементы
    for (int i = 0; i < array_length; i++){
        our_string[i] = rand() % range_for_rand + min_number_of_range;
    }

    our_string[array_length] = '\0';


    char our_second_string[array_length];
    for (int i = 0; i < array_length; i++){
        our_second_string[i] = rand() % range_for_rand + min_number_of_range;
    }
    our_second_string[array_length] = '\0';

    make_it_centralized(filler, our_string);
    make_it_centralized(filler, our_second_string);

    return 0;
}

void make_it_centralized(int filler, char our_string[]){

    char strResult[LEN];

    int length = 0;

    for (int i = 0; ; i++) { //узнаем длинну
        if (our_string[i] == '\0') {
            break;
        } else if (our_string[i] != 0) {
            length++;
        }
    }

    //общее количество заполнеий
    int lenZap = LEN - length - 1;   

    int halfLenZap = lenZap / 2;    


    for (int i = 0; i < halfLenZap; i++) {                            
        strResult[i] = filler;
    }

    for (int i = halfLenZap; i < (halfLenZap + length);) {             
        for (int j = 0; j < length; j++) {
            strResult[i] = our_string[j];
            i++;
        }
    }

    for (int i = (halfLenZap + length); i < LEN - 1; i++) {            
        strResult[i] = filler;
    }

    //Task requirement
    if (length % 2 == 0){
        strResult[LEN - 1] = '\0';
    }                                            
    if (length % 2 == 1){
        strResult[LEN - 2] = '\0';
    }


}