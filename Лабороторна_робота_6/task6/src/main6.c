#include <stdio.h>

#define N 4

int main() {
    //Изначальная матрицы
    int firstMatrix[N][N]; 
    //Подобная ей матрицы        
    int resultingMatrix[N][N];        

    //Вписываем элементы
    for (int i = 0; i < N; i++) {       
        for (int j = 0; j < N; j++) {
            firstMatrix[i][j] = i * N + j;
        }
    }

    //Умножение матриц
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            resultingMatrix[i][j] = 0;
            for (int k = 0; k < N; k++) {       
                resultingMatrix[i][j] += firstMatrix[i][k] * firstMatrix[k][j];
            }
        }
    }

    return 0;
}