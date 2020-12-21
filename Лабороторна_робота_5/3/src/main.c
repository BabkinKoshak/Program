#include <stdio.h>

int main()
{
    int x = 514566;
    int c, i;
    int a1 = 0;
    int a2 = 0;
    int l;

    for (int i = 0; i < 6; i++) // a1 накопичує останні 3 цифри, a2 - перші 3
    {
        int c = x % 10; // цифра з кінця

        if (i < 3)
            a1 += c; // цифра з останної трійки

        else
            a2 += c; // з 1-ої трійки 
        x = x / 10;
    }

    if (a1 == a2) {
        l = 1; // Вдача
      //  printf("Povezlo");
    }
    else {
        (a1 != a2);
        l = 0; // не пощастило
       // printf("press f to your pocket money"); 
    }

    return 0;
}