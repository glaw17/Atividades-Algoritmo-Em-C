#include <stdio.h>

int main (){
    int passos, meta = 0, horas = 0;
    float mediaPassos;
    //Repete até que a Meta De Passos(10,000) seja atingida
    do{
        //Inserção de quantos passos o usúario deu
        printf("Digite quantos passos você deu:");
        scanf("%d", &passos);
        //Repete até que o usuário digite um valor maior que 0 
        while (passos<0){
            printf("\nErro! Apenas valores Positivos! Passos: ");
            scanf("%d", &passos);
        }
        //Toda vez que o loop repetir adiciona mais uma hora
        horas += 1;
        //Atribui a variavel a quantidade de passos digitado em todo loop
        meta += passos;
    } while(meta < 10000);

    printf("Meta Diária Atingida! Você alcançou em %d horas!\n", horas);
    //Transformei uma das variáveis em float para que a Media nao mostre um valor inteiro
    mediaPassos = (float)meta/horas;
    printf("Você deu %.2f passos por Hora!", mediaPassos);

    return 0;
}
