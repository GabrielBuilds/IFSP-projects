// Define a porcentagem de pagamento de dois ajudantes com base em quem trabalhou por mais dias.

#include <stdio.h>

int main()

{
    int DiasA1, DiasA2;
    float ValorRecebido, Pag1, Pag2, resultado, resultado2;

    printf("Quantos o pedreiro recebeu? ");
    scanf("%f", &ValorRecebido);

    printf("Quantos dias o ajudante 1 trabalhou?");
    scanf("%i", &DiasA1);

    printf("Quantos dias o ajudante 2 trabalhou?");
    scanf("%i", &DiasA2);

    resultado = ValorRecebido * 0.18;
    resultado2 = ValorRecebido * 0.12;

    if(DiasA1>DiasA2){

        printf("O ajudante 1 trabalhou mais que o segundo por tanto ele recebera R$%.2f\n", resultado);
        printf("Já o ajudante 2 que trabalhou menos recebera R$%.2f", resultado2);
    }else{
        printf("O ajudante 2 trabalhou mais que o primeiro por tanto ele recebar R$%.2f\n", resultado);
        printf("Já o ajudante 1 que trabalhou menos recebera R$%.2f", resultado2);
        
    }
}
