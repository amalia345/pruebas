lo que es y el nombre char a
* apuntadores a algo 
//Tomarlo como un trabajo 

#include<stdio.h>
#include<string.h>

typedef union u1{
    int a;
    float b;
    char c[20];
}u1;

typedef struct s1{
    int a;
    float b;
    char c[20];
    u1 d;
}s1;

int main(){
   u1 x;
   s1 y;

   printf("Tam x: %d\tTam y: %d\n",sizeof(x),sizeof(y));
   y.a=64;
   printf("%d\t%.2f\t%s\n",y.a,y.b,y.c);

   y.b=64.1;
   printf("%d\t %.2f\t%s\n",y.a,y.b,y.c);

   strcpy(y.c,"ESCOM");
   printf("%d\t %.2f\t%s\n",y.a,y.b,y.c);

   y.d.a=25;
   printf("%d\t %.2f\t%s\t%d\n",y.a,y.b,y.c,y.d.a);

   y.d.b=25.5;
   printf("%d\t %.2f\t%s\t%.2f\n",y.a,y.b,y.c,y.d.b);

   strcpy(y.d.c,"Politecnico");
   printf("%d\t %.2f\t%s\t%s\n",y.a,y.b,y.c,y.d.c);


   return 0;
}
