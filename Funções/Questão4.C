#include <stdio.h>
float celsiusParaFahrenheit(float celsius){
    return (9 * celsius)/5 + 32;
}

int main(){
    float celsius;
    printf("Digite a Temperatura em Celsius para Converter: ");
    scanf("%f", &celsius);
    
    printf("\n%.2f Celsius em Fahrenheit é: %.2f", celsius, celsiusParaFahrenheit(celsius));

    return 0;
}