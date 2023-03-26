#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Estructura para datos de una computadora
struct computadora
{
    int velocidad; // Entre 1 y 3 Ghz
    int anio;      // Entre 2015 y 2023
    int cantidad;  // Entre 1 y 8
    char *tipo_cpu;
};
typedef struct computadora Compu;

// void AgregarComputadoras(Compu *computadoras, int num);
void MostrarLista(Compu *computadoras, int num);
void MasVieja(Compu *computadoras, int num);
void MasRapida(Compu *computadoras, int num);

int main(int argc, char const *argv[])
{
    int num = 5;
    Compu computadoras[num];

    srand(time(NULL));
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    for (int i = 0; i < num; i++)
    {
        computadoras[i].anio = 2015 + rand()%9; //Agrega de forma aleatoria numeros del 0 al 8
        computadoras[i].cantidad = 1 + rand()%8; //Agrega de forma aleatoria numeros del 0 al 7
        computadoras[i].velocidad = 1 + rand()%3; //Agrega de forma aleatoria numeros del 0 al 2
        computadoras[i].tipo_cpu = tipos[rand()%6]; //
    }
    // AgregarComputadoras(computadoras,num);
    MostrarLista(computadoras,num);
    MasVieja(computadoras,num);
    MasRapida(computadoras,num);

    return 0;
}

// void AgregarComputadoras(Compu *computadoras, int num)
// {
//     srand(time(NULL));
//     char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
//     for (int i = 0; i < num; i++)
//     {
//         computadoras[i].anio = 2015 + rand()%9; //Agrega de forma aleatoria numeros del 0 al 8
//         computadoras[i].cantidad = 1 + rand()%8; //Agrega de forma aleatoria numeros del 0 al 7
//         computadoras[i].velocidad = 1 + rand()%3; //Agrega de forma aleatoria numeros del 0 al 2
//         computadoras[i].tipo_cpu = tipos[rand()%6]; //
//     }
// }

void MostrarLista(Compu *computadoras, int num){

    printf("\n\n********Listado de Computadoras********");
    for ( int i = 0; i < num; i++)
    {
        printf("\n\n**Computadora %d**", i+1);
        printf("\n-Velocidad: %d", computadoras[i].velocidad);
        printf("\n-Anio: %d", computadoras[i].anio);
        printf("\n-Numeros de nucleos: %d",computadoras[i].cantidad);
        printf("\n-Tipo: %s",computadoras[i].tipo_cpu);

    }

}

void MasVieja(Compu *computadoras, int num){
    Compu aux;
    for (int i = 0; i < num; i++)
    {
        if(i==0){
            aux = computadoras[i];
        }
        else{
            if(computadoras[i].anio < aux.anio){
                aux= computadoras[i];
            }
        }
        printf("\n\n***Computadora Mas Vieja***");
        printf("\n-Velocidad: %d", aux.velocidad);
        printf("\n-Anio: %d", aux.anio);
        printf("\n-Numeros de nucleos: %d",aux.cantidad);
        printf("\n-Tipo: %s",aux.tipo_cpu);
    }
}

void MasRapida(Compu *computadoras, int num){
    Compu aux;
    for (int i = 0; i < num; i++)
    {
        if(i==0){
            aux = computadoras[i];
        }
        else{
            if(computadoras[i].velocidad > aux.velocidad){
                aux= computadoras[i];
            }
        }
        printf("\n\n***Computadora Mas Rapida***");
        printf("\n-Velocidad: %d", aux.velocidad);
        printf("\n-Anio: %d", aux.anio);
        printf("\n-Numeros de nucleos: %d",aux.cantidad);
        printf("\n-Tipo: %s",aux.tipo_cpu);
    }
}