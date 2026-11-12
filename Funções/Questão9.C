#include <stdio.h>

void mostrarTabuada(int num){
    for (int i=1;i<=10;i++){
        printf("%d x %d = %d\n", num, i, num*i);
    }
}

int main(){
    int num;

    printf("Digite um Número para ver a Tabuada: ");
    scanf("%d", &num);

    printf("=========== Tabuada do Número %d ===========\n", num);
    mostrarTabuada(num);
}