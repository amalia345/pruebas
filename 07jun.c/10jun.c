#include <stdio.h>

int convertirBinarioADecimal(int numeroBinario);
int convertirDecimalABinario(int numeroDecimal);

int main() {
  int opcion, numeroIngresado, resultadoConversion;

  while (1) { // infinite cycle
    printf("1. Convertir binario (de 0 a 111111111) a decimal\n");
    printf("2. Convertir decimal (de 0 a 1023) a binario\n");
    printf("3. Salir\nElige una opción: ");
    scanf("%d", &opcion);

    if (opcion == 3) {
      break; // Break cycle of while
    }

    printf("Ingresa el número: ");
    scanf("%d", &numeroIngresado);

    if (opcion == 1) {
      resultadoConversion = convertirBinarioADecimal(numeroIngresado);
      printf("El resultado de binario a decimal es: %d\n", resultadoConversion);
    } 
    // CONSTANTE_PI , KEY_API
    
    
    
    else if (opcion == 2) {
      resultadoConversion = convertirDecimalABinario(numeroIngresado);
      printf("El resultado de decimal a binario es: %d\n", resultadoConversion);
    } else {
      printf("Opción no válida\n");
    }
  }

  return 0;
}
//Funcion a decimal
int convertirBinarioADecimal(int numeroBinario) { // Argumento que viene de main ( de la funcion) 
  int numeroDecimal = 0, potenciaDeDos = 1; 

  while (numeroBinario > 0) {
    numeroDecimal = numeroDecimal + (numeroBinario % 10) * potenciaDeDos;
    numeroBinario = numeroBinario / 10;
    potenciaDeDos = potenciaDeDos * 2;
  }

  return numeroDecimal;
}

//Funcion a bianrio


int convertirDecimalABinario(int numeroDecimal) {
  int numeroBinario = 0;
  int potenciaDeDiez = 1;
  int digitoBinario; // Declaración del dígito binario

  while (numeroDecimal > 0) {
    digitoBinario = numeroDecimal % 2; // Extraer el dígito binario menos significativo
    numeroBinario += digitoBinario * potenciaDeDiez; // Sumar el valor del dígito a la potencia correspondiente
    potenciaDeDiez *= 10; // Multiplicar la potencia de 10 por 10 para la siguiente iteración
    numeroDecimal /= 2; // Dividir el número decimal por 2 para obtener la parte entera
  }

  return numeroBinario;
}


