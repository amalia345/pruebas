#include<stdio.h>
#include<string.h>

/*t main()
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
*/

// 20 JUnio vamos a crear pequeños archivos 
//imprime carcacter c 
//EN append vamos a crear este mini proyecto 

//Hacer lo de mi cat.txt
//micat dest.2.txt Arch1.txt


int main( int argc, char *argv[])
{
    FILE  *ent, *sal;
    int c, i=2;
    sal=fopen(argv[1], "a"); //Aqui escribe 
    
    while (i<argc)
    {
        ent=fopen(argv[i++], "r");
        while ((c=fgetc(ent))!=EOF)// fgetcObtiene un caracter 
            fputc(c, sal); 
            fclose(ent);

        
    }
    fclouse(sal);
    
    return 0;
}


//cp copy, 
//Vamos a hacer un editor de texto primitivo 