#include <stdio.h>

int main (){
    int numero, resultado;
    char resposta;
    do{
        //Entrada do número
        printf("\nDigite um número para ver a tabuada: ");
        scanf("%d", &numero);

        printf("\n===========TABUADA DO NÚMERO %d===========\n", numero);
        //Repete 10 vezes, e a cada loop o fator aumenta em 1 para que faça a multiplicação e mostra na tela
        for (int fator = 1; fator<=10; fator++){
            resultado = numero*fator;
            printf("%dx%d = %d\n", numero, fator, resultado);
        }
        //Pergunta se quer ver outra tabuada
        printf("\nDeseja ver a tabuada de algum outro número?\n");
        printf("Digite [S,s] para continuar, ou [N,n] para sair: ");
        scanf(" %s", &resposta);
    //Repete se o usuário digitar S ou s, caso não ele sai do loop
    } while(resposta == 'S' || resposta == 's');
    
    printf("\nSaindo...");
    return 0;
}