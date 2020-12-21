#include <stdio.h>

int main() {
    int x = 987;


    float vidpovid;

    int x1 = x/100;         //Перша цифра
    int o = x%100;   //Залишок
    int x2 = o/10;   //Друга цифра
    int x3 = o%10;   //Третя цифра

    // шляхом ділення встановлюємо в скільки разів перша цифра білше третьої
    vidpovid = (float) x1/x3;


    return 0;

}
