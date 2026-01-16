#include <stdio.h>

int main() {
    int poczatkowaLiczbaBakterii = 0;
    int liczbaGodzin = 0;

    printf("Podaj początkową liczbe bakterii: ");
    scanf("%d", &poczatkowaLiczbaBakterii);

    printf("Podaj czas w godzinach: ");
    scanf("%d", &liczbaGodzin);

    for(int i = 0; i < liczbaGodzin; i++) {
        poczatkowaLiczbaBakterii = poczatkowaLiczbaBakterii*2;
        printf("Godzina %d: %d\n", i, poczatkowaLiczbaBakterii);
    }

    return 0;
}