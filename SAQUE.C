#include <stdio.h>

int main()
{
    int qtdNotas200, qtdNotas100, qtdNotas50, qtdNotas20, qtdNotas10, qtdNotas5;
    int valorSaque, resto;
    int notas200 = 0, notas100 = 0, notas50 = 0, notas20 = 0, notas10 = 0, notas5 = 0;
    int totalCedulas;

    printf("Quantidade de notas de 200 no caixa: ");
    scanf("%d", &qtdNotas200);

    printf("Quantidade de notas de 100 no caixa: ");
    scanf("%d", &qtdNotas100);

    printf("Quantidade de notas de 50 no caixa: ");
    scanf("%d", &qtdNotas50);

    printf("Quantidade de notas de 20 no caixa: ");
    scanf("%d", &qtdNotas20);

    printf("Quantidade de notas de 10 no caixa: ");
    scanf("%d", &qtdNotas10);

    printf("Quantidade de notas de 5 no caixa: ");
    scanf("%d", &qtdNotas5);

    printf("\nQual valor deseja sacar? ");
    scanf("%d", &valorSaque);

    if (valorSaque < 5) {
        printf("Valor inválido para saque!\n");
        return 0;
    }

    resto = valorSaque;

    if (resto >= 200 && qtdNotas200 > 1) {
        notas200 = resto / 200;
        if (notas200 > qtdNotas200 - 1) {
            notas200 = qtdNotas200 - 1;
        }
        resto = resto - notas200 * 200;
    }

    if (resto >= 100 && qtdNotas100 > 1) {
        notas100 = resto / 100;
        if (notas100 > qtdNotas100 - 1) {
            notas100 = qtdNotas100 - 1;
        }
        resto = resto - notas100 * 100;
    }

    if (resto >= 50 && qtdNotas50 > 1) {
        notas50 = resto / 50;
        if (notas50 > qtdNotas50 - 1) {
            notas50 = qtdNotas50 - 1;
        }
        resto = resto - notas50 * 50;
    }

    if (resto >= 20 && qtdNotas20 > 1) {
        notas20 = resto / 20;
        if (notas20 > qtdNotas20 - 1) {
            notas20 = qtdNotas20 - 1;
        }
        resto = resto - notas20 * 20;
    }

    if (resto >= 10 && qtdNotas10 > 1) {
        notas10 = resto / 10;
        if (notas10 > qtdNotas10 - 1) {
            notas10 = qtdNotas10 - 1;
        }
        resto = resto - notas10 * 10;
    }

    if (resto >= 5 && qtdNotas5 > 1) {
        notas5 = resto / 5;
        if (notas5 > qtdNotas5 - 1) {
            notas5 = qtdNotas5 - 1;
        }
        resto = resto - notas5 * 5;
    }

    if (resto > 0) {
        printf("\nNão foi possível efetuar o saque! O caixa precisa manter ao menos 1 nota de cada e não possui troco suficiente.\n");
    }
    else {
        printf("\n--- Saque realizado com sucesso ---\n");
        if (notas200 > 0){
        printf("Notas de 200: %d\n", notas200);
        }
        if (notas100 > 0){
        printf("Notas de 100: %d\n", notas100);
        }
        if (notas50 > 0){
        printf("Notas de 50:  %d\n", notas50);
        }
        if (notas20 > 0){
        printf("Notas de 20:  %d\n", notas20);
        }
        if (notas10 > 0){
        printf("Notas de 10:  %d\n", notas10);
        }
        if (notas5 > 0){
        printf("Notas de 5:   %d\n", notas5);
        }

        totalCedulas = notas200 + notas100 + notas50 + notas20 + notas10 + notas5;
        printf("\nTotal de cédulas entregues: %d\n", totalCedulas);
    }

    return 0;
}