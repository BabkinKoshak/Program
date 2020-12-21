#include <time.h>
#include <stdio.h>
#include <stdlib.h>


int CommonDivisor (int n1, int n2);



int main()  {
    srand(time(NULL)); // випадкове динамічне оновлення  

    int x = 0;  //початокове число діапазону
    int y = 10000; //кінцеве число діапазону 

    int range_for_rand; //діапазон
    int min_number_of_range; //мінімальне значення 

//Пошук діапазону та мінімального числа
    if ( x < y ) {
          range_for_rand = y - x + 1;
        min_number_of_range = x;
    }
    else  if ( x > y  )  {
        range_for_rand = x - y + 1;
      
        min_number_of_range = y;
    }
// існує декілька варіантів ділення, а саме 2, тому розглянемо їх
  // 1 Варант.  
    int n1_1 = rand() % range_for_rand + min_number_of_range;
    int n1_2 = rand() % range_for_rand + min_number_of_range;

    if (n1_1 > n1_2){
          int temp = n1_2;
        n1_2 = n1_1;
        n1_1 = temp;
    }

    int result1 = CommonDivisor(n1_1,n1_2);

    // Другий.
     int n2_1 = rand() % range_for_rand + min_number_of_range;
    int n2_2 = rand() % range_for_rand + min_number_of_range;

    if (n1_1 > n1_2){
           int temp = n2_2;
        n2_2 = n2_1;
        n2_1 = temp;
      }

    int result2 = CommonDivisor(n2_1, n2_2); //для наступної функції дізнаемося дільники 

         return 0;
}

int CommonDivisor (int n1,  int n2){ //передаємо кожну пару в функцію в CommonDivison, де за допомогою циклу дізнаємося його та повертаємо.

    int i;
    int div;

    for(i = 1;  i <= n1 && i <= n2;  ++i){
        
        if(n1%i==0 && n2%i==0){
            div = i;
          
        }
    }
    
       return div;
}
