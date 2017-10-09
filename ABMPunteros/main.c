#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nombre[50];
    int edad;
    int dni;
    int estado;

}ePersona;

void altaPersona(ePersona persona, int tam);
int newPersona(ePersona* persona, int dni,int edad,char[] nombre);

int main()
{
    int opcion=0;
    char seguir='s';

    while(seguir=='s')
    {
      printf("1-Alta persona\n");
      printf("2-Baja persona\n");
      printf("3-Modificar persona\n");
      printf("4-Mostrar persona\n");
      printf("5-Salir\n");

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
            seguir='n';
            break;
      }
    }

    return 0;
}

void altaPersona(ePersona persona, int tam)
{
    int i;

        for(i=0;i<tam;i++)
        {
            printf("Ingrese nombre: ");
            fflush(stdin);
            gets(persona[i].nombre);

            printf("Ingrese edad:\n")
            scanf("%d",&persona[i].edad);

            printf("Ingrese dni:\n");
            scanf("%d",&persona[i].dni);

            persona[i].estado=1;
            break;
        }
    }
}

int newPersona(ePersona* persona, int dni,int edad,char[] nombre)
{
    int retorno=0;

    if(persona!=NULL)
    {
        strcpy(persona->nombre = nombre);
        persona->dni = dni;
        persona->edad = edad;
        retorno=1;
    }

    return retorno;
}




