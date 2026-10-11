#include <stdio.h>

int main (){
    int resposta;
    float saldo=0;

    //Descrição de Opções (Coloquei fora para que não se repita a cada loop)
    printf("====================Cofre=Digital====================\n");
    printf("Digite 1 para adicionar 50 centados ao seu saldo\n");
    printf("Digite 2 para adicionar 1 real ao seu saldo\n");
    printf("Digite 3 para adiocioanr 2 reais ao seu saldo\n");
    printf("Digite 0 para sair\n");

    //Executa a primeira vez e logo após o usuário insere qual das opções quer escolher e ser for 0 ele sai do loop
    do{
        printf("\n[1, 2, 3, 0] ");
        scanf("%d", &resposta);
        //Verifica qual das opções o usuário escolheu e adiciona ao saldo o valor correspondente
        switch (resposta){
        case 1:
            saldo += 0.5;
            printf("Saldo Atual: %.2f\n", saldo);
            break;
        case 2:
            saldo += 1;
            printf("Saldo Atual: %.2f\n", saldo);
            break;
        case 3:
            saldo += 2;
            printf("Saldo Atual: %.2f\n", saldo);
            break;
        case 0:
            break;
        default:
            printf("Erro! Escolha uma das 4 opções!\n")
        }
    } while(resposta!=0);

    //Mostra ao usuario seu saldo final
    printf("\nSaldo Final: %.2f", saldo);
}