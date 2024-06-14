#include<stdio.h>
#include<string.h>

int main()
{
    FILE *Sal=fopen("Salida.txt", "a"); //Aqui escribe 

    char pal[100];
    int s;
    do{
    prinf("Como te llamas? "); //Rite en el archivo en la pantalla o salida estandar
    scanf("%s", pal);
    if ((s=strcmp(pal,"x"))!0)
        fprintf(Sal,"%s\n", pal);
    
    }while (s!=0)
    {
        fclose(Sal);
    }
    

    fclouse(sal);
    
    return 0;
}