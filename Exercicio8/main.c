
    #include <stdio.h>  // Para entrada/sa�da (printf, scanf)
    #include <math.h>   // Para a fun��o de raiz quadrada (sqrt)

    int main()
{
    // Declara��o de Vari�veis
    int numero;                // Para guardar o n�mero inteiro que o usu�rio digitar.
    double raizquadrada;       // Para guardar a raiz quadrada .
    long long numeroaoquadrado; // Para guardar o n�mero ao quadrado.

    // Entrada de Dados
    printf("Digite um numero inteiro: \n");
    scanf("%d", &numero); // L� um n�mero inteiro.

    // Processamento (C�lculos Diretos)

    // Calcula a raiz quadrada. Se 'numero' for negativo, 'raizQuadrada' receber� o valor NaN.
    raizquadrada = sqrt(numero);

    // Calcula o n�mero ao quadrado. Isso funciona normalmente para n�meros negativos.
    numeroaoquadrado = (long long)numero * numero;

    // Sa�da de Dados
    // Imprime os resultados independentemente da entrada.
    printf("\n--- Resultados ---\n");
    printf("A raiz quadrada de %d e: %f\n", numero, raizquadrada);
    printf("O numero %d elevado ao quadrado e: %lld\n", numero, numeroaoquadrado);

    // Retorna 0 para indicar que o programa terminou com sucesso.
    return 0;
}

