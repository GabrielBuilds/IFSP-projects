// Processa pagamentos aplicando desconto de 10% para compras à vista ou calculando o valor das parcelas para compras a prazo.

#include <stdio.h>

int main()

{
    float ValorDaCompra, Desconto, Total;
    int Parcelas;
    char Opcao;

    printf("Digite o valor total da compra: ");
    scanf("%f", &ValorDaCompra);

    printf("Selecione a opcao\n[v]-A Vista\n[p]-A Prazo\n");
    scanf(" %c", &Opcao);

    if(Opcao == 'v' || Opcao == 'V'){
        Desconto = ValorDaCompra * 0.10;
        Total = ValorDaCompra - Desconto;
        printf("O produto a vista vai ficar no valor de R$%.2f", Total) ;

    }else if(Opcao == 'p' || Opcao == 'P'){
        printf("Digite a quantidade de parcelas: ");
        scanf("%i", &Parcelas);

        if (Parcelas >= 7){
            printf("Numero incorreto de prestacoes");
        }
        else{
            printf("Vao ficar %i parcelas", Parcelas);
            printf("No valor de R$%.2f",  ValorDaCompra / Parcelas);}}
    else{
        printf("Opcao invalida!\nTente Novamente");
    }






}
