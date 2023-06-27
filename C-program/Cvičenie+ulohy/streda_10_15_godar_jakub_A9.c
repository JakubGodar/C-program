#include <stdio.h>

int main()
{
    int cisla,delitelnedvojkou,delitelnetrojkou;
    delitelnedvojkou=0;
    delitelnetrojkou=0;
    printf("Zadanie cisla delitelne 2 a 3 \n");
    do{

        scanf("%d", &cisla);

        if(cisla%2==0 && cisla!=0)
        {
            delitelnedvojkou++;
        }

        if(cisla%3==0 && cisla!=0)
        {
            delitelnetrojkou++;
        }
    }while(cisla!=0);
    printf("Pocet delitelnych dvojkou: %d \n", delitelnedvojkou);
    printf("Pocet delitelnych trojkou: %d \n", delitelnetrojkou);

    return 0;
}
