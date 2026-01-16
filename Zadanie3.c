#include <stdio.h>

int obliczSume(int arr[], int n) {
    if(n != 0) {
        int suma = arr[n-1];

        n--;
        suma += obliczSume(arr, n);

        return suma;

    }
    
    return 0;
} 

int main() {
    int n = 0;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    };

    printf("Suma: %d", obliczSume(arr, n));

    return 0;
}