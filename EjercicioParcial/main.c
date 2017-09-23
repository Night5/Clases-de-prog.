#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include tam 5

//el tiempo de llamada lo tiene que ingresar el usuario

typedef struct
{
    int id;
    int numero;
    char nombre[50];
    char apellido[50];
    int estado;

}ePersona;

typedef struct
{
    int id;
    int numero;
    char nombre[100];
    char apellido[100];
    char estado[100];
    char motivo[100];

}eLlamada;


void inicializarPersona(ePersona persona[],int tam);
int obtenerEspacioLibre(ePersona persona[],int tam);
void altaPersona(ePersona persona[],int tam);
void modificarPersona(ePersona persona[], int tam);




int main()
{
    int opcion;
    char seguir='s';


    while(seguir=='s')
    {
       printf("----------Menu de opciones----------");
       printf("1-Alta del abonado\n");
       printf("2-Modificar datos del abonado\n");
       printf("3-Baja del abonado\n");
       printf("4-Nueva llamada\n");
       printf("5-Fin de llamada\n");
       printf("6-Informar\n");
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
                break;

       }
    }

    return 0;
}

void inicializarPersona(ePersona persona[],int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        persona[i].estado=0;
    }
}

int obtenerEspacioLibre(ePersona persona[],int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        if(persona[i].estado==0)
        {
            return i;
        }
    }

    return -1;
}

void altaPersona(ePersona persona[],int tam)
{
    int i;
    int espacioLibre;

    espacioLibre=obtenerEspacioLibre(persona,tam);

    for(i=0;i<tam;i++)
    {
        if(espacioLibre!=1)
        {
            printf("Ingrese numero de ID: ");
            scanf("%d",&persona[espacioLibre].id);

            printf("Ingrese numero de telefono");
            scanf("%d",&persona[espacioLibre].numero);

            printf("Ingrese nombre: ");
            fflush(stdin);
            gets(persona[espacioLibre].nombre);

            printf("Ingrese apellido: ");
            fflush(stdin);
            gets(persona[espacioLibre].apellido);

            persona[i].estado=1;
            break;
        }

    }

    if(tam==i && obtenerEspacioLibre(persona,tam)==-1)
    {
        printf("No hay espacio disponible!");
    }

}

void modificarPersona(ePersona persona[], int tam)
{
    int i;

}


