#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int cod;
    char nome[30];
    float preco;
}prod;


int main(){
    int capacidade=2, qtd =0, opcao;
    prod *produto, *temp;

    produto = (prod *)malloc(sizeof(prod)*capacidade);
    do{
        printf("\n=============== MENU ===============\n");
        printf("1 - Adicionar Produto\n2 - Listar Produtos\n3 - Compactar Memória\n4 - Sair\nOpção: ");
        scanf("%d", &opcao);

        if(opcao==0){break;}

        switch (opcao){
            case 1:
                if(qtd==capacidade){
                    capacidade *= 2;
                    temp = (prod *)realloc(produto, sizeof(prod)*capacidade);
                    if(temp!=NULL){
                        produto = temp;
                        printf("\nCapacidade Dobrada para %d!\n", capacidade);
                    } else {
                        printf("\nErro ao Dobrar Capacidade!\n");
                        free(produto);
                        return 1;
                    }
                }
                printf("\n====== Alocação de Produto ======\n");
                printf("Digite o Código do Produto %d: ", qtd+1);
                scanf("%d", &produto[qtd].cod);
                printf("Digite o Nome do Produto %d: ", qtd+1);
                scanf("%s", produto[qtd].nome);
                printf("Digite o Preço do Produto %d: ", qtd+1);
                scanf("%f", &produto[qtd].preco);
                qtd++;
                printf("\n== Produto Alocado com Sucesso! ==\n");
                break;
            case 2:
                if(qtd==0){
                    printf("\nNenhum Produto Cadastrado!\n");
                } else {
                    printf("\n========== Produtos =========\n");
                    for(int i=0;i<qtd;i++){
                        printf("\n= Produto %d =\n", i+1);
                        printf("Código: %d\n", produto[i].cod);
                        printf("Nome: %s\n", produto[i].nome);
                        printf("Preço: %.2f\n", produto[i].preco);
                    }
                }
                break;
            case 3:
                if(qtd>0 && qtd<capacidade){
                    temp = (prod *)realloc(produto, sizeof(prod)*qtd);
                    if(temp!=NULL){
                        produto = temp;
                        capacidade = qtd;
                        printf("\n== Memória Compactada com Sucesso! ==\n");
                    } else {
                        printf("\n== Erro ao Compactar Memória! ==\n");
                        free(produto);
                        return 1;
                    }
                } else {
                    printf("\n== Não Foi Possível Compactar Memória! ==\n");
                }
                break;
            default:
                break;
        }
    }while (opcao!=0);
    printf("\nSaindo...");
    free(produto);
    return 0;
}