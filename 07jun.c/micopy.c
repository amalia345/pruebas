#include<stdio.h>
int main(int argc, char *argv[])
{
    int c; 
    FILE *ent=fopen(*++argv, "r"); //leo el archivo 
    FILE *sal=fopen(*++argv, "w"); //archivo que quiero abrir en modo write

    while((c=fgetc(ent))!=EOF) //Hay dos archivos el que lee y el que abre
        fputc(c, sal); //stdout
    fclose(ent);
    fclose(sal);


    return 0;
}


//TAREA c:\> micat desde txt arch.txt arch2.txt ... archn.txt 
// argc -1 
// .. padre
// . hijo 
