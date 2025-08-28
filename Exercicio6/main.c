#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracao de variaveis
    int numero1;

    //entrada de dados
    printf("digite o primeiro numero inteiro\n");
    scanf("%d", &numero1);

    printf("Aqui esta a tabuada de %d\n", numero1);

    //processamento de saida de dados

    printf("%d x 1 = %d \n", numero1, numero1 * 1); //o  numero escolhido pelo usuario multiplicado por 1
    printf("%d x 2 = %d \n", numero1, numero1 * 2); //o  numero escolhido pelo usuario multiplicado por 2
    printf("%d x 3 = %d \n", numero1, numero1 * 3); //o  numero escolhido pelo usuario multiplicado por 3
    printf("%d x 4 = %d \n", numero1, numero1 * 4); //o  numero escolhido pelo usuario multiplicado por 4
    printf("%d x 5 = %d \n", numero1, numero1 * 5); //o  numero escolhido pelo usuario multiplicado por 5
    printf("%d x 6 = %d \n", numero1, numero1 * 6); //o  numero escolhido pelo usuario multiplicado por 6
    printf("%d x 7 = %d \n", numero1, numero1 * 7); //o  numero escolhido pelo usuario multiplicado por 7
    printf("%d x 8 = %d \n", numero1, numero1 * 8); //o  numero escolhido pelo usuario multiplicado por 8
    printf("%d x 9 = %d \n", numero1, numero1 * 9); //o  numero escolhido pelo usuario multiplicado por 9
    printf("%d x 10 = %d \n", numero1, numero1 * 10); //o  numero escolhido pelo usuario multiplicado por 10

    return 0; //fim, voltar ao inicio

}
