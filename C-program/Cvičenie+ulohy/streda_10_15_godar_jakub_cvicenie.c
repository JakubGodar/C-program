#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, x1, x2;

    printf("Zadaj parametre A, B, C:\n");
    scanf("%f %f %f", &a, &b, &c);


    d=(b*b)-(4*a*c);
    if(d<0);
        printf("Nema riesenie.");

    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    printf("x1=%f, x2=%f", x1, x2);

    return 0;
}
