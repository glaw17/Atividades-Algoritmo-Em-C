//Fatorial
int fatorial(int num){
    if (num == 0){
        return 1;
    }
    return num*fatorial(num-1);
}

//Fibonacci
int fibonnaci(int num){
    if(num==0){
        return 0;
    }
    if(num==1){
        return 1;
    }
    else{
        return fibonacci(num-1) + fibonacci(num-2);
    }
}

//MÉDIA
float media(float nota1, float nota2){
    return (nota1 + nota2)/2.0;
}


//POTENCIAR
int potenciar(int base, int expoente){
    int resultado = 1;
    for (int i=0; i<expoente; i++){
        resultado *= base;
    }
    return resultado;
}

//PAR IMPAR
int ehpar(int numero){
    if (numero % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

//POSITIVO NEGATIVO 
int ehpositivo(int numero){
    if (numero > 0){
        return 1;
    }
    else{
        return 0;
    }
}