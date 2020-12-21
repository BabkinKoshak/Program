#include <stdio.h>
#define N 3

int main() {
	int array2d[N][N];
	//проходимся по елементам
	for (int i = 0; i < N; i++) {			
		for (int j = 0;j < N; j++) {
			array2d[i][j] = i * N + j;
		}
	}

	//проходимся через матрицу
	for (int i = 0; i < N; i++) {			
		int k = array2d[i][0];
		//сдвиг
		for (int j = 0; j < N; j++) {		
			array2d[i][j] = array2d[i][j + 1]; 
		}
		array2d[i][N - 1] = k;				
	}
	return 0;
}
