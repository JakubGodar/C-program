#include <stdio.h>
#include <math.h>
#include <conio.h>

int mocnina(int cislo, int mocnina);

int main()
{
    int n;
    printf("Zadaj mocninove cislo:\n");
    scanf("%d", &n);


    for(int i = 1; i <= 20; i++)
    {
        int vysledok;
        vysledok = mocnina(i,n);
        printf("I:%d na n:%d = %d\n", i, n, vysledok);
    }
}

int mocnina(int cislo, int mocnina)
{
    int vysledok=1;
    for(int i = 0; i < mocnina; i++)
    {
        vysledok= vysledok*cislo;
    }
    return vysledok;
}
