#include <stdio.h>

int ehpar(int numero){
    if (numero % 2 == 0){
        return 1;
    }else{
        return 0;}
}

int main(){
    int num;

    printf("Digite um número para Verificar se é Par: ");
    scanf("%d", &num);

    if(ehpar(num)==1){
        printf("\nO número %d é par!", num);
    } else {
    printf("\nO número %d é impar!", num);}
}