#include <stdio.h>

int main()

{
    int Genero, SeguroPerNoite, AnoDeFabricacao, DispositivoAntFurto; 
    int PontosNaCarteira;
    float Resultado, ValorApolice, desconto = 0.0;

    printf("===UTAI SEGUROS===");
    printf("Consulte seu desconto!\n");
    printf("OPCOES\nSim=0\nNao=QUALQUER OUTRO VALOR\n");

    printf("Voce eh mulher? \n");
    scanf(" %i", &Genero);

    printf("Veiculo possui local seguro para noite? \n");
    scanf(" %i", &SeguroPerNoite);

    printf("Seu veiculo foi fabricado apos 2019? \n");
    scanf(" %i", &AnoDeFabricacao);

    printf("O veiculo possui dispositivo anti-furto? \n");
    scanf(" %i", &DispositivoAntFurto);
    
    printf("Quantos pontos na carteira voce tem? \n");
    printf("DIGITE A QUANTIDADE");
    scanf(" %i", &PontosNaCarteira);

    if (Genero == 0){desconto += 5;}
    if (SeguroPerNoite == 0) {desconto += 2;}
    if (AnoDeFabricacao == 0){desconto += 2;}
    if (DispositivoAntFurto == 0){desconto += 1;}

    if (PontosNaCarteira == 0){desconto += 5;}
    else if (PontosNaCarteira <= 7){desconto += 4;}
    else if (PontosNaCarteira >= 8 && PontosNaCarteira <= 12){desconto += 3;}
    else if (PontosNaCarteira >= 13 && PontosNaCarteira <= 17) {desconto += 2;}
    
    printf("O seu desconto eh de %f\n", desconto);

    printf("Qual o valor bruto do apolice? \n");
    scanf(" %f", &ValorApolice);

    Resultado = ValorApolice * (1 - (desconto / 100.0));

    printf("\nApolice original: R$ %.2f", ValorApolice);
    printf("\nDesconto aplicado: %.0f%%", desconto);
    printf("\nValor com desconto: R$ %.2f\n", Resultado);
}