// Monitora as vendas diárias durante um ciclo de 30 dias para verificar se a meta mensal estabelecida foi atingida.

#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int VendasDoDia, TotalVendas, MetaMensal, dia;

    printf("DIGITE A META DO MES: ");
    scanf("%i", &MetaMensal);

    dia =1;

    while(dia <= 30)
    {
        printf("\nQuantos foram vendidos no dia %i: ", dia);
        scanf(" %i", &VendasDoDia);
        dia = dia + 1;
        TotalVendas = TotalVendas + VendasDoDia;
    }
    printf("\nO total arrecadado com as vendas foi de R$ %i\n", TotalVendas);

    if (TotalVendas >= MetaMensal)
    {
        printf("VOCÊ BATEU Á META CONGRATULATIONS!");
    }
    else
    {
        printf("VOCE NÃO É TÃO BOM ASSIM É UM FRACASSADO");
    }
    return 1;
}
