#include <stdio.h>
int main(){
    float boletim[3][4];

    //Entrada das notas dos Alunos no Boletim
    for (int i=0; i<3;i++){
        for (int j=0; j<3; j++){
            printf("Digite a %dº nota do %dº Aluno: ",j+1, i+1);
            scanf("%f", &boletim[i][j]);
        }
        //Guarda o calculo da média das notas na linha correspondente
        boletim[i][3] = (boletim[i][0] + boletim[i][1] + boletim[i][2])/3;
        printf("\n");
    }
    //Apresenta o Boletim na tela com uma casa decimal
    printf("===============BOLETIM===============\n");
    printf("|  ALUNOS  | NOTA1 | NOTA2 | NOTA3 | MÉDIA |\n");
    for (int i=0; i<3;i++){
        printf("| Aluno %d | ", i+1);
        for (int j=0; j<4; j++){
            printf(" %.1f  | ", boletim[i][j]);
        }
        printf("\n");
    }
    return 0;
}