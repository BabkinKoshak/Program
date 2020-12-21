#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LEN 15

void center(int filler, char strIn[]);

int main() {

    
    srand(time(NULL));

    //random range
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

    const int length_of_arr = 6;
    char strIn[length_of_arr];                

    //Генерация элементов
    for (int i = 0; i < length_of_arr; i++){
        strIn[i] = rand() % range_for_rand + min_number_of_range;
    }
    strIn[length_of_arr] = '\0';


    char strIn2[length_of_arr];
    for (int i = 0; i < length_of_arr; i++){
        strIn2[i] = rand() % range_for_rand + min_number_of_range;


    }
    strIn2[length_of_arr] = '\0';

    center(filler, strIn);
    center(filler, strIn2);

    return 0;
}

void center(int filler, char strIn[]){

    char resulting_string[LEN];

    int lenIn = 0;

    //узнаем длинну
    for (int i = 0; ; i++) {        
        if (strIn[i] == '\0') {
            break;
        } else if (strIn[i] != 0) {
            lenIn++;
        }
    }

    //общее кол-во заполнений
    int lenfiller = LEN - lenIn - 1;   

    int halflenfiller = lenfiller / 2;    


    for (int i = 0; i < halflenfiller; i++) {                            
        resulting_string[i] = filler;
    }

    for (int i = halflenfiller; i < (halflenfiller + lenIn);) {             
        for (int j = 0; j < lenIn; j++) {
            resulting_string[i] = strIn[j];
            i++;
        }
    }

    for (int i = (halflenfiller + lenIn); i < LEN - 1; i++) {            
        resulting_string[i] = filler;
    }

    
    if (lenIn % 2 == 0){
        resulting_string[LEN - 1] = '\0';
    }                                            
    if (lenIn % 2 == 1){
        resulting_string[LEN - 2] = '\0';
    }


}