#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define pocetPozadovanychCisel 10

int parnypocetJednotiek(int n);
void binar(int n);

int main()
{
    FILE* f = fopen("cislo.txt", "r");
    int n = 0, i = 0;
    int numbers[pocetPozadovanychCisel];
    int pocitadloparnychcisel=0;
    int pocitadlo = 0;

    if(f == NULL){
        printf("Whoops!Nenaslo subor");
    }else
        {
        while( fscanf(f, "%d", &n) > 0 )
        {
            numbers[i++] = n;
            //printf("Zadane hodnoty:%d\n", n);
            n = NULL;
            pocitadlo++;
        }
        //printf("\n");
        printf("Cisla ktore ich binarny vypis obsahuje parny pocet jednotiek:\n");

        if(fclose(f))
            printf("fclose error");

        if(pocitadlo > pocetPozadovanychCisel) {
            printf("Subor obsahuje privela cisel");
            return 0;
        } else if (pocitadlo < pocetPozadovanychCisel) {
            printf("Subor obsahuje menej cisel ako je pozadovane");
            return 0;
        } else {
            for(i=0; i<10; i++){
                int parnost=pocetJednotiek(numbers[i]);
                parnost = parnost%2;
                if(parnost==0){
                   pocitadloparnychcisel++;
                   printf("Cislo:%d", numbers[i]);
                   printf(" Binarne cislo:");
                   binar(numbers[i]);
                   printf("\n");
                }
            }
            printf("\nSpolu mame :%d parnych cisel\n", pocitadloparnychcisel);
        }
    }

}

int pocetJednotiek(int n){
    int pocitadlo=0;

    for(int i=0;n>0;i++){
        if (n%2 == 1){
            pocitadlo++;
        }
        n=n/2;
    }

    return pocitadlo;
}

void binar(int n){
    int pole[10];
    int i;
    for(i=0;n>0;i++){
        pole[i]=n%2;
        n=n/2;
    }

    for(i=i-1;i>=0;i--){
        printf("%d",pole[i]);
    }
}
