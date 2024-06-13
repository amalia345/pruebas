#include<stdio.h>
void RotaDer(int[], int); //Rotando un array como una cola
void ImpArrInt(int, int[]);
void LlenaRand(int, int, int[]);

int main()
{
    int n, x, p,maximo, nums[200],nums2[200],m,k,l,q,i;
    float s;
    printf("Dame el numero de elementos y el valor maximo!!!\t");
    scanf("%d%d", &n, &maximo);

    LlenaRand(n, maximo, nums);
    

    puts("\nDesordenados: ");
    ImpArrInt(n, nums);
    
   
    /*Selection(nums,n);
    puts("\nordenados: ");
    ImpArrInt(n, nums);
    */

   while(1){
    puts("\nRotados: ");
       RotaDer(nums, n);
       ImpArrInt(n, nums);
       fflush(stdin);
       
       getchar();
   }
    return 0;
    
}


void LlenaRand(int n, int mayor, int nums[]){
   int i;
   srand(time(NULL));        //seedrand(semilla)
   for(i=0; i<n; i++)
     nums[i]=1+rand()%mayor;
};

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

void RotaDer(int a[], int n){
    int i, t= a[n-1];
    for(i=n-2; i>=0; i--)
        a[i+1]=a[i];

    a[0]=t;
}

//Estudiar buble 