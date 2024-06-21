#include<stdio.h>
#include<string.h>


int main( int argc, char *argv[])
{
    FILE  *ent, *sal;
    int c, i=0;
    char pal[100];
    

    while((c=fgetc(ent))!=EOF)// fgetcObtiene un caracter 
            //i++; //Cuenta
            if ((c!='\n')&&(c!='\t')&&(c!=' '))


    printf("El archivo %s tiene %d caracteres \n ", argv[1], i);
    fclose(ent);

        
    
    fclouse(sal);
    
    return 0;
}

//AL final tiene que contar el numero de caracteres e imprimirlo
//AHora hacer unoq ue cuente palaras 
//argv Aqui se encuentra el archivo que quiero leer 
