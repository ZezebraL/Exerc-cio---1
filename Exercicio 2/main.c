#include <stdio.h>
#include <stdlib.h>

/*algoritmo da subtra�ao de dois numeros reais*/

    int main()
    {
    float real1; /*primeiro n�mero a ser informado pelo usuario */
    float real2; /*segundo n�mero a ser informado pelo usu�rio */
    float subtracao; /*vari�vel em que a subtracao ser� mantida */

    printf( "Digite o primeiro numero real\n"); /*prompt*/
    scanf( "%f", &real1); /*l� um real*/

    printf( "Digite o segundo numero real\n"); /*prompt*/
    scanf( "%f", &real2); /*l� um real*/

    subtracao = real1 - real2; /* atribui o total � subtracao*/

    printf( "O resultado da subtracao e %f\n", subtracao); /*print subtracao*/

    return 0; /* indica que o programa foi conclu�do com sucesso*/
    } /*fim da funcao main*/
