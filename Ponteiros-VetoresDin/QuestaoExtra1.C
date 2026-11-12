#include <stdio.h>
#include <stdlib.h>

int main(){
    int qtd;
    float *vetor, *temp;

    printf("Digite quantos Números você vai Digitar: ");
    scanf("%d", &qtd);

    vetor = (float *)malloc(sizeof(float)*qtd);
    for(int i=0;i<qtd;i++){
        printf("Digite o número %d de %d: ", i+1, qtd);
        scanf("%f", &vetor[i]);
    }

    temp = (float *)realloc(vetor, sizeof(float)*(qtd+2));
    if(temp!=NULL){
        vetor = temp;
        for(int i=qtd; i<qtd+2;i++){
            printf("Digite o número %d de %d: ", i+1, qtd+2);
            scanf("%f", &vetor[i]);
        }
    } else {
        printf("Falha na realocação!");
        free(vetor);
        return 1;
    }

    for(int i=0; i<qtd+2;i++){
        printf("Número %d: %.2f\n", i+1, vetor[i]);
    }
    free(vetor);

    return 0;
}