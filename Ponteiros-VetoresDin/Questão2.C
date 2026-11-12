#include <stdio.h>
#include <stdlib.h>

//PAR IMPAR
int ehpar(int numero){
    if (numero % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

//POSITIVO NEGATIVO 
int ehpositivo(int numero){
    if (numero >= 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int qtd_num, i, j;
    int *vet_num;
    int cont_parPosi = 0, cont_impNeg = 0;
    int *vet_par, *vet_impar;
    int x = 0, y = 0;

    printf("========== Classificação dos Número ==========\n");
    printf("Digite o tamanho do Vetor: ");
    scanf("%d", &qtd_num);
    //Verificando se ele digitou o tamanho do vetor
    if (qtd_num>0){
        vet_num = (int *)malloc(sizeof(int)*qtd_num);

        printf("\n======== Entrada ========\n");
        for (i=0; i<qtd_num;i++){
            printf("Digite o %d número: ", i+1);
            scanf("%d", &vet_num[i]);
            //Contagem para atribuir aos Vetores Correspondentes Depois
            if ((ehpar(vet_num[i]) == 1) && (ehpositivo(vet_num[i]) == 1)){
                cont_parPosi++;
            }
            else if ((ehpar(vet_num[i]) == 0) && (ehpositivo(vet_num[i]) == 0)){
                cont_impNeg++;
            }
        }
        //Atribuindo o tamanho dos vetores
        vet_par = (int *)malloc(sizeof(int)*cont_parPosi);
        vet_impar = (int *)malloc(sizeof(int)*cont_impNeg);
        
        //Atribuindo a cada vetor os valores, e usando variaveis auxiliares(x, y) para o indice dos vetores
        for (i=0; i<qtd_num;i++){
            if ((ehpar(vet_num[i]) == 1) && (ehpositivo(vet_num[i]) == 1)){
                vet_par[x] = vet_num[i];
                x++;
            }
            else if ((ehpar(vet_num[i]) == 0) && (ehpositivo(vet_num[i]) == 0)){
                vet_impar[y] = vet_num[i];
                y++;
            }
        }
        //Reordenação do vetor na forma crescente
        if (cont_parPosi>0){
            for(i=0;i<cont_parPosi;i++){
                for(j=i;j<cont_parPosi;j++){
                    if(vet_par[i]>vet_par[j]){
                        x = vet_par[i];
                        vet_par[i] = vet_par[j];
                        vet_par[j] = x;
                    }
                }
            }
        }
        //Reordenação do vetor na forma crescente
        if (cont_impNeg>0){
            for(i=0;i<cont_impNeg;i++){
                for(j=i;j<cont_impNeg;j++){
                    if(vet_impar[i]>vet_impar[j]){
                        x = vet_impar[i];
                        vet_impar[i] = vet_impar[j];
                        vet_impar[j] = x;
                    }
                }
            }
        }

        printf("\n=========== Saída ===========\n");
        if (cont_parPosi>0){
            printf("Números Pares Positivos: ");
            for (i = 0;i<cont_parPosi;i++){
                printf(" %d", vet_par[i]);}
        }
        else{
            printf("Nenhum Número Par Positivo Encontrado!");}
        
        if (cont_impNeg>0){
            printf("\nNúmeros Impares Negativos: ");
            for (i = 0;i<cont_impNeg;i++){
                printf(" %d", vet_impar[i]);}
        }
        else{
            printf("Nenhum Número Impar Negativo Encontrado!");}
    }
    else{
        printf("\nEncerrando Execução...");
    }
    //Liberando os negocio ae
    free(vet_num);
    if (cont_parPosi > 0) free(vet_par);
    if (cont_impNeg > 0) free(vet_impar);

    return 0;
}

