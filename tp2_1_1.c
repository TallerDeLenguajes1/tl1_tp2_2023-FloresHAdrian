#include <stdio.h>
#include <stdlib.h>


 #define N 20
int main()
{
    // codigo a completar
   
    int i;
    double vt[N];
    for (i = 0; i < N; i++)
    {
        vt[i] = 1 + rand() % 100;
        printf("% .4f\n" , vt[i]);
    }

    return 0;
}
