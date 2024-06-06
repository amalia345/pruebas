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