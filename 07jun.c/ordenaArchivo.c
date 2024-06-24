#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int Imprime_Arreglo_Cadenas(char*[], int)
void Burbuja (char*[], int)
void Copia_Archivo_Arrego 
//Traer una palabra del arreglo con fscanf del apuntador que apunta 
int main(int argc, char *argv[])
{
    FILE *ent = fopen(argv[1],"r"); //Argv es un arreglo de apuntador de carcter

    //Pasl va a tener apuntadores a caracter  
//Pal arreglo    
    char *pals[20], pal[30]; //Pals tiene los apuntadores
    int i=0, j;


//fscanf 
    while (fscanf(ent, "%s", pal)!=EOF)//Despues crear un arreglo 29 posiciones para tener donde guardar la cadena de pal y copia la cadena aqui 
    {
        pals[i]=(char*)malloc(30);//Genera un bloque de memoria de 30 baitsy devuelve un apuntador al inicio del bloque
        strcpy(pal[i++], pal);
        Imprime_Arreglo_Cadenas(pals, i);

    }
    puts("\nAntes de Ordenar: ");
    Imprime_Arreglo_Cadenas(stdout,pals, i);
    Burbuja(stdout, pals, i);
    punts("\nDespues de ordenar:" )
    Imprime_Arreglo_Cadenas(stdout, pals, i);
    fclose(ent);
    ent=fopen(*(argv+1), "w")
    Imprime_Arreglo_Cadenas(ent, pals, i);
    fclose(ent);

    return 0;

}

int Imprime_Arreglo_Cadenas(FILE *sal,char *pals[], int n){
    int i;
    for(i=0; i<n; i++)
        fprintf(sal,"%s", pals[i]);

}
//Odenar alfabeticamente 
void Burbuja(char *pals[], int n){
    int i, j;
    char t[30];
    for ( i = 0; i < n-1; i++)
        for (i=n-1; i>j; i++)
            if (strcmp(pals[i], pals[i-1]))
            {
                strcpy(t, pals[i]);
                strcpy(pals[i], pals[i-1]);
                strcpy(pal[i-1], pals t);
            }
            
    
    
}
//Debre de imprimir lo que esta en fuente.txt  

//Regresarlos al archivo 
//Asumir que tengo que estudiar 
//Hay que irse a dormir haber hecho la terea
//Hay que poner de tu parte 
//Hay que estudiar 
void Copia_Archivo_Arrego 



































































