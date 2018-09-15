#include <stdio.h>
#include <stdlib.h>
int main()
{
    float *p, aux;
    int n, i, j;
    printf("Entre com o numero de elementos: ");
    scanf("%d", &n);
    p = malloc(n*sizeof(float));
    for(i=0; i<n; i++){
        printf("Informe o elemento %d:", i);
        scanf("%f", &p[i]);
    }
    printf("\n vetor sem ordenar: ");
    for(i=0; i<n; i++){
        printf("%.1f, ", p[i]);
    }
    printf("\n");
    //ordenando
    for(j=n-1;j>=1;j--){
        for(i=0; i<j; i++){
            if(p[i]>p[i+1]){
                aux = p[i];
                p[i] = p[i+1];
                p[i+1] = aux;
            }
        }
    }
    printf("vetor ordenado: \n ");
    for(i=0; i<n; i++){
        printf("%.1f, ", p[i]);
    }
    free(p);
    return 0;
}
