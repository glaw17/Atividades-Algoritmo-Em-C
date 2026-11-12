#include <stdio.h>
#include <stdlib.h>

int i;
float calcularTotal(float *vendas, int dias){
    float soma = 0;
    for(i=0;i<dias;i++){
        soma += vendas[i];
    }
    return soma;
}

float calcularMedia(float soma, int dias){
    return soma/dias;
}

int contarVendasAcimaDaMedia(float *vendas, float media, int dias){
    int contador = 0;
    for (i=0;i<dias;i++){
        if(vendas[i]>media){
            contador++;
        }
    }
    return contador;
}

int main(){
    float *vendas;
    int dias;
    float soma, media;

    printf("Digite quantos Dias de Venda você quer calcular: ");
    scanf("%d", &dias);
    if(dias>0){
        vendas = (float *)malloc(sizeof(float)*dias);
        for(i=0;i<dias;i++){
            printf("Digite o Valor das Vendas do %dº Dia: ", i+1);
            scanf("%f", &vendas[i]);
        }

        soma = calcularTotal(vendas, dias);
        media = calcularMedia(soma, dias);

        printf("=============== Resultado ==============\n");
        printf("Total Vendido: %.2f\n", soma);
        printf("A Média de Vendas Diária: %.2f\n", media);
        printf("Quantidade de Dias Acima da Média: %d", contarVendasAcimaDaMedia(vendas, media,dias));

        free(vendas);
    } else {
        printf("Encerrando...");
    }
    return 0;
}