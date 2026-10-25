#include <stdio.h>
int main(){
    //Denominando os nomes do produto
    char nomeProd[10][30] = {
        "Sabonete", "Detergente", "Shampoo", "Condicionador", "Sabão",
        "Amaciante", "Bolacha", "Biscoito", "Refrigerante", "Suco"
    };
    int qtdProd[10], cont=0, Maior=0;

    //Entrada das quantidades dos produtos
    for (int i=0; i<10; i++){
        int j=i;
        printf("Digite a quantidade do produto %s: ", nomeProd[i]);
        scanf("%d", &qtdProd[j]);
        //Repete se o valor digitado for menor que zero e pede pra digitar a quantidade novamente
        while(qtdProd[j]<0){
            printf("Erro! Apenas valores Positivos!\n");
            printf("Digite a quantidade do produto %s: ", nomeProd[i]);
            scanf("%d", &qtdProd[j]);
        }
        //Conta quantos produtos possuem mais de 20 quantidade
        if(qtdProd[j]>20){
            cont++;
        }
        //Guarda a maior quantidade digitada
        if (qtdProd[j]>Maior){
            Maior = qtdProd[j];
        }
    }
    //Apresenta todo o estoque com os nomes e quantidades dos produtos
    printf("\n============ESTOQUE===========\n");
    for (int i=0; i<10; i++){
        int j=i;
        printf("%s: %d", nomeProd[i], qtdProd[j]);
        printf("\n");
    }
    //Mostra a situação do estoque
    printf("======================SITUAÇÃO======================\n");
    //Se teve algum produto com mais de 20 ele mostra quantos teve
    if(cont!=0){
        printf("%d Produtos possuem mais de 20 unidades!\n", cont);
    }
    //Anda pela matriz inteira denovo para mostrar as informaçôes
    for (int i=0; i<10;i++){
        int j=i;
        //Se a quantidade daquele produto correspondente ao indice i for igual a 0 ele mostra que aquele produto está esgotado
        if(qtdProd[j]==0){
            printf("Produto %s está esgotado!\n", nomeProd[i]);
        }
        //Mesma coisa mas diz que está em baixo estoque se for menor que 5
        else if(qtdProd[j]<5){
            printf("Produto %s está em baixo estoque!\n", nomeProd[i]);
        }
        //Quando passar pelo produto cuja quantidade seja igual a maior quantidade digitada ele mostra que esse produto possui a maior quantidade
        if(qtdProd[j]==Maior){
            printf("O Produto %s possui a maior quantidade no estoque!\n", nomeProd[i]);
    }
    }
    printf("=====================================================\n");
    return 0;
}