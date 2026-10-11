#include <stdio.h>

int main (){
    int numero, contadorPares=0, contadorImpares=0;
    //Repete até i seja igual 10
    for (int i = 1; i<=10; i++){
        //Entrada de Dados
        printf("Digite o %dº Número: ", i);
        scanf("%d", &numero);
        //Verificando se o número é par ou ímpar e atribuindo ao respectivo contador 
        if (numero%2 == 0){
            printf("O Número digitado é par!\n\n");
            contadorPares += 1;
        }
        else{
            printf("O Número digitado é ímpar!\n\n");
            contadorImpares += 1;
        }
    }

    printf("============Resultado============\n");
    printf("Números Pares Digitados: %d\n", contadorPares);
    printf("Números Ímpares Digitados: %d", contadorImpares);
}
