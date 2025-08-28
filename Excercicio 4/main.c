#include <stdio.h>
#include <stdlib.h>
//algoritmo da media de 3 notas de um aluno
int main()
{

float nota1, nota2, nota3, media; //As variavies a serem divididas

//valores a serem inseridos
    printf("Insira primeira nota \n");
    scanf("%f",&nota1);

    printf("Insira segunda nota \n");
    scanf("%f",&nota2);

    printf("Insira terceira nota \n");
    scanf("%f",&nota3);

//calculo da media
    media = (nota1 + nota2 + nota3)/3;
//final
    printf( "A media das notas do aluno e %f \n", media); /*print media*/

    return 0;
}
