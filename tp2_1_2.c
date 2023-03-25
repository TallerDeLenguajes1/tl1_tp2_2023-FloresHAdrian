#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 #define N 20
int main()
{
    // codigo a completar
   
    int i;
    double vt[N], *puntero;
    puntero = vt;
    srand(time(NULL));
    for (i = 0; i < N; i++)
    {
        *puntero = 1 + rand() % 100;
        printf("% .2f    " , *puntero);
        puntero++;
    }

    return 0;
}
