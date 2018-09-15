#include <stdio.h>
#include <stdlib.h>

int comparafloat(float a, float b) { // definição da função comparafloat, que será chamada pela função minhaqsort através do endereço de memória
    return (a - b);
}

void minhaqsort(float *x, int n, int (*funcao)(float, float)) { // função minhaqsort que tem como parâmetros um ponteiro para o vetor a ser ordenado, o tamanho do vetor e um ponteiro para a função comparafloat.
    int i, j;
    float aux;
    for (i = 0; i < n - 1; i++) { // a função compara todos os elementos
        for (j = i + 1; j < n; j++) {
            if(((funcao)(x[i], x[j])) > 0) { // caso encontre elementos desordenados, a função realiza a troca.
                aux = x[j];
                x[j] = x[i];
                x[i] = aux;
            }
        }
    }
}

int main()
{
    int i, n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    float *x;
    int (*funcao)(float, float); //declaração do ponteiro para função
    funcao = &comparafloat; // inicialização do ponteiro para função
    x = (float*)malloc(n * sizeof(float)); // alocação de memória para um vetor com n elementos. n definido pelo usuário.
    if (x == 0) { // verifica se a alocação de memória foi feita com sucesso
        printf("Houve um erro na alocacao de memoria!\n");
        exit(0);
    }
    printf("Digite os valores:\n");
    for (i = 0; i < n; i++) { // aqui o usuário digita os valores a serem ordenados. um de cada vez.
        scanf("%f", &x[i]);
    }
    printf("Vetor antes de ser ordenado:\n");
    for (i = 0; i < n; i++) { // mostra o vetor antes de ser ordenado
        printf("%.1f ", x[i]);
    }
    minhaqsort(x, n, funcao); //chamada da função minhaqsort
    printf("\nVetor depois de ser ordenado:\n");
    for (i = 0; i < n; i++) { //mostra vetor depois de ser ordenado
        printf("%.1f ", x[i]);
    }
    printf("\n");
    free(x); //libera memória alocada
    return 0; //fim.
}
