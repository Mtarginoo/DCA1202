#include <stdio.h>
#include <stdlib.h>
void somaVetores(int *a, int *b, int *s, int n);
int main()
{
    int *a, *b, *r, n, i;
    printf("Informe a quantidade de elementos a serem somados: ");
    scanf("%d", &n);
    a = malloc(n*sizeof(int));
    b = malloc(n*sizeof(int));
    r = malloc(n*sizeof(int));
    printf("\nInforme os valores do vetor 1 \n");
    for(i=0; i<n; i++){
        printf("Informe o valor %d: ", i);
        scanf("%d", &a[i]);
    }
    printf("\nInforme os valores do vetor 2 \n");
    for(i=0; i<n; i++){
        printf("Informe o valor %d: ", i);
        scanf("%d", &b[i]);
    }
    somaVetores(a, b, r, n);
    printf("\nOs valores somados: ");
    for(i=0; i<n; i++){
        printf("%d, ", r[i]);
    }
    free(a);
    free(b);
    free(r);
    return 0;
}
void somaVetores(int* a, int* b, int* s, int n){
    int i;
    for(i=0; i<n; i++){
        s[i]=a[i]+b[i];
    }
}



