#include <stdio.h>

int main() {
    int a;
    int licznik_petli=0;


    for (a = 999; !(a%3) || !(a%5) || !(a%7); a -= 2) {
        licznik_petli++;
    }
    printf("znaleziona liczba: %d\n", a);

    printf("\n");
    printf("liczba pętli wyniosła: %d\n", licznik_petli);


    return 0;
}