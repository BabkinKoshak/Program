#include <stdio.h>

int main()
{
    int x = 514566;
    int c, i;
    int a1 = 0;
    int a2 = 0;
    int l;

    for (int i = 0; i < 6; i++) // a1 �������� ������ 3 �����, a2 - ����� 3
    {
        int c = x % 10; // ����� � ����

        if (i < 3)
            a1 += c; // ����� � ������� �����

        else
            a2 += c; // � 1-� ����� 
        x = x / 10;
    }

    if (a1 == a2) {
        l = 1; // �����
      //  printf("Povezlo");
    }
    else {
        (a1 != a2);
        l = 0; // �� ���������
       // printf("press f to your pocket money"); 
    }

    return 0;
}