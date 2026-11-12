#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct part{
    int id;
    char nome[50];
    int idade;
};

int fatorial(int num){
    if (num<=0){
        return 1;}
    return num * fatorial(num-1);
}

int potenciar(int base, int expoente){
    int resultado = 1;
    for (int i=0; i<expoente; i++){
        resultado *= base;
    }
    return resultado;
}

float mediaPonderada(int *num, int tam_v){
    float soma=0;
    int pesoF = 0;

    for (int i=0;i<tam_v;i++){
        soma += num[i]*(i+1);
        pesoF += i+1;
    }
    return soma/pesoF;
}





int main(){
    struct part participante[4], troca;
    float mediaP[4];
    int diagonal[4];
    int i, j, x, y, rep;
    int tam_v, **numeros, *trocaNum;

    printf("Quantos Valores cada Participante irá registradar: ");
    scanf("%d", &tam_v);

    numeros = (int **)malloc(sizeof(int *)*4);
    printf("============= Cadastro dos Participantes ===============\n");
    for (i=0;i<4;i++){
        printf("Nome do Participante %d de 4: ", i+1);
        scanf("%s", participante[i].nome);
        printf("Idade do Participante: ");
        scanf("%d", &participante[i].idade);
        participante[i].id = fatorial(participante[i].idade)/2;

        rep = 0;
        diagonal[i] = 0;
        numeros[i] = (int *)malloc(sizeof(int)*tam_v);
        for(j=0;j<tam_v;j++){
            printf("Digite o %d valor de %d: ", j+1, tam_v);
            scanf("%d", &numeros[i][j]);

            if (rep==0 && numeros[i][j]>=0){
                x = numeros[i][j];
                rep++;
            }
            else if (rep==1 && numeros[i][j]>=0){
                y = numeros[i][j];
                diagonal[i] = sqrt((x*x + y*y));
                rep++;
            }
        }
        if(diagonal[i]!=0){
            printf("\n%d\n", diagonal[i]);
        }
        else{
            printf("\n%d\n", diagonal[i]);
        }

        printf("\n");
    }
    //Verificação do ID
    for (i=0;i<4;i++){
        for (j=i+1;j<4;j++){
            if(participante[i].id == participante[j].id){
                x = participante[j].idade/2;
                participante[j].id = potenciar(fatorial(x), 4);
            }
        }
    }
    //Ordem Alfabetica
    for (int i=0; i<3;i++){
        for (int j=0;j<3-i;j++) {
            if (strcmp(participante[j].nome, participante[j + 1].nome) > 0) {
                //Troca o Participante
                troca = participante[j];
                participante[j] = participante[j+1];
                participante[j+1]=troca;
                //Troca os Números
                trocaNum = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = trocaNum;
            }
        }
    }

    printf("\n================= Classficação Final ==================");
    for (i=0;i<4;i++){
        printf("\n     %s    | ", participante[i].nome);
        if (diagonal[i]==0){
            printf("Não foi Possível Calcular a Diagonal");
        }
        else if (diagonal[i] == mediaPonderada(numeros[i], tam_v)){
            printf("Sobre a Diagonal");
        }
        else if (diagonal[i] > mediaPonderada(numeros[i], tam_v)){
            printf("Acima da Diagonal");
        }
        else {
            printf("Abaixo da Diagonal");
        }
    }
    printf("\n=================================================");
}