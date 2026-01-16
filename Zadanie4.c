#include <stdio.h>

int transformacja(int n) {
    if(n % 2 == 0) {
        return n/2;
    }
    else {
        return 3*n+1;
    }
}

int main() {
    int n = 0;
    scanf("%d", &n);

    int wynik = transformacja(n);

    printf("Wynik: %d", wynik);

    return 0;
}