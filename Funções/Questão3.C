#include <stdio.h>
int maiorNum(int x, int y){
    if (x>y){
        return x;
    } else {
        return y;}
}

int main(){
    int x, y;
    printf("Digite o número X: ");
    scanf("%d", &x);
    printf("Digite o número Y: ");
    scanf("%d", &y);

    printf("O maior é: %d", maiorNum(x, y));
    
    return 0;
}