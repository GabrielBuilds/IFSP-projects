// Calcula o estoque restante de farinha e a capacidade de produção adicional de pastéis após as vendas do dia.

#include <stdio.h>

int main()

{
    float FarinhaDeTrigo, RestodeFarinha, PastelNg = 0.035, PastelFg = 0.08;
    int PastelNv, PastelFv, MaisPastelF;

    printf("Digite a quantidade de farinha disponivel (kg): ");
    scanf("%f", &FarinhaDeTrigo);

    printf("Quantos pasteis normais foram vendidos no dia? ");
    scanf("%i", &PastelNv);

    printf("Quantos pasteis mata fome foram vendidos no dia? ");
    scanf("%i", &PastelFv);

    RestodeFarinha = FarinhaDeTrigo - (PastelFv * PastelFg + PastelNv * PastelNg);
    MaisPastelF = RestodeFarinha / PastelFg;

    if (RestodeFarinha <= 0){
        printf("Nao sobrou farinha para produzir mais pasteis");
    }else{  
        printf("Restaram %.2f Kg\n", RestodeFarinha);
    printf("Com essa farinha ainda eh possivel fazer %i pasteis mata fome", MaisPastelF);
}
    return 0;
}
  
