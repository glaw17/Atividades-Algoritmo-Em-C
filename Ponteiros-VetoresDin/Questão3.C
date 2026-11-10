#include <stdio.h>
#include <stdlib.h>

int ehprimo(int numero){
    //0 não é primo 1 é primo
    if (numero<2)
        { return 0; }
    for (int i=2;i<numero;i++){
        if(numero%i==0)
            { return 0; }
    }
    //Se não cair nas outras condições é Primo
    return 1;
};

int ehpar(int numero){
    //Par = 1
    if (numero % 2 == 0)
        { return 1; }
    return 0;
};

int main(){
    int tam_v, *vet, i, j;
    int *jacontado, ocorrencias;
    int *vet_distintos, *vet_ocorrencias, posicao = 0;
    int somaPrIM = 0;
    char **nomeAnimais;
    int x=0;

    printf("Digite o Tamanho do Vetor: ");
    scanf("%d", &tam_v);

    if (tam_v!=0){
        vet = (int *)malloc(sizeof(int)*tam_v);
        jacontado = (int *)malloc(sizeof(int)*tam_v);
        vet_distintos = (int *)malloc(sizeof(int)*tam_v);
        vet_ocorrencias = (int *)malloc(sizeof(int)*tam_v);

        printf("\n========= Entrada dos Números =========\n");
        for(i=0;i<tam_v;i++){
            printf("Digite o %d número inteiro: ", i+1);
            scanf("%d", &vet[i]);
            jacontado[i] = 0;
        }

        for(i=0;i<tam_v;i++){
            if (jacontado[i]==1){
                continue;}
            ocorrencias = 1;
            jacontado[i] = 1;
            for(j =i+1; j<tam_v; j++){
                if(vet[i] == vet[j]){
                    ocorrencias++;
                    jacontado[j]=1;}
            }

            vet_distintos[posicao] = vet[i];
            vet_ocorrencias[posicao] = ocorrencias;

            //Soma dos Primos Impares
            if ((ehprimo(vet_distintos[posicao])==1) && (ehpar(vet_ocorrencias[posicao])==0)){
                somaPrIM += vet_ocorrencias[posicao];
            }

            posicao++;
        }
        //Cadastro dos Animais
        if (somaPrIM!=0){
            nomeAnimais = (char **)malloc(sizeof(char *)*somaPrIM);
            printf("\n======== ALOCAÇÃO DOS ANIMAIS ========\n");
            for (i=0;i<somaPrIM;i++){
                nomeAnimais[i] = (char *)malloc(sizeof(char)*40);
                printf("Digite o nome do animal %d de %d: ", i+1, somaPrIM);
                scanf("%s", nomeAnimais[i]);
            }
        }
        else if (somaPrIM==0){
            printf("\n Nenhum Animal para Alocar");
        }

        printf("\n================ RESULTADO ================\n");
        printf("| Números |  Ocorrências  |  Classificação  | Correspodências |\n");
        for(i=0;i<posicao;i++){
            printf("|  %d     |      %d      | ", vet_distintos[i], vet_ocorrencias[i]);
            if (ehprimo(vet_distintos[i])==1){
                printf("Primo -");
            }
            if (vet_ocorrencias[i]==1){
                printf(" Não Repetido  |");
            }
            else if (ehpar(vet_ocorrencias[i])==1){
                printf(" Par     |");
                if (somaPrIM!=0){
                    if (vet_distintos[i]<=somaPrIM){
                        x = vet_distintos[i];
                        printf(" %s |", nomeAnimais[x]);
                    }
                    else if (vet_distintos[i]>somaPrIM){
                        printf(" Não Há Correspondência |");
                    }
                }
            }
            else if(ehpar(vet_ocorrencias[i])==0){
                printf(" Ímpar   |");
            }
           printf("\n");
        }
        if (somaPrIM!=0){
            printf("============================================");
            printf("\n|   ANIMAIS   |\n");
            for(i=0;i<somaPrIM;i++){
                printf("| %d. %s |\n",i+1, nomeAnimais[i]);
            }
            for (i=0;i<somaPrIM;i++){
                free(nomeAnimais[i]);
            }
            free(nomeAnimais);
        }
        free(vet);
        free(vet_distintos);
        free(vet_ocorrencias);
        free(jacontado);
    }
    else{
        printf("\n Encerrando...");
    }
    return 0;
}