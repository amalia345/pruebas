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
int main(int argc, char const *argv[])
{
    struct Pacientes persona; 
    {
        printf("Introducee nombre, edad, estatura y tipo de sangre;\n");
        scanf("%s%d%f%s",&persona.nombre,&persona.edad,&persona.estatura,&persona.tiposang);
        printf("%s\n%d\n%f\n%s\n",persona.nombre,persona.edad,persona.estatura,persona.tiposang);
    };
    
    return 0;
}

