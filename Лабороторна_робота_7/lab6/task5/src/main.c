#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3

void matrix_shifter(int array_one[N][N]);

int main() {

    srand(time(NULL));

    int x = 0;
    int y = 10000;

    int range_for_rand;
    int min_number_of_range;

    if ( x < y ){
        range_for_rand = y - x;
        min_number_of_range = x;
    }
    else if ( x > y ){
        range_for_rand = x - y;
        min_number_of_range = y;
    }

    //первая матрица
    int array_one[N][N];  

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            array_one[i][j] = rand() % range_for_rand + min_number_of_range;    //random range from -9 to 9
        }

    }

    int array_two[N][N]; 

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            array_two[i][j] = rand() % range_for_rand + min_number_of_range;    //random range from -9 to 9
        }

    }

    matrix_shifter(array_one);
    matrix_shifter(array_two);

    return 0;
}

void matrix_shifter(int array_one[N][N]){

    for (int i = 0; i < N; i++) {           
        int k = array_one[i][0];
        //сдвиг
        for (int j = 0; j < N; j++) {       
            array_one[i][j] = array_one[i][j + 1];
        }
        array_one[i][N - 1] = k;
    }

}