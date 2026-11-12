#include <stdio.h>

float calcularmedia(float *nota){
    float soma = 0;
    for (int i=0; i<3;i++){
        soma += nota[i];
    }
    return soma/3;
}

void mostrarSituação(float media){
    if(media>=7){
        printf("Aprovado!");
    } else {
        printf("Reprovado!");
    }
}

int main(){
    float nota[3];
    
    printf("========== Calculo da Situação Escolar ==========\n");
    for (int i=0; i<3; i++){
        printf("Digite a nota %d de 3: ", i+1);
        scanf("%f", &nota[i]);
    }
    printf("\nMédia do Aluno: %f\n", calcularmedia(nota));
    printf("Situação: ");
    mostrarSituação(calcularmedia(nota));

    return 0;
}