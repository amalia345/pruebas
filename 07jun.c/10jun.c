#include<stdio.h>
int Bin_a_Dec(int);
int Dec_a_Bin(int);

int main()
{
    //dame el numero binario 
    int dos, diez=0, pdos=1, bin;
    while (1)
    {
        printf("Ingresa el numero ");
        scanf("%d", &dos);
        
        

        //Bin_a_Dec(dos);
        //bin=Bin_a_Dec(diez);
        //printf("\nEl resultado de binario a decimal es: ,%d", bin);
        bin=Dec_a_Bin(dos);
        printf("\nEl resultado de decimal a binario es: ,%d", );

    }
    
    return 0;
}
int Bin_a_Dec(int dos){
    int diez=0, pdos=1;

    while (dos>0)
    {
        diez=diez+(dos%2)* pdos;
        dos=dos/10;
        pdos=pdos*2,4,8;
    }
    return diez;
}
int Dec_a_Bin(int diez){
    int dos=0, pdiez=1, db;
    while (diez>0)
    {
        db=diez%2;
        dos=dos + db*pdiez;
        pdiez=pdiez*10;
        diez=diez/2;
    }
    return dos;

}
