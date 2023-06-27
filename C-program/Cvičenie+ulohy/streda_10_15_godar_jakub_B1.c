#include <stdio.h>
#include <math.h>


int main()
{
    int predchadzajuceCislo=0;
    int x;
    do{
    printf("Zadaj cislo:\n");
    scanf("%d", &x);

    if(x == predchadzajuceCislo)
    {
        printf("%d==%d\n", x , predchadzajuceCislo);
    }
    else if(x > predchadzajuceCislo)
    {
        printf("%d > %d\n", x , predchadzajuceCislo);
    }
    else
    {
        printf("%d < %d\n", x , predchadzajuceCislo);

    }
    predchadzajuceCislo=x;


    }while(x!=0);

    return 0;

}

