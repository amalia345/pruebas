//buscar el elemento mas pequedo de toda la fila y agregar lel el lugar 0, repetir un proceso con for 
//ordenar los elementos n 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//for(i =o; i=<n-1; i++){
//k=menos(a,i,n-1);
//intercambia(a, i, k);
//}
//aplicacion de arañas, con fotos,y dice si es de importancia medica 
//utilizaron repositorios de datasets 
void Seleccion(int, int, int[]);
void Intercambia(int, int[]);


int main()
{
    int Menor (int a[], int p, int u){
        int i, m=a[p], j=p; //Asumo que el primer elemento es el mas pequeño y esta en p 
        for(i=p+1; i<=u; i++){ //EL elemento que estoy ahora es menor que el que le sigue 
            if (a[i]<m)
            {
                m=a[i];
                j=i;
            }
        
        }
        return j;//Retorna j cuando se acaba el for
    }
    return 0;
}

void Seleccion(int a[], int n){
    for ( i = 0; i < n-1; i++)
    {
        k=Menor(a,i,n-1);
        intercambia(a, i, k);
    }
    
}
void Intercambia(int a[], int i, int j){
    int t=a[i];
    a[i]=a[i];
    a[i]=t;
}
//asumir que el primer elemento es el mas pequedyo y despues compararlo con el siguiente


include<stdio.h>
#include<stdlib.h>
#include<time.h>
void LlenaRand(int, int, int[]);
void ImpArrInt(int, int[]);
int EstaEn(int,int, int[]);
void CopiaArrInt(int, int[], int[]);
int CopiaArrIntX(int, int, int[], int[]);
int main(){
   int n, x, p,maximo, nums[200], nums2[200];
   printf("Dame el numero de elementos y el valor maximo!!!\t");
   scanf("%d%d", &n, &maximo);

   LlenaRand(n, maximo, nums);
   ImpArrInt(n, nums, nums2);

   printf("\n") 
   return 0;
/*
   while(1){
   printf("Que numero buscas?");
   scanf("%d", &x);
   p=EstaEn(x, n, nums);
   if(p>=0)
      printf("%d esta en la posicion %d. \n", x, p);
   else
      printf("%d no esta en el arreglo. \n", x);

   }
   return 0;
}
*/
}
void LlenaRand(int n, int mayor, int nums[]){
   int i;
   srand(time(NULL));//seedrand(semilla)
   for(i=0; i<n; i++)
     nums[i]=1+rand()%mayor;
};
void ImpArrInt(int n, int nums[]){
     int i;
     printf("\n--------------------------------------------\n");
     for(i=0; i<n; i++){
     printf("%d\t", nums[i]);
     if(i%10==3 && (i>0))
        putchar('\n');

     }
     printf("\n--------------------------------------------\n");
}
int EstaEn(int x,int n, int nums[]){
    int i;
    for(i=0; i<n; i++){
        if(x==nums[i])
            return i;
    }
    return -1;
};
//separation of concerns

void CopiaArrInt(int n, int nums[],  int nums2[]){
   int i;
   for(i=0; i<n; i++)
     nums2[i]=nums[i];

};
//
int CopiaArrIntX(int n,  int x, int nums[],  int nums2[]){
   int i, j=0;
   for(i=0; i<n; i++){
     if(nums[i]<x)
        nums2[j++]=nums[i]; //Origen es igual a destino 
     return j;
     }

};

//Orgenar un entero y el arreglo 
// n elementos
// x valores random 
// Encontrar todos los valores iguales a x dentro del array y eliminalos 
//Estudiar apuntadores
