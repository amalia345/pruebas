//DIEGO
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int Menor(int[],int,int);
void Intercambia(int[],int,int);
void Selection(int[],int);
int CopyArraymenor(int, int, int[], int[]);
int Elim_del_Array(int ,int , int[]);
void CopyArray( int, int[], int[]);
void LlenaRand(int, int,int[]);
void AcomoArr(int, int[]);
void ImpArrInt(int, int[]);
int EstaEn(int,int, int[]);
int main(){
   int n, x, p,maximo, nums[200],nums2[200],m,k,l,q;
   printf("Dame el numero de elementos y el valor maximo!!!\t");
   scanf("%d%d", &n, &maximo);

   LlenaRand(n, maximo, nums);
   
   //puts("\nDesordenados: ");
   ImpArrInt(n, nums);
   q = Menor(nums,0,n-1);
   printf("El numero menor del arreglo es a[%d]=%d\t",q,nums[q]);
   Selection(nums,n);
   //puts("\nDesordenados: ");
   ImpArrInt(n, nums);
   
   
   
   
   
   
   //printf("que elemnto deseas eliminar del arreglo\t");
   //scanf("%d", &k);
   //l= Elim_del_Array(k,n , nums);
   //ImpArrInt(l, nums);

   //printf("filtra el arreglo hasta que numero\t");
   //scanf("%d", &k);
   
   //CopyArray(n,nums,nums2);
   //m=CopyArraymenor(k,n,nums,nums2);
   //AcomoArr(m,nums2);
   //printf("\n numero de elementos filtrados %d\n",m);
   //ImpArrInt(m, nums2);
   //AcomoArr(n,nums);
   //puts("\nOrdenados: ");
   //ImpArrInt(n, nums);
   //p=EstaEn(x, n, nums);
   //printf("\nEl numero mayor del arreglo es %d \n",  p);
 
   return 0;
}

void LlenaRand(int n, int mayor, int nums[]){
   int i;
   srand(time(NULL));        //seedrand(semilla)
   for(i=0; i<n; i++)
     nums[i]=1+rand()%mayor;
};


void AcomoArr(int n, int a[]){
int t,i,j;

for(j=0;j<n-1;j++){
     for(i=n-1;i>j;i--){
     
     if (a[i]<=a[i-1]){
        t=a[i];
        a[i]=a[i-1];
        a[i-1]=t;}
     
     }

}

}




void ImpArrInt(int n, int nums[]){
     int i;
     printf("\n--------------------------------------------------------------------------------------\n");
     
     for(i=0; i<n; i++){
     printf("%d\t", nums[i]);
     if(i%10==0 && (i>0))
        putchar('\n');
     }
     puts("\n----------------------------------------------------------------------------------------\n");
}


int EstaEn(int x,int n, int nums[]){
    int i, j;
    j= nums[0];
    for(i=1; i<n; i++){
        if (nums[i] != '\0'){
             if(j>nums[i]);
                 
             else{
                 j=nums[i];
                 }
         }
    }
    return j;
};


void CopyArray(int n, int nums[],int d[]){

  int i;
  
   for(i=0; i<n;i++){
     d[i]=nums[i];
   }
  

}



int CopyArraymenor(int x,int n, int nums[],int d[]){

  int i,j;
  
  j=0;
  
   for(i=0; i<n;i++){
   if (nums[i]<=x)
     d[j++]=nums[i];
     
   }
  
 return j; 
 
}





int Elim_del_Array(int x,int n, int nums[]){

  int i,j,k;
  
  
  
   for(i=0; i<n;i++){
   if (nums[i]==x){

    k=n-1;

      for (j=i;j<=n;++j)
         nums[j]=nums[j+1];

    }
   } 
   

  return k;
}



//insercion 
//agregar un dato a un grupo de datos que ya esta ordenado

//seleccion
//

int Menor(int a[],int p,int u ){
 int i, m=a[p], j=p;
 for (i=p+1;i<=u;i++){
  if (a[i]<m){
   m=a[i];
   j=i;
  }
 } 
return j;
};


void Intercambia(int a[],int i,int j){
 int t=a[i];
 a[i]=a[j];
 a[j]=t;

};

void Selection(int a[], int n){
int k,i;
 for(i=0;i<=n-1;i++){
   k=Menor(a,i,n-1);
   Intercambia(a,i,k);
 }
};


//Funcion que calcule el promedio de los elementos que se encuentren en un arreglo 







