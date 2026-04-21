#include <stdio.h>

int main()

{
    int cabelo, barba, manicure, pedicure;
    float ValorBase = 0.0, resultado, desconto;

    printf("========Bem vindo a Babearia SWEENEY TODD!!=======\n");
    printf("Digite 0 se NAO deseja o servico e qualquer valor para SIM.\n\n");

    printf("Deseja cortar o cabelo? ");
    scanf(" %i", &cabelo);

    printf("Deseja fazer a barba?" );
    scanf(" %i", &barba);
    
    printf("Deseja o servico de manicure?");
    scanf(" %i", &manicure);

    printf("Deseja o servico de pedicure?");
    scanf(" %i", &pedicure);

    printf("Voce quer aplicar algum cupom de desconto?\n5, 10 ou 15: ");
    scanf(" %f", &desconto);

    if (cabelo != 0){ValorBase += 30.0; }
    if (barba != 0){ValorBase += 40.0;}
    if (manicure != 0){ ValorBase += 15.0;}
    if (pedicure != 0){ValorBase += 50.0;}

    if (cabelo != 0 && barba != 0 && manicure != 0 && pedicure != 0){
        ValorBase -= 15;
        printf("Promocao aplicada no valor da manicure (-R$15,00)");}

    if (desconto == 5 || desconto == 10 || desconto == 15){
        resultado = ValorBase - (ValorBase * (desconto / 100.0));
        printf("DESCONTO APLICADO");
    }else{
        printf("Desconto invalido!\n");
        resultado = ValorBase;}
    printf("O valor final do servico sera R$%.2f", resultado);

    return 0;
}
