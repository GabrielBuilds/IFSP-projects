#include <stdio.h>

int main()
{
    int Opcao;
    float Troco, Pagamento;

    printf("Escolha uma opcao\n1-Refri de Lata\n2-Suco Natural\n ");
    scanf("%i", &Opcao);

    if (Opcao == 1){

            printf("Quantos reais voce deseja inserir? ");
            scanf("%f", &Pagamento);

            float  Lata = 3.00;
                if (Pagamento <= 2.99){
                    printf("SALDO INSUFICIENTE!\n");
                    printf("Voce nao tem dinheiro o suficiente para tomar uma bebida\n");
                    printf("Faltam %.2f", Lata - Pagamento);}

            else if(Pagamento == 3.00){
                printf("Voce escolheu o refrigerante\n");
                printf("Por pagar o valor exato voce nao recebera troco");}

            else{
                Troco = Pagamento - Lata;
                printf("Voce escolheu o refrigerante\n!");
                printf("Voce recebera um troco de R$%.2f", Troco);}}

    else if (Opcao == 2){
            printf("Quantos reais voce deseja inserir? ");
            scanf("%f", &Pagamento);

            float Suco = 2.50;
                if (Pagamento <= 2.49){
                    printf("SALDO INSUFICIENTE!\n");
                    printf("Voce nao tem dinheiro o suficiente para tomar uma bebida\n");
                    printf("Faltam %.2f", Suco - Pagamento);}

            else if(Pagamento == 2.50){
                printf("Voce escolheu o suco\n");
                printf("Por pagar o valor exato voce nao recebera troco");}

            else{
                Troco = Pagamento - Suco;
                printf("Voce escolheu o Suco\n!");
                printf("Voce recebera um troco de R$%.2f", Troco);}}

    else {
        printf("OPCAO INEXISTENTE!\nTente novamente");
    }

}
