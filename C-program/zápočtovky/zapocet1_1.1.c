#include <stdio.h>
#include <conio.h>

int main()
{
    char znamka;
    int koniec;
    do{
    printf("Zadaj hodnotenie predmetu:\n");
    scanf("%c", &znamka);

    if (znamka == 'a')
    {
        printf("vyborne\n");
        printf("Uzna sa to na inej skole\n");
    }
    else if (znamka == 'b')
    {
        printf("Velmi dobre\n");
        printf("Uzna sa to na inej skole\n");
    }
    else if (znamka == 'c')
    {
        printf("dobre\n");
        printf("Uzna sa to na inej skole\n");
    }
    else if (znamka == 'd')
    {
        printf("uspokojivo\n");
        printf("Uzna sa to na inej skole\n");
    }
    else if (znamka == 'e')
    {
        printf("vyhovel\n");
        printf("Neuzna sa to na inej skole\n");
    }
    else if (znamka == 'x')
    {
        printf("nevyhovel\n");
        printf("Neuzna sa to na inej skole\n");
    }


    }while(koniec!=0);

    return (0);
}
