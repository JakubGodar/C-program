#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;

    printf("Zadaj tri cisla:\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c)
    {
        printf("%d je najvacsie\n", a);
    }
    else if(b > a && b > c)
    {
        printf("%d je najvacsie\n", b);
    }
    else if(c > a && c > b)
    {
        printf("%d je najvacsie\n", c);
    }

    printf("Ternarny operator:");

   (c > a && c > b) ? printf("%d je najvacsie\n", a) : printf("", a);
   (b > a && b > c) ? printf("%d je najvacsie\n", b) : printf("", b);
   (c > a && c > b) ? printf("%d je najvacsie\n", c) : printf("", c);

   return 0;
}

