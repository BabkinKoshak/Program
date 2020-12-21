#include <stdio.h>

int main() {
  
    float n = 123.536;                 // Приклад
    int n_int = (int)n;               // Целіле значення частини числа
    float remainder = n - n_int;      // Дробова частина 

    float result = remainder*1000 / n_int; // Дізнаємося в скільки разів дробова більша за цалу

    return 0;

  
  
}
