#include <stdio.h>

    int main(){
      int peso;
    //Declarando vari�vel
      float pesog, resultado;
    //Comandos de entrada
      printf("Digite seu peso. Use apemas numeros inteiros: \n");
      scanf("%i", &peso);
    //Processamento
      pesog = peso * 1000;
    //Sa�da
      printf("Seu peso em gramas seria: %.2f\n", pesog);
    //Processamento 2
      resultado = pesog * 5/100 + pesog;
    //Sa�da mais uma vez
      printf("Seu peso mais 5%%: %f", resultado);
      return 0;
    }
