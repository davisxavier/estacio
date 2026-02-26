#include <stdio.h>

int main(){
    //declaração de variáveis
    int num1, num2, result;
    
    //atribuição de incremento 
    
    //result = 10
    result=10;
    printf("Resultado: %d\n", result);
    
    //result = result + 20
    result += 20;
    printf("Resultado: %d\n", result);
    
    //result = result - num1
    num1 = 2;
    result -= num1;
    printf("Resultado: %d\n", result);

    //result = result * 5
    result *= 5;
    printf("Resultado: %d\n", result);

    //result = result / 20
    result /= 2;
    printf("Resultado: %d\n", result);
    return 0;
}