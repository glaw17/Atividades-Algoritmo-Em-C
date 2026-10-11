#include <stdio.h>

int main (){
    float consumo;
    float somaConsumo = 0;
    float mediaGeralConsumo;
    //Repete até que i seja igual a 5
    for (int i = 1; i<=5; i++){
        //Inserção dos Dados
        printf("Digite seu consumo mensal de água em metros cúbicos: ");
        scanf("%f", &consumo);
        
        //Repete até que o usuário digite um valor maior que 0
        while(consumo<0){
            printf("\nValor Inválido! Digite um valor acima de 0! ");
            scanf("%f", &consumo);
        }
        //Verificando se o usuário está dentro da média ou não e mostrando na tela
        if (consumo<=20){
            printf("Parabéns! Você está dentro da média de consumo prevista!\n\n");
        }
        else{
            printf("Alerta! Você ultrapassou a média de consumo prevista!\n\n");
        }
        //Atribuindo a uma variável o valor de consumo de cada loop
        somaConsumo += consumo;
    }
    //Calculo da media geral de consumo dos 5 moradores e mostrando na tela
    mediaGeralConsumo = somaConsumo/5;
    printf("\nA média de consumo mensal geral é: %.2f", mediaGeralConsumo);
}