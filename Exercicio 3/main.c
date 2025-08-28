#include <stdio.h>
#include <stdlib.h>

/*algoritmo da divisao de dois numeros inteiros*/

int main()
{
int inteiro1; /*primeiro número a ser informado pelo usuario */
int inteiro2; /*segundo número a ser informado pelo usuário */
float dividir; /*variável em que a divisao será mantida */

printf( "Digite o primeiro inteiro\n"); /*prompt*/
scanf( "%d", &inteiro1); /*lê um inteiro*/

printf( "Digite o segundo inteiro\n"); /*prompt*/
scanf( "%d", &inteiro2); /*lê um inteiro*/

dividir = inteiro1 / inteiro2; /* atribui o total à divisao*/

printf( "O quociente da divisao e %f\n", dividir); /*print dividir*/

return 0; /* indica que o programa foi concluído com sucesso*/
} /*fim da funcao main*/

