include<stdio.h>
#include<string.h>

union u1{
    int a;
    float b;
    char c[20];
};

struct s1{
    int a;
    float b;
    char c[20];
};

int main(){
   union u1 x;
   struct s1 y;

   printf("Tam x: %d\tTam y: %d\n",sizeof(x),sizeof(y));
   x.a=64;
   printf("%d\t%.2f\t%s\n",x.a,x.b,x.c);

   x.b=64.1;
   printf("%d\t %.2f\t%s\n",x.a,x.b,x.c);

   strcpy(x.c,"ESCOM");
   printf("%d\t %.2f\t%s\n",x.a,x.b,x.c);


   return 0;
}