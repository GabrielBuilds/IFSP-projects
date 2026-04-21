#include <stdio.h>

int main()

{
    int DiasPrevistos, DiasFundacao, DiasParede, DiasLaje, DiasTelhado, DiasPintura, PrazoReal;

    printf("Qual a previs�o de dias? ");
    scanf("%i", &DiasPrevistos);

    printf("Quantos dias para a fundacao? ");
    scanf("%i", &DiasFundacao);

    printf("Quantos dias para a parede");
    scanf("%i", &DiasParede);

    printf("Quantos dias para a laje");
    scanf("%i", &DiasLaje);

    printf("Quantos dias para o telhado");
    scanf("%i", &DiasTelhado);

    printf("Quantos dias para a pintura");
    scanf("%i", &DiasPintura);

    PrazoReal= DiasFundacao + DiasParede + DiasLaje + DiasTelhado + DiasPintura;

    if(PrazoReal <= 120){
        printf("Ele cumprira o prazo e tera %i dias adiantado", DiasPrevistos - PrazoReal);
    }else{
        printf("Ele cumprira com atraso e tera %i dias de atraso", PrazoReal - DiasPrevistos);
    }
    return 0;
}
