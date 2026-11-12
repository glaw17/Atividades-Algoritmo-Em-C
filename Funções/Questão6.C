#include <stdio.h>

float somar(float x, float y){
    return x+y;
}
float subtrair(float x, float y){
    return x-y;
}
float multiplicar(float x, float y){
    return x*y;
}
float dividir(float x, float y){
    return x/y;}

int main(){
    float x, y;
    int operador;

    printf("============== Calculadorazinha ==============\n");
    printf("Digite o Primeiro Número: ");
    scanf("%f", &x);
    printf("Digite o Segundo Número: ");
    scanf("%f", &y);
    do{
        printf("\n= Escolha a Operação =\n");
        printf("1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n");
        printf("Operação: ");
        scanf("%d", &operador);  
    } while(operador!=1 && operador!=2 && operador!=3 && operador!=4);

    printf("\n====================================\n");
    switch (operador){
        case 1:
            printf("Resultado : %.2f", somar(x,y));
            break;
        case 2:
            printf("Resultado : %.2f", subtrair(x, y));
            break;
        case 3:
            printf("Resultado : %.2f", multiplicar(x, y));
            break;
        case 4:
            if (y==0){
                printf("Erro ao Dividir %.2f por 0", x);
            } else {
                printf("Resultado : %.2f", dividir(x, y));
            }
            break;
        default:
            printf("ERRO!");
   }
   return 0;
}