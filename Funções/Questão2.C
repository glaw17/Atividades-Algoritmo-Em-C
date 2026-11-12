#include <stdio.h>
int calcularDobro(int num){
    return num*2;
}

int main(){
    int num;
    printf("Digite um Numero para dobrar: ");
    scanf("%d", &num);

    printf("\nResultado: %d", calcularDobro(num));
    
    return 0;
}