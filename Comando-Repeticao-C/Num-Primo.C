#include <stdio.h>
int main(){
    int numero, divisores = 0, resposta;
    float resto;
    do{
        //Entrada do número
        printf("Digite um número inteiro positivo para verificar se ele é primo: ");
        scanf("%d", &numero);
        //Repete até que o usúario digite um valor maior que 0
        while (numero<1){
            printf("Erro! Digite um valor maior que zero! ");
            scanf("%d", &numero);
        }
        //Repete enquanto o divisor seja menor que número, e a cada loop o divisor aumenta em 1 para que faça a divisão
        for (int divisor = 2; divisor<numero; divisor++){
            //Guarda o resto da divisão
            resto = numero%divisor;
            //Se o resto da divisão for exata ele mostra por qual divisor o número foi dividido, e adiciona mais 1 na quantidade de divisores
            if (resto == 0){
                printf("\nSeu número é divisível por: %d", divisor);
                divisores++;
            }
        //Se o número não foi dividido por nenhum divisor ele mostra que é primo, se não, ele mostra que não é primo
        }
        if (divisores == 0){
            printf("\nSeu número é primo!");
        }
        else{
            printf("\nSeu número não é primo!");
        }
        //Se o usuário digitar 1 o loop se repete, caso digite outro valor ele sai do loop
        printf("\n\nDigite 1 para continuar ou 0 para Sair: ");
        scanf("%d", &resposta);
    }while(resposta==1);

    printf("Saindo...");
    return 0;
}