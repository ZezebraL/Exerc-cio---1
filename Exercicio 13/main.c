#include <math.h>

    int main(){
    //Declarando Vari�veis

      float salario, valor_acrescimo;
      printf("Salario aqui: \n");
      scanf("%f", &salario);
    //Processamento

      valor_acrescimo = (salario * 0.25) + salario;
    //Sa�da

      printf("Seu salario com acresscimo seria: %.2f", valor_acrescimo);
      return 0;
    }
