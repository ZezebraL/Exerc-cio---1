
    #include <stdio.h>  // Para entrada/saída (printf, scanf)
    #include <math.h>   // Para a função de raiz quadrada (sqrt)

    int main()
{
    // Declaração de Variáveis
    int numero;                // Para guardar o número inteiro que o usuário digitar.
    double raizquadrada;       // Para guardar a raiz quadrada .
    long long numeroaoquadrado; // Para guardar o número ao quadrado.

    // Entrada de Dados
    printf("Digite um numero inteiro: \n");
    scanf("%d", &numero); // Lê um número inteiro.

    // Processamento (Cálculos Diretos)

    // Calcula a raiz quadrada. Se 'numero' for negativo, 'raizQuadrada' receberá o valor NaN.
    raizquadrada = sqrt(numero);

    // Calcula o número ao quadrado. Isso funciona normalmente para números negativos.
    numeroaoquadrado = (long long)numero * numero;

    // Saída de Dados
    // Imprime os resultados independentemente da entrada.
    printf("\n--- Resultados ---\n");
    printf("A raiz quadrada de %d e: %f\n", numero, raizquadrada);
    printf("O numero %d elevado ao quadrado e: %lld\n", numero, numeroaoquadrado);

    // Retorna 0 para indicar que o programa terminou com sucesso.
    return 0;
}

