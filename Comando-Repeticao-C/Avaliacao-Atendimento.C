#include <stdio.h>

int main (){
    float avaliacao;
    float somaAvaliacao=0;
    float mediaAvaliacao;
    //Repete até que i seja igual a 10
    for (int i = 1; i<=10; i++){
        //Inserção da Avaliação dos Clientes
        printf("===============AVALIAÇÃO===============\n");
        printf("Olá! Avalie nosso atendimento de 0 a 10: ");
        scanf("%f", &avaliacao);

        //Validando Entrada para que seja de 0 a 10
        while (avaliacao<0 || avaliacao>10){
            printf("Ops! Digite apenas números entre 0 e 10: ");
            scanf("%f", &avaliacao);
        }
        printf("Obrigado! Volte Sempre!\n\n");
        //Atribuindo a variável o valor da avaliação dada por cada cliente
        somaAvaliacao += avaliacao;
    }
    //Calculo da Média da Avaliação dos 10 clientes e mostrando na tela
    mediaAvaliacao = somaAvaliacao/10;
    if (mediaAvaliacao<7){
        printf("Alerta! A média de avaliação dos últimos 10 clientes ficaram abaixo de 7!(%.2f)", mediaAvaliacao);
    }
    else{
       printf("Média de Avaliação dos últimos 10 clientes: %.2f", mediaAvaliacao); 
    }
return 0;
}
