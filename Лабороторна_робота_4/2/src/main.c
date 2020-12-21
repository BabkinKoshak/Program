#include <stdio.h>

#define NUM 0.656

int main() {

    int cila = NUM; 	         //Отримали 123
    float drob = NUM - cila;    //Отримали 656
    float result;

    if (cila == 0) {
        result = -1;	//Помилка
      //  printf("oshibka");
    }
    else {
        drob = drob * 1000;
        result = drob / cila; 	        //Дiлення частин
        result = result * 100;
        result = (int)result * 1;         	//Округлюємо до 2 знакiв.
        result = result / 100;				//Повертаємось назад	
     //   printf("%.4f", result);
    }


    return 0;
}