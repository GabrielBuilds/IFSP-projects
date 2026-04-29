// Calcula o custo total de sacos de cimento e calcário, aplicando taxas de frete variáveis conforme o valor da compra.
#include <stdio.h>

int main()
{
    int SacosdCim, SacosdCal;
    float ValorCim, ValorCal, Soma1, Soma2, Resultado;

    printf("Quantos sacos de cimento foram usados? ");
    scanf("%i", &SacosdCim);

    printf("Qual o valor do cimento? ");
    scanf("%f", &ValorCim);

    printf("Quantos sacos de calcario foram usados? ");
    scanf("%i", &SacosdCal);

    printf("Qual o valor do calcario? ");
    scanf("%f", &ValorCal);

    Soma1 = SacosdCim * ValorCim;
    Soma2 = SacosdCal * ValorCal;
    Resultado = Soma1 + Soma2;

    if (Resultado >= 1000){
        printf("O valor total a ser pago com o frete  de R$%.2f", Resultado + 50);
    }else{
        printf("O valor total a ser pago com o frete  de R$%.2f", Resultado + 100);
    }

}
