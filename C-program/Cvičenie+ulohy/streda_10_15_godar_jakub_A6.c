#include <stdio.h>

int main()
{
    int zadanecislo, pocetdelitelnychtrojkou=-1, pocetdelitelnychdvojkou=-1 ;
    do{
        printf("Zadaj cislo, ktore chces delit 2 a 3 \n");
        scanf("%d", &zadanecislo);
        if(zadanecislo%2 == 0)
        {
            pocetdelitelnychdvojkou++;
        }
        if(zadanecislo%3 == 0)
        {
            pocetdelitelnychtrojkou++;
        }
    }while(zadanecislo!=0);
    printf("Pocet delitelnych dvojkou je: %d \n", pocetdelitelnychdvojkou);
    printf("Pocet delitelnych trojkou je: %d \n", pocetdelitelnychtrojkou);
    return 0;
}
