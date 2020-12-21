#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 3

void multiply_matrix(int matrix_for_muliply[N][N]);

int main() {

    srand(time(NULL));

    //Диапазон
    int x = 9;
    int y = -9;

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

    int matrixone[N][N];         

    //Вписываем при помощи псевдорандомной генерации числа
    for (int i = 0; i < N; i++){                                 
        for (int j = 0; j < N; j++){
            matrixone[i][j] = rand() % range_for_rand + min_number_of_range;    
        }

    }

    multiply_matrix(matrixone);

    int matrixtwo[N][N];

    //Вписываем при помощи псевдорандомной генерации числа
    for (int i = 0; i < N; i++){                                  
        for (int j = 0; j < N; j++){
            matrixtwo[i][j] = rand() % range_for_rand + min_number_of_range;    
        }

    }

    multiply_matrix(matrixtwo);

    return 0;
}

void multiply_matrix(int matrix_for_muliply[N][N]){

    int matrixOut[N][N];

    //Умножаем матрицы
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrixOut[i][j] = 0;
            for (int k = 0; k < N; k++) {       
                matrixOut[i][j] += matrix_for_muliply[i][k] * matrix_for_muliply[k][j];
            }
        }
    }

}