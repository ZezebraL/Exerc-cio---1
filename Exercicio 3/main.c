#include <stdio.h>
#include <stdlib.h>

/*algoritmo da divisao de dois numeros inteiros*/

int main()
{
int inteiro1; /*primeiro n�mero a ser informado pelo usuario */
int inteiro2; /*segundo n�mero a ser informado pelo usu�rio */
float dividir; /*vari�vel em que a divisao ser� mantida */

printf( "Digite o primeiro inteiro\n"); /*prompt*/
scanf( "%d", &inteiro1); /*l� um inteiro*/

printf( "Digite o segundo inteiro\n"); /*prompt*/
scanf( "%d", &inteiro2); /*l� um inteiro*/

dividir = inteiro1 / inteiro2; /* atribui o total � divisao*/

printf( "O quociente da divisao e %f\n", dividir); /*print dividir*/

return 0; /* indica que o programa foi conclu�do com sucesso*/
} /*fim da funcao main*/

