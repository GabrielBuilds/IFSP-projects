#include <stdio.h>

int main()
{
    int TipoDeVeiculo;
    char TipoDeLavagem, LevaTraz;
    float ValorBase = 0.0,TaxaLevaTraz = 0.0, PrecoFinal;

    printf(" ===WAR CASH - LAVA-RAPIDO===\n");

    printf("Selecione o tipo de veiculo\n1-Motocicleta\n2-Carro\n3-Caminhonete\n ");
    scanf("%i", &TipoDeVeiculo);

    printf("Deseja a lavagem completa? C= Para sim ");
    scanf(" %c", &TipoDeLavagem);

    printf("Deseja o servico de leva e traz? S = Para Sim ");
    scanf(" %c", &LevaTraz);

    if(TipoDeVeiculo == 1){
        if (TipoDeLavagem == 'c' || TipoDeLavagem == 'C'){
            ValorBase = 10.00;}
        else {ValorBase = 5.00;
    }}
    else if (TipoDeVeiculo == 2){
        if (TipoDeLavagem == 'c' || TipoDeLavagem == 'C'){
            ValorBase = 25.00;}
        else {ValorBase = 15.00;}}

    else if (TipoDeVeiculo == 3){
        if (TipoDeLavagem == 'c' || TipoDeLavagem == 'C'){
            ValorBase = 50.00;}
        else {ValorBase = 35.00;}
    }
    if (LevaTraz == 'S' || LevaTraz == 's'){
        TaxaLevaTraz = 20;
    }else {LevaTraz =0;}

    PrecoFinal = ValorBase + TaxaLevaTraz;
    printf("RESUMO DO VEICULO: ");
    switch (TipoDeVeiculo) {
        case 1:
            printf(" Motocicleta\n");
            break;
        case 2:
            printf(" Carro\n");
            break;
        case 3:
            printf(" Caminhonete\n");
        default:
            printf("Não identificado\n");
            break;}

    printf("O valor total a ser pago sera de R$%.2f", PrecoFinal);
    printf("-------------------------\n");

    return 0;
}
