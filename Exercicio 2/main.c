#include <stdio.h>
#include <stdlib.h>

/*algoritmo da subtraçao de dois numeros reais*/

    int main()
    {
    float real1; /*primeiro número a ser informado pelo usuario */
    float real2; /*segundo número a ser informado pelo usuário */
    float subtracao; /*variável em que a subtracao será mantida */

    printf( "Digite o primeiro numero real\n"); /*prompt*/
    scanf( "%f", &real1); /*lê um real*/

    printf( "Digite o segundo numero real\n"); /*prompt*/
    scanf( "%f", &real2); /*lê um real*/

    subtracao = real1 - real2; /* atribui o total à subtracao*/

    printf( "O resultado da subtracao e %f\n", subtracao); /*print subtracao*/

    return 0; /* indica que o programa foi concluído com sucesso*/
    } /*fim da funcao main*/
