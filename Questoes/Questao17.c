#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comparaFloat(float  a, float  b){
    if (a == b)
        return 0;
    else if (a < b)
        return -1;
    else
        return 1;
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
    srand(time(NULL));
    float *p, *p2;
    int n, i;

    printf("Entre com o numero de elementos: ");
    scanf("%d", &n);

    printf("\n");


    clock_t Ticks[2];

    //Referente a ordenação com qsort().

    p = malloc(n*sizeof(float));

    if(p==0){
        printf("A alocacao falhou!\n");
        exit(0);
    }

    for(i=0; i<n; i++){
        p[i]= (float)(rand()%100)/5.0;
    }


   Ticks[0] = clock();

    //Fazendo ordenação por qsort().
    qsort(p, n, sizeof(float), comparaFloat);

    Ticks[1] = clock();
    double tempo1 = (Ticks[1]-Ticks[0])*1000.0/CLOCKS_PER_SEC;

    printf("\n");

    //Referente a ordenação com o algoritmo próprio

    p2 = malloc(n*sizeof(float));

    for(i=0; i<n; i++){
        p2[i] = ((float)(rand()%100))/5.0;
    }
    //Fazendo ordenação por minhaqsort

    Ticks[0] = clock();

    minhaqsort(p2, n, comparaFloat);

    Ticks[1] = clock();
    double tempo2 = (Ticks[1]-Ticks[0])*1000.0/CLOCKS_PER_SEC;



    printf("\nO tempo gasto na ordenacao pelo qsort foi: %g ms \n", tempo1);
    printf("O tempo gasto na ordenacao pela minhaqsort foi: %g ms \n.", tempo2);


    return 0;
}
