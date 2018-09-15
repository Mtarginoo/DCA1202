#include <stdio.h>
#include <stdlib.h>
/*
 //Aqui definimos a função de comparação, "ensinando" a função como realizar
  a comparação entre esse tipo de dados, uma vez que se trata de um ornamento genérico
 */
int comparaFloat(const void * a, const void * b){
    if(*(float*)a == *(float*)b) //quando o contéudo do ponteiro de duas variáveis forem iguais, retorna zero.
        return 0;
    else if (*(float*)a <*(float*)b) //quando o contúdo do ponteiro da variável 'a' for menor que 'b', retorna -1.
        return -1;
    else
        return 1; //Quando o conteúdo do ponteiro da variável 'a' for menor que 'b', retorna 1.
}
int main()
{
    float *p; //'p' é o ponteiro que armazena o endereço do bloco de memória rezervado para os valores.
    int n, i; //'n' é a variável que armazena a quantidade de elementos e 'i' é uma variável para ser utilizada como controle para os laços de repetição.
    printf("Entre com o numero de elementos: "); //Solicitação de 'n' ao usuário.
    scanf("%d", &n); //Leitura do valor passado pelo usuário.
    p = malloc(n*sizeof(float)); // alocação dinâmica de memória com a função malloc.
    for(i=0; i<n; i++){ //Leitura de cada um dos elementos passados pelo usuário.
        printf("Informe o elemento %d:", i);
        scanf("%f", &p[i]);
    }
    printf("\n vetor sem ordenar: ");
    for(i=0; i<n; i++){ //Imprimindo vetor desordenado
        printf("%.1f, ", p[i]);
    }
    /*
     O ordenamento é feito com a função qsort() do C.
     Esta função recebe como parâmetro o vetor que desejamos ordenar, a quantidade de elementos,
     o tamanho em bytes de cada um dos elementos, e o ponteiro para a função de comparação.
     */
    qsort(p, n, sizeof(float), comparaFloat); //Invocando a função qsort().
    printf("\nImprimindo ordenado: ");
    for(i=0; i<n; i++){ //imprimindo os elementos ordenados.
        printf("%.1f, ", p[i]);
    }
    printf("/n");
    free(p);
    return 0;
}
