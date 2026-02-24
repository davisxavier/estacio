#include <stdio.h>

int main(){  
    //DECLARAÇÃO DE VARIAVEL
    int idade, matricula; 
    float altura;
    char nome [50];
    //LEITURA DOS DADOS DO USUÁRIO
    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);
    //DEVOLUÇÃO DO PROGRAMA
    printf(" - Nome do aluno: %s \n - matricula: %d \n", nome, matricula);
    printf(" - Idade: %d \n - Altura: %f \n", idade, altura);

    return 0;
}
