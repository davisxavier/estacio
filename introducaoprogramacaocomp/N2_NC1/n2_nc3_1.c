#include <stdio.h>

int main(){
    //declaração de variáveis
    int num1, num2; 
    int soma, subtracao, multi, div;

    printf("entre com o número 1: \n");
    scanf("%d", &num1);
    printf("entre com o número 2: \n");
    scanf("%d", &num2);

    //operação de soma
    soma = num1 + num2;
    
    //operação de subtração
    subtracao = num1 - num2;
    
    //operação de multiplicação
    multi = num1 * num2;
    
    //operação de divisão
    div = num1 / num2;

    printf ("a soma é: %d\n", soma);
    printf ("a subtração é: %d\n", subtracao);
    printf ("a multiplicação é: %d\n", multi);
    printf ("a divisão é: %d\n", div);

    return 0;


}