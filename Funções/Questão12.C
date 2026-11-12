#include <stdio.h>
#include <stdlib.h>

int i;
int calcularTotalEstoque(int *produtos,int qtd){
    int soma = 0;
    for(i=0;i<qtd;i++){
        soma += produtos[i];
    }
    return soma;
}

int contarEstoqueBaixo(int *produtos,int qtd){
    int contador =0;
    for (i=0;i<qtd;i++){
        if(produtos[i]<5){
            contador++;}
    }
    return contador;
}

int buscarProduto(int codigo,int qtd){
    for (i=0;i<qtd;i++){
        if(i+1==codigo){
            return i;}
    }
    return -1;
}

int main(){
    int qtd_prod, *produtos, cod;

    printf("Digite a Quantidade de Produtos: ");
    scanf("%d", &qtd_prod);

    if(qtd_prod>0){
        printf("============ Cadastro do Estoque ===========\n");
        produtos = (int *)malloc(sizeof(int)*qtd_prod);
        for (i=0;i<qtd_prod;i++){
            printf("Digite a Quantidade do Produto %d de %d no Estoque: ", i+1, qtd_prod);
            scanf("%d", &produtos[i]);
        }

        printf("\n================ Situação do Estoque ==============\n");
        printf("Quantidade Total dos Produtos: %d\n", calcularTotalEstoque(produtos, qtd_prod));
        printf("Quantidade de Produtos com Baixo Estoque: %d\n", contarEstoqueBaixo(produtos, qtd_prod));
        do{
            printf("\nDigite o Código de um Produto para saber sua Posição no Vetor (0 para Sair): ");
            scanf("%d", &cod);
            if (buscarProduto(cod, qtd_prod)!=-1){
                printf("Produto com Codigo %d está na Posição %d.\n", cod, buscarProduto(cod,qtd_prod));
            } else {
                printf("Produto não Encontrado");
            }
        } while(cod!=0);

        free(produtos);
    } else {
        printf("Encerrando...");
    }
}