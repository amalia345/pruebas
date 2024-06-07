//Examen 07 Junio ciclos con arreglos
// 2 pruebas de escritorio 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void LlenaRand(int, int, int[]);
void ImpArrInt(int, int[]);
void Seleccion(int, int);
void Intercambia(int, int[]);
int Menor(int[], int, int);


int main(){

   int n, m, x, p, a,maximo, nums[200], nums2[200];
   printf("Dame el numero de elementos y el valor maximo!!!\t");
   scanf("%d%d", &n, &maximo);

   LlenaRand(n, maximo, nums);
   printf("\n");
   ImpArrInt(n, nums);
   
   x= Menor(nums, 0,n-1);
   printf("a[%d]=%d.\n",x,nums[x]);
   Seleccion(n, nums);
   printf("\n");
   mpArrInt(n, nums);

   printf("\n") 
   return 0;

}
void LlenaRand(int n, int mayor, int nums[]){
   int i;
   srand(time(NULL));//seedrand(semilla)
   for(i=0; i<n; i++)
     nums[i]=1+rand()%mayor;
};

//Imprime el arreglo 
void imprArrInt(int n, int nums[]){
     int i;
     for(i=0; i<n; i++){
     printf("%d\t", nums[i]);
     if(i%10==0&& (i>0))
        putchar('\n');
     }
}

int Menor (int a[], int p, int u){
        int i, m=a[p], j=p; 
        for(i=p+1; i<=u; i++){ 
            if (a[i]<m)
            {
                m=a[i];
                j=i;
            }
        return j;
        }
    return 0;
    }

void Seleccion(int a[], int n){
    int i;
    for ( i = 0; i < n-1; i++)
    {
        x=Menor(a,i,n-1);
        intercambia(a, i, k);
    }
    
}
void Intercambia(int a[], int i, int j){
    int t=a[i];
    a[i]=a[i];
}
