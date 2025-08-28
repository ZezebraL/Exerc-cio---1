#include <stdio.h>
#include <stdlib.h>

int main()
{
   //algoritmo da media de 2 duas notas de um aluno e seus respectivos pesos

float nota1, nota2, peso1, peso2, media; //As variavies a serem divididas

//valores a serem inseridos
    printf("Insira primeira nota \n");
    scanf("%f",&nota1);
    printf( "Insira o peso da nota\n");
    scanf("%f",&peso1);

    printf("Insira segunda nota\n");
    scanf("%f",&nota2);
    printf("Insira o peso da nota\n");
    scanf("%f", &peso2);


//calculo da media
    media = (nota1*peso1 + nota2*peso2 )/2;
//final
    printf( "A media das notas do aluno e %f \n", media); /*print media*/

    return 0; //finalizar, voltar ao inicio

}
