#include <stdio.h>

int main() {
    int roomNumber = 0;

    scanf("%d", &roomNumber);
    
    if(roomNumber >= 100 && roomNumber <= 999) {
        int floorNumber = roomNumber / 100;

        if(floorNumber % 2 == 0) printf("Piętro parzyste");
        else printf("Piętro nieparzyste");
    }
    else { 
        printf("Błędny numer");
    }

    return 0;
}