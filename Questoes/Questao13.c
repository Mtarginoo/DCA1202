/*Um ponteiro para função, como o nome sugere, é um ponteiro que aponta para o endereço de memória de uma função. Um ponteiro pra função é declarado da seguinte forma: [Tipo da variável que a função retorna] (*nome do ponteiro) (Lista com os tipos de dados de entrada da função).

Exemplo:*/ 

#include <stdio.h>

void soma(int a, int b); //protótipo da função soma

int main() {
    int a, b;
    a = 2;
    b = 40;
    void (*funcsoma)(int, int); //declaração da variável do tipo inteiro para função
    funcsoma = &soma; //inicialização da variável do tipo ponteiro para função
    (*funcsoma)(a, b); // evocação da função soma através do ponteiro funcsoma
    return 0;
}

void soma(int a, int b) { //definição da função soma
    printf("%d + %d = %d\n", a, b, a + b);
    return;
}
