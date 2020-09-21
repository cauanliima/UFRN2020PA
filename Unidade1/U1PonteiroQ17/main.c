#include <stdio.h>
#include <stdlib.h>


void somaVetor(const int *A, const int *B,int*C,const int n){
    for(int i=0;i<n;i++)
        *(C+i)=*(A+i) + *(B+i);
}

void mostra(int *V,int n){

    for(int i=0;i<n;i++)
        printf(" %d:%d ,",i,*(V+i));

printf("\n");

}


int main()
{
//    17. Escreva uma função em c que escreva em um vetor a soma dos elementos correspondentes de
//    outros dois vetores (os tamanhos dos vetores devem ser fornecidos pelo usuário). Por exemplo,
//    se o primeiro vetor contiver os elementos 1, 3, 0 e -2, e o segundo vetor contiver os elementos 3,
//    5, -3 e 1, o vetor de soma terá valores resultantes iguais a 4, 8, -3 e -1. A função deve receber 4
//    argumentos: os nomes dos três vetores e o número de elementos presentes em cada vetor.

    int *A, *B, *C,n=10;
    A=malloc(n*sizeof (int));
    B=malloc(n*sizeof (int));
    C=malloc(n*sizeof (int));

    for(int i=0;i<n;i++){
        *(A+i)=rand()%10;
        *(B+i)=rand()%10;
    }

    somaVetor(A,B,C,n);

    mostra(A,n);
    mostra(B,n);
    mostra(C,n);

    free(A);
    free(B);
    free(C);




}
