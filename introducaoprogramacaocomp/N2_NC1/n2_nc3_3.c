#include <stdio.h>

int main(){
    //declaração de variáveis
    int num1, result;
    num1 = 1;
    
    printf("Antes incremento: %d\n", num1);
    result = num1++; 
    
    printf("Após pós-incremento - número 1: %d - resultado: %d\n", num1, result);
    
    result = ++num1;
    //printf("Após pré-incremento - número 1: %d - resultado: %d\n", num1, result);
    //printf("Antes incremento: %d\n", num1);
    //result = num1++; 
    
    printf("Após pós-incremento - número 1: %d - resultado: %d\n", num1, result);
    
    result = num1--;

    printf("Após pós-decremento - número 1: %d - resultado: %d\n", num1, result); 

    result = --num1;

    printf("Após pré-decremento - número 1: %d - resultado: %d\n", num1, result); 

    num1--;
    result = 0;
    printf("pós decremento: %d\n", num1);

    return 0;
}