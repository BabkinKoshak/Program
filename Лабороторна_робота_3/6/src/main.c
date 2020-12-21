#include <stdio.h>

int main() {

    // Дiапазон
    int a1 = 30;
    int a2 = 33;
    int sum = 0;

    int y = a1;

    for(; y <= a2; y ++) // цикл який віконує додавання поки не буде виконана умова
        sum = sum + y;

    return 0;
  

}
