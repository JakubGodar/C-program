#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    int pocetSuradnic;
    printf("Zadaj pozadovany pocet bodov:\n");
    scanf("%d", &pocetSuradnic);

    for (int i = 1; i <= pocetSuradnic; i++) {
    int x, y;
    printf("Zadaj suradnicu: %d \n", i);
    scanf("%d", &x);
    scanf("%d", &y);

    if(x == 0 && y == 0)
    {
        printf("Bod [%d,%d] lezi v strede\n", x, y);
    }
    else if(x > 0 && y > 0)
    {
        printf("Bod [%d,%d] lezi v kvandrante I\n", x, y);
    }
    else if(x < 0 && y > 0)
    {
        printf("Bod [%d,%d] lezi v kvandrante II\n", x, y);
    }
    else if(x < 0 && y < 0)
    {
        printf("Bod [%d,%d] lezi v kvandrante III\n", x, y);
    }
    else
    {
        printf("Bod [%d,%d] lezi v kvandrante IV\n", x, y);
    }
}

    getch();
    return 0;
}

