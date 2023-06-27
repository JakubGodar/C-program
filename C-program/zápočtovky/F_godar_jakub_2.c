#include<stdio.h>
#include<math.h>

int main()
{
    float dolna_hranica, horna_hranica, sucet = 0, priemer, tmp;
    printf("Zadaj dolnu hranicu:\n");
    scanf("%f", &dolna_hranica);
    printf("Zadaj hornu hranicu:\n");
    scanf("%f", &horna_hranica);
    printf("\n");

    //Pokial je dolna mensia tak si ich iba prehodime medzi sebou
    if(dolna_hranica > horna_hranica){
        tmp = dolna_hranica;
        dolna_hranica = horna_hranica;
        horna_hranica = tmp;
    }

    for (int i = dolna_hranica; i <= horna_hranica; i++) {
        sucet += i;

        if(i == horna_hranica){
            printf("%d = ", i);
        }else{
            printf("%d + ", i);
        }
    priemer = sucet/((horna_hranica-dolna_hranica)+1);
    printf("sucet: %f \n", sucet);
    printf("priemer: %f \n", priemer);
    }
}
