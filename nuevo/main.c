#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//declarar puntero a la estructura
//reservar espacio en memoria
//mostrar con funcion al recursante


typedef struct
{
    int legajo;
    char nombre[30];
    int nota;

}eRecursante;

void mostrarRecursante(eRecursante*);

int main()
{
    eRecursante* pRecursante;


    pRecursante=(eRecursante*)malloc(sizeof(eRecursante));
    if(pRecursante==NULL)
    {
        pRecursante->legajo=44;
        strcpy(pRecursante->nombre,"Aldana");
        pRecursante->nota=4;

    }
    else
    {
        printf("No hay espacio en memoria!");
    }



    return 0;
}



void mostrarRecursante(eRecursante* recursante)
{
    printf("%d----%s----%d",legajo,nombre,nota);
}

