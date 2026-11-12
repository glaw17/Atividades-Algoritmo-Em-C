#include <stdio.h>

void mostrarSaudacao(){
    printf("Bem-vindo ao mundo das funções em C!\n");
}

int main(){
    for(int i=0;i<3;i++){
        mostrarSaudacao();
    }
    return 0;
}