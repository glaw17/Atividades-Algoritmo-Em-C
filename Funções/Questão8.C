#include <stdio.h>

int ehPrimo(int num){
    if (num < 2){
        return 0;}
    for (int i = 2; i*i <= num; i++){
        if (num % i == 0){
            return 0;}
    }
    return 1;
}

int main(){
    int x;

    printf("Digite um número: ");
    scanf("%d", &x);

    if (ehPrimo(x) == 1){
        printf("O número %d é primo");
    } else {
        printf("O número %d não é primo");
    }

    return 0;
}