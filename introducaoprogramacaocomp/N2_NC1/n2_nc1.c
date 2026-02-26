#include <stdio.h>
 
// Função genérica para entrada de dados
void entradaDados() {
    // código para a função entradaDados
}
 
// Função genérica para cálculo da média
float calcularMedia() {
    // código para a função calcularMedia
}
 
// Função genérica para exibir dados
void exibirMedia() {
    // código para a função exibirMedia
}
 
int main() {
    int media; // Estácio não declarou a media como uma variável problema foi relatado 
 
    entradaDados();
    media = calcularMedia();
    exibirMedia();
 
    return 0;
}

/* EXEMPLO DE PSEUDO CÓDIGO
Início
    Solicitar ao usuário um número
    Receber o número fornecido
    Se o número for divisível por 2 então
        Exibir "O número é par"
    Senão
        Exibir "O número é ímpar"
Fim*/
