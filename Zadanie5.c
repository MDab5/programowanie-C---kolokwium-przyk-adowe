#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int *pArr = malloc(sizeof(int) * n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &pArr[i]);
    }

    for(int i = 0; i < n; i++){
        if(pArr[i] > 10) {
            printf("%d ", pArr[i]);
        }
    }

    free(pArr);
    return 0;
}