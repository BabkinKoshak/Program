#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int finder_of_root(int num);

int main(){

    
    srand(time(NULL));

    int x = 0;
    int y = 10;

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

    //Второе
    int number2 = rand() % range_for_rand + min_number_of_range;

    int result1 = finder_of_root(number1);
    int result2 = finder_of_root(number2);
    return 0;
}

int finder_of_root(int num){
    int temp_var = 0;
    int root_of_num = 1;                           

    //Поиск корня
    for (int i = 1; i < num; i ++) {
        temp_var = i * i;
        //Если квадрат равен нашему числу           
        if (temp_var == num) {      
            root_of_num = temp_var / i;
            break;
        }
        //В случае, если наше temp_var становится больше числа
        else if ( temp_var > num ){  
            break;
        }
    }

    if ((root_of_num*root_of_num) != num){
        //в случае, если нельзя подсчитать
        root_of_num = 0;
    }

    int result = root_of_num;

    return result;

}