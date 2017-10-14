#include <stdio.h>
#include <stdlib.h>

int main()
{

    int array[10]={0};
    int cont, i;
    FILE* f;

    /*f=fopen("archivo.dat", "wb");
    fwrite(&cont, sizeof(int), 1, f);
    fwrite(array, sizeof(int), 2, f);*/

    f = fopen("archivo.dat", "rb");
    if(f!=NULL)
    {
        printf("Datos cargados\n");
        fread(&cont, sizeof(int), 1, f );
        fread(array, sizeof(int), cont, f );

    }
    else
    {
        printf("Archivo no encontrado!!\n");
    }

    for(i=0; i<10; i++)
    {
        printf("%d\n", array[i]);
    }











    return 0;
}
