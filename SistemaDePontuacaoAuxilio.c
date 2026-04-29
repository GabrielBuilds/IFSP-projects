// Calcula a pontuação e o ano de recebimento de auxílio com base em critérios socioeconômicos familiares.

#include <stdio.h>

int main()

{
    ///todas as variaveis necessarias
    int NumeroDePessoas, NumeroDPessoasEsc, DoencaGrave;
    int Pontos = 0;
    float RendaPerCapita;
    char Genero;

    ///introducao de dados
    printf("Quantas adultos constituem essa familia? ");
    scanf(" %i", &NumeroDePessoas);

    printf("Quantos jovens em idade escolar fazem parte dela? ");
    scanf(" %i", &NumeroDPessoasEsc);

    printf("A familia eh chefiada por:\n(m) para mulher\n(h) para homem\n");
    scanf(" %c", &Genero);

    printf("Qual a renda per capita dela?");
    scanf(" %f", &RendaPerCapita);

    printf("Nessa familia a alguma pessoa com doenca grave ou incuravel?\n");
    printf("Digite 0 para nao\nqualquer outro valor para sim\n");
    scanf(" %i", &DoencaGrave);

    //Calculos
    Pontos += (1 * NumeroDePessoas);
    Pontos += (2 * NumeroDPessoasEsc);

    if (Genero == 'h' || Genero == 'H'){Pontos += 5;}
    else if (Genero == 'm' || Genero == 'M'){Pontos += 10;}

    if (DoencaGrave != 0 ){Pontos += 5;}

    if (RendaPerCapita < 810.5){Pontos += 10;}
    else if (RendaPerCapita >= 810.5 && RendaPerCapita <= 1621.0){Pontos += 5;}
    else{Pontos += 3;}

    //Resultados finais
    printf("\n==================\n");
    printf("Voce conseguiu %i pontos\n", Pontos);

    if (Pontos >= 25){
        printf("Ano de recebimento: 2026\n");
    }
    else if (Pontos >= 15 && Pontos <= 24){
        printf("Ano de recebimento: 2027\n");
    }
    else if (Pontos >= 10 && Pontos <= 14){
        printf("Ano de recebimento: 2028\n");
    }
    else {
        printf("Ano de recebimento: 2029\n");
    }
    printf("\n==================\n");

    return 0;
}   
