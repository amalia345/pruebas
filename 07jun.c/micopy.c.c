int main(int argc, char *argv[])
{
    int c; 
    FILE *ent=fopen(*++argv, "r"); //leo el archivo 
    FILE *sal=fopen(*++argv, "w"); //archivo que quiero abrir en modo write

    while((c=fgetc(ent))!EOF) //Hay dos archivos el que lee y el que abre
    fputc(C, sal); //stdout
    fclose(ent);
    fclose(sal);


    return 0;
}
