#include <stdio.h>
#include <stdlib.h>

int fibonacci(int num){
    if(num<=0){
        return 0;
    }
    if(num==1){
        return 1;
    }
    else{
        return fibonacci(num-1) + fibonacci(num-2);
    }
}

int somaFibonacci(int posicao){
    int soma = 0;
    for (int i=1;i<=posicao;i++){
        soma += fibonacci(i);
    }
    return soma;
}

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
    int tam_v, i, j;
    char **nomeAtleta;
    int *numeros;
    int primeiro =0, segundo=0, terceiro=0;
    float somaM = 0, media;
    int posiP = -1, posiS = -1, posiT = -1;

    printf("Digite a Quantidade de Apostadores: ");
    scanf("%d", &tam_v);

    if (tam_v!>0){
        numeros = (int *)malloc(sizeof(int)*tam_v);
        nomeAtleta = (char **)malloc(sizeof(char *)*tam_v);

        printf("\n========= Cadastro dos Apostadores ===========\n");
        for (i=0;i<tam_v;i++){
            nomeAtleta[i] = (char *)malloc(sizeof(char)*40);
            printf("Nome do Apostador %d de %d: ", i+1, tam_v);
            scanf("%s", nomeAtleta[i]);
            printf("Valor Inteiro Positivo: ");
            scanf("%d", &numeros[i]);
            printf("\n");

            numeros[i] = somaFibonacci(numeros[i]);

            if (ehprimo(numeros[i])==1 && numeros[i]>primeiro){
                primeiro = numeros[i];
                posiP = i;
            }
            if (ehpar(numeros[i])==1 && numeros[i]>segundo  && numeros[i]!=primeiro){
                segundo = numeros[i];
                posiS = i;
            }
            somaM += numeros[i];
        }
        //Classificação para o Terceiro colocado
        media = somaM/tam_v;
        for (i=0;i<tam_v;i++){
            if (i != posiP && i != posiS){
                if (numeros[i] > media && numeros[i] > terceiro){
                    terceiro = numeros[i];
                    posiT = i;
                }
            }
        }

        printf("\n============== RESULTADO ===============\n");
        printf("| NOME | Aposta | Resultado |\n");
        if (primeiro != 0){
            printf("| %s | %d | Primeiro Lugar |\n", nomeAtleta[posiP], primeiro);}
        if (segundo != 0){
            printf("| %s | %d | Segundo Lugar |\n", nomeAtleta[posiS], segundo);}
        if (terceiro !=0){
            printf("| %s | %d | Terceiro Lugar |\n", nomeAtleta[posiT], terceiro);}
        for (i=0;i<tam_v;i++){
            if (i != posiP && i != posiS && i != posiT){
                printf("| %s | %d | Não Classificado\n", nomeAtleta[i], numeros[i]);
            }
        }

        if (primeiro == 0){
            printf("\nNinguem Foi Classficado para o Primeiro Colocado");
        }
        if (segundo == 0){
            printf("\nNinguem Foi Classficado para o Segundo Colocado");
        }
        if (terceiro == 0){
            printf("\nNinguem Foi Classficado para o Terceiro Colocado");
        }

        for (i=0;i<tam_v;i++){
            free(nomeAtleta[i]);
        }
        free(nomeAtleta);
        free(numeros);
    }
    else{
        printf("Encerrando...");
    }
    return 0;
}