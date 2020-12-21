#include <stdio.h>

int main() {
    int X;
    int y;

    if (X<=-1) {    // якщо x менше -1
        y=-1/X;
    }

    else if (X<=1 && X>=-1) {        //якщо x більше -1 та менше  1
        y=X*X;
    }

    else if (X>=1) {    //для х більших за 1
        y=1;
    }
  

    return 0;
  
  
  
}
