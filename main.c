#include <stdio.h>

int main() {
    int a;


    for (a = 1000; a >= 1; a--){
        if (a % 2 !=0 && a % 3 !=0 && a % 5 !=0 && a % 7 !=0){






printf("Wyświetla liczbę: %d\n", a);

        break;
        }
    }



    return 0;
}