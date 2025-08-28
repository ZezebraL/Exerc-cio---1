#include <stdio.h>
#include<math.h>

    int main()
{


    //Declaraçao de variaveis
    //O double é para um resultado mais preciso
    double base;
    double expoente;
    double resultado;

    //Entrada de Dados
    printf("Digite o numero da base: \n");
    scanf("%lf", &base); // Lê um número do tipo double e guarda em 'base'.

    printf("Agora, digite o numero do expoente: \n");
    scanf("%lf", &expoente); // Lê e guarda o 'expoente'.


    //
    resultado = pow(base, expoente);

    //Saida de dados

    printf("O resultado de %g elevado a %g e: %g\n", base, expoente, resultado);

    //Fim
    return 0;
}

