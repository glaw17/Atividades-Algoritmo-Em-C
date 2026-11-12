#include <stdio.h>

int i;
float calcularMediaTurma (float *notas){
    float soma = 0;
    for(i=0;i<10;i++){
        soma += notas[i];
    }
    return soma/10;
}

float encontreMaiorNota(float *notas){
    float maior=0;
    for(i=0;i<10;i++){
        if(notas[i]>maior){
            maior = notas[i];}
    }
    return maior;
}

int contarAprovado(float *notas){
    int contador =0;
    for(i=0;i<10;i++){
        if(notas[i]>=7){
            contador++;}
    }
    return contador;
}

void mostrarResultado(float *notas){
    printf("\n============== Resultado da Turma =============\n");
    printf("Média da Turma: %.2f\n", calcularMediaTurma(notas));
    printf("Maior Nota da Turma: %.2f\n", encontreMaiorNota(notas));
    printf("Quantidade de Alunos Aprovados: %d", contarAprovado(notas));
}

int main(){
    float notas[10];

    printf("=========== Alocação de Notas ============\n");
    for(i=0;i<10;i++){
        printf("Digite a Nota Final do %d Aluno: ", i+1);
        scanf("%f", &notas[i]);
    }

    mostrarResultado(notas);
}