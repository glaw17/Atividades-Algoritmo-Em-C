#include <stdio.h>

int main(){
    int numero;
    int maiorNum=-999999999, menorNum=999999999, diferenca;

    //Repete 10 vezes
    for(int i = 1; i <=10; i++){
        //Entrada de Dados
        printf("\nDigite o %dº Número: ", i);
        scanf("%d", &numero);

        //Verificação se o número digitado é maior que o valor guardado na variável maiorNum
        if(numero > maiorNum){
            maiorNum = numero;
        }
        //Verificação se o número digitado é menor que o valor guardado na variável maiorNum
        if(numero<menorNum){
            menorNum = numero;
        }
    }
    diferenca = maiorNum - menorNum;
    //Apresentando Resultados
    printf("\n%d foi o Maior Número Digitado\n", maiorNum);
    printf("%d foi o Menor Número Digitado\n", menorNum);
    printf("A diferença entre o Maior e Menor número é: %d", diferenca);

    return 0;
}