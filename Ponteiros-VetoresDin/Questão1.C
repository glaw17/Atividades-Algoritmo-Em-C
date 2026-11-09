#include <stdio.h>
#include <stdlib.h>

//Funções
int ehpar(int numero){
    //Par = 1
    if (numero % 2 == 0){ return 1; }
    //Impar = 0
    else{ return 0; }
};

typedef struct prod{
    char nome[40];
    float preco;
}prod;


int main() {
    int numeros[12];
    int ja_contado[12];
    int numeros_distintos[12];
    int numeros_ocorrencias[12];
    //Variaveis para auxiliar nos for
    int posicao = 0;
    int cont_rep = 0;
    int i, j;
    int cont_impar = 0;
    int cont_par = 0;

    //So pra zerar todas as posições
    for (i = 0; i < 12; i++) {
        ja_contado[i] = 0;
    }

    // Recebimento dos Números
    printf("============== SORTEIO ==============\n");
    for (i = 0; i < 12; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Contagem de Ocorrências
    for (i = 0; i < 12; i++) {
        // Se a posição atual já foi contada em uma passagem anterior, pula
        if (ja_contado[i] == 1) {
            continue;
        }
        cont_rep = 1;
        ja_contado[i] = 1; // Marca o próprio elemento como processado

        // Varre os elementos da frente para contar as cópias
        for (j = i + 1; j < 12; j++) {
            if (numeros[i] == numeros[j]) {
                cont_rep++;
                ja_contado[j] = 1; // Pulo do gato: marca a cópia para ser pulada no futuro!
            }
        }
        // Guarda o número distinto e a sua quantidade de ocorrências
        numeros_distintos[posicao] = numeros[i];
        numeros_ocorrencias[posicao] = cont_rep;
        posicao++;
        if (ehpar(cont_rep)==0){
            cont_impar++;
        }
        else if (ehpar(cont_rep)==1){
            cont_par++;
        }
    }

    //Parte para Cadastro de Produtos onde as Ocorrências são Impares
    prod produtos[cont_impar > 0 ? cont_impar : 1];
    cont_rep = 0;
    if (cont_impar>0){
        for(i = 0;i<posicao;i++){
            if(ehpar(numeros_ocorrencias[i])==0){
                printf("\n========= Cadastro do Produto =========\n");
                printf("Digite o Nome do Produto: ");
                scanf("%s", produtos[cont_rep].nome);
                printf("Digite o Preço do Produto: ");
                scanf("%f", &produtos[cont_rep].preco);
                cont_rep++;
            }
        }
    }

    //Parte para Armazenar as Ocorrências Pares num Vetor
    int v_pares[cont_par > 0 ? cont_par : 1];
    if (cont_par>0){
        cont_rep = 0;
        for(i = 0;i<posicao;i++){
            if(ehpar(numeros_ocorrencias[i])==1){
                v_pares[cont_rep] = numeros_distintos[i];
                cont_rep++;
            }
        }
        //Reorganização do Vetor para ordem Decrescente
        for (i = 0; i < cont_par - 1; i++) {
            for (j = 0; j < cont_par - i - 1; j++) {
                if (v_pares[j] < v_pares[j + 1]) {
                    cont_rep = v_pares[j];
                    v_pares[j] = v_pares[j + 1];
                    v_pares[j + 1] = cont_rep;
                }
            }
        }
    }

    printf("\n============ Resultado =============\n");
    //Letra A
    printf("Números Digitados: ");
    for (i = 0; i < 12; i++) {
        printf("%d ", numeros[i]);
    }
    //Letra B
    printf("\nNúmero | Ocorrências:");
    for (i = 0; i < posicao; i++) {
        printf("\n   %d   |    %d", numeros_distintos[i], numeros_ocorrencias[i]);
    }
    //Letra C
    if (cont_impar>0){
        printf("\n\nProdutos Cadastrados: \n");
        for (i = 0; i<cont_impar;i++){
            printf("Nome: %s | Preço: %f\n", produtos[i].nome, produtos[i].preco);
        }
    }
    else{
        printf("\nNenhum Produto Cadastrado!");
    }
    //Letra D
    if (cont_par>0){
        printf("\nVetor Par Decrescente: ");
        for (i=0;i<cont_par;i++){
            printf("%d ", v_pares[i]);
        }
    }
    else{
        printf("Nenhuma Ocorrência Par Encontrada");
    }

    return 0;   
}