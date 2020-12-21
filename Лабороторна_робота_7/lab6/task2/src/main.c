#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//начало 
#define start 1
//Длинна         
#define LEN 100          

void prime_array(int prime_arr[], int end);

int main() {

    srand(time(NULL));

    int x = 200;
    int y = 300;

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

    int end_of_range = rand() % range_for_rand + min_number_of_range;   

    int end_of_range2 = rand() % range_for_rand + min_number_of_range; 


    int prime_arr[LEN] = {0};     

    prime_array(prime_arr,end_of_range);
    prime_array(prime_arr,end_of_range2);
    return 0;
}

void prime_array(int prime_arr[],int end){
    int j = 0;
    for (int range = start; range < end; range++ ) {   
        int flag = 0;
        //не подходит, ибо можно разделить на другое число
        for (int i = 2; i < range; i++) {            
            if (range % i == 0) {
                flag = 0; //не подходит
                break;
            } else {
                flag = 1; //подходит
            }
        }
        if (flag == 1) {
            //Если число простое, то вписываем его
            prime_arr[j] = range;                        
            j++;
        }
    }

}