#include <stdio.h>
//начало
#define start 1
//конец  		
#define end 200	
//длинна	
#define LEN 100

int main() {
	int prime_num[LEN] = {0};						
	int j = 0;
	//цикл, где узнаем является ли число простым
	for (int diap = start; diap < end; diap++ ) {	
		int flag = 0;
		for (int i = 2; i < diap; i++) {
			
			if (diap % i == 0) {
				flag = 0;//не является
				break;
			} else {
				flag = 1;//является
			}
		}
		if (flag == 1) {
			prime_num[j] = diap;					
			j++;
		}
	}
	return 0;
}
