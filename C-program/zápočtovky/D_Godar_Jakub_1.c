#include <stdio.h>
#include <stdlib.h>

void vypisPocetZapornychCisel(int *pole, int n){
    int pocitadlo = 0;
    printf("Zaporne cisla: \n");
    for (int i = 0; i < n; i++)
        if(pole[i] < 0){
            pocitadlo++;
            printf("%d ", pole[i]);
        }
    printf("\n");
    printf("Pocet zapornych je:%d \n", pocitadlo);
}

int main() {
    int n;
    time_t t;
    srand((unsigned) time(&t));

    printf("Zadaj velkost pola: ");
    scanf("%d", &n);
    int *arr = calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Error\n");
        return -1;
    }
    int o;
    printf("Zadaj 1 pre vygenerovanie pola alebo 2 pre zadanie pola manualne: ");
    scanf("%d", &o);

    if(o==2) {
        printf("Zadaj prvky: ");
        for (int i = 0; i < n; i++)
            scanf("%d", arr + i);
    } else if(o==1){
        for (int i = 0; i < n; i++){
            arr[i] = (rand() % 10) -5; //Generujem nahodne cisla -5 az 5
        }
    }

    printf("Zadane pole: ");
    for (int i = 0; i < n; i++)
        printf("%d ", *(arr + i));
    printf("\n");

    vypisPocetZapornychCisel(arr, n);

    free(arr);
    return 0;
}
