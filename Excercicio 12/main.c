#include <stdio.h>

      int main(){
    //Declarando Vari�veis

      float salario, resultado;
    //Entrada

      printf("Digite o salaio do funcionario sem usar separador de milhar: \n");
      scanf("%f", &salario);
    //Processamento

        resultado = salario * 0.05;
    //Sa�da

      printf("O total de imposto a ser pago ao IR seria: %.2f", resultado);
      return 0;
    }
