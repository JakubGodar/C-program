#include<stdio.h>
#include<math.h>

int main()
{
    struct bod {
        double vzdialenostOdStredu;
        int x;
        int y;
    };
    struct bod suradnice[100];
    int pocetSuradnic;
    float najkratsiaVzdialenost;
    int indexNajkratsejVzdialenosti;
    printf("Zadaj pozadovany pocet bodov:\n");
    scanf("%d", &pocetSuradnic);

    for (int i = 0; i < pocetSuradnic; i++) {
        int x, y;
        int a = i + 1;
        printf("Zadaj suradnicu: %d \n", a);
        scanf("%d %d", &x, &y);

        suradnice[i].x = x;
        suradnice[i].y = y;

        suradnice[i].vzdialenostOdStredu = sqrt(pow(x, 2) + pow(y, 2));
    }
    najkratsiaVzdialenost = suradnice[0].vzdialenostOdStredu;
    indexNajkratsejVzdialenosti = 0;
    for (int i = 1; i < pocetSuradnic; i++) {
        if (suradnice[i].vzdialenostOdStredu < najkratsiaVzdialenost) {
            najkratsiaVzdialenost = suradnice[i].vzdialenostOdStredu;
            indexNajkratsejVzdialenosti = i;
        }
    }
    printf("Najblizsie stredu je bod: %d \n", indexNajkratsejVzdialenosti + 1);

    return(0);
}
