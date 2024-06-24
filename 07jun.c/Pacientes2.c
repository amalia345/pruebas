#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Pacientes
{
    char nombre[30];
    int edad;
    float estatura;
    char tiposang[2];
};
int main()
{
    struct Pacientes persona[10]; 
    int i;
    for (i = 0; i <3; i++)
    {
    printf("Introducee nombre, edad, estatura y tipo de sangre;\n");
    scanf("%s%d%f%s",&persona[i].nombre,&persona[1].edad,&persona[1].estatura,&persona[1].tiposang);
    };
    for ( i = 0; i <3; i++)
    {
    printf("%s\n%d\n%f\n%s\n",persona[i].nombre,persona[i].edad,persona[i].estatura,persona[i].tiposang);
    };
    
    return 0;
}