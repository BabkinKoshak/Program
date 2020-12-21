#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int LuckyNum(int num);              

int main(){

    srand(time(NULL));

    int x = 100000;
    int y = 999999;

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

    int result1 = LuckyNum(num1);
    int result2 = LuckyNum(num2);

    return 0;
}

int LuckyNum(int num){
    //Копируем для безопасности
    int num_copy = num;             

    int i;  

    //Длинна нашего число
    int length = 1;      
    //Обьявление переменной (половину от длинны числа)              
    int half_0f_len = 0;               
    //Для деления числа и нахождения его длинны
    int divider = 10;           

    int first_part;                 
    int second_part;                

    //Данные переменные используется для нахождения первой и второй части числа
    int v;                          
    int sum1 = 0;
    int sum2 = 0;
    int remainder;
    int lucky = 1;

    //узнаем длинну
    for (i = 0; i <= 12; i++) {     
        num_copy/=10;

        if (num_copy > 1){
            length++;
        }
        else {
            lucky = 0;
        }

    }

    //узнаем, если число делится попалом (иначе нельзя посчитать)
    if (length%2==0){                  
        half_0f_len = length/2;           
    }
    else{
        lucky = 0;
    }

    for (i=1; i < half_0f_len; i++) {  
        divider *= 10;

    }

    //Узнаем первую и вторую часть
    first_part = num / divider;     
    second_part = num % divider;    


    v = first_part;     


    //При помощи 2 циклов узнаем длинны частей
    while (v != 0)                  
    {
        remainder = v % 10;
        sum1 = sum1 + remainder;
        v = v / 10;
    }

    v = second_part;                

    while (v != 0)                 
    {
        remainder = v % 10;
        sum2 = sum2 + remainder;
        v = v / 10;
    }

    //Унаем является ли число подходящим
    if (sum1==sum2 && length % 2 == 0){    
        lucky;
    }
    else if (sum1 != sum2 && length % 2 == 0) {
        lucky = 0;
    }
    else if (length == 1){
        lucky = 0;
    }

    return lucky; 


}