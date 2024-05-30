#include<stdio.h>
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
