#include <stdio.h>
#include <math.h>

int main()
{
    float vysledok, cislo;
    printf("Zadaj cislo:\n");
    scanf("%f", &cislo);

    vysledok = (cislo > 1) ? (cislo*2) : (cislo/2);
    printf("Vysledok je %f:\n", vysledok);

    return 0;
}
