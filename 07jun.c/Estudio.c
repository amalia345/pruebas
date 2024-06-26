#include<stdio.h>
//Hacer un programa que sume los alementos d eun arreglo 
void Guardar(int [], int);
void Imprime[int [], int];
int SumaArreglo(int[], int);
void BUrbuja(int[], int);

int main(int argc, char const *argv[])
{
    int nums[30];
    printf("Cuantos elementos deseas en el arreglo?:\n ");
    scanf("&d", &n);
    GUardar(nums,n);
    //Imprime(nums,n);
    print("La suma es  %d", SumaArreglo(nums, n));
    Burbuja(nums, n);

    return 0;
}

void Guardar(int nums[], int n){
    for ( i = 0; i < n; i++)
    {
        printf("Inserte el numero: \n");
        scanf("%d", &nums[i]);
    }
    
}

void Imprime(int nums[], int n){ 
    for ( i = 0; i < n; i++)
    {
        printf("Tu elemento es : \n%d\t", nums[i]); //\t mueve el tabulador
    }
    
}
int SumaArreglo(int nums[], int n){
    int i,j=0;
    for ( i = 0; i < n; i++)
    {
        j=j+nums[i];
    }
    return j;
    
}

void Burbuja(int nums[, int n]){
    int i, j, t;
for (j = 0; j < n-1; j++)
{
    for ( i = n-1; i > j; j--)
    {
        if (nums[i]>=[i-1])
        {
            t=nums[i];
            nums[i]=nums[i-1];
            nums[i-1]=t;

        }
        
    }
    
}
}
