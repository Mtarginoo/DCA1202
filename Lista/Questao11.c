//Para testar as suposições o seguinte código foi implementado:

#include <stdio.h>

int main()
{
    int i;
    char vet[4];
    int vet1[4];
    float vet2[4];
    double vet3[4];
    for (i = 0; i < 4; i++) {
        printf("%X\n", vet + i);
    }
    printf("\n");
    for (i = 0; i < 4; i++) {
        printf("%X\n", vet1 + i);
    }
    printf("\n");
    for (i = 0; i < 4; i++) {
        printf("%X\n", vet2 + i);
    }
    printf("\n");
    for (i = 0; i < 4; i++) {
        printf("%X\n", vet3 + i);
    }
    return 0;
}

/*As respostas oferecidas pelo programa são:

    28FEA8
    28FEA9
    28FEAA
    28FEAB

    28FE98
    28FE9C
    28FEA0
    28FEA4

    28FE88
    28FE8C
    28FE90
    28FE94

    28FE68
    28FE70
    28FE78
    28FE80

Observações: O programa obviamente apresentou valores diferentes dos respondidos na questão anterior, entretanto, os valores eram esperados devido à máquina na qual foi realizada a compilação do código, alocar espaços de memória diferentes do descrito na questão 10.  Por se tratar de um sistema de 64 bits, o tamanho das variáveis também eram diferentes do descrito na questão, com as variáveis possuindo o seguinte tamanho: Char: 1byte; int: 4 bytes; float 4 bytes e double 8 bytes. Mas ainda assim, a lógica dos incrementos das variáveis foi respeitada.*/


