#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libreria.h"


#define tamC 4



int main()
{
    int opcion=0;
    char seguir='s';

    while(seguir=='s')
    {
        printf("1-Alta del cliente\n");
        printf("2-Modificar cliente\n");
        printf("3-Baja del cliente\n");
        printf("4-Nuevo alquiler\n");
        printf("5-Fin del alquiler\n");
        printf("6-Informar\n\n");
        printf("7-Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                seguir = 'n';
                break;

        }

    }

    return 0;
}

void inicializarCliente(eCliente persona[],int tamC)
{
    int i;
    int id[]={1,2,3,4};
    int dni[]={40223224,40556844,30550880,36447887};
    char nombre[][]={"Aldana","Martina","Maria","Damian"};
    char apellido[][]={"Salvatierra","Coronado","Toso","Perez"};
    int estadoC[]={1,1,1,1};




}
