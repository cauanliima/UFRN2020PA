#include <stdio.h>
#include <stdlib.h>

void troca(float *a,float *b){
    float aux;
    aux=*a;
    *a=*b;
    *b=aux;
}
void crescente(float *V,int n){
    int qtroca,cont=0;

    do{
        cont++;
        qtroca=0;
        for(int i=0;i<(n-1);i++)
        {
            if(*(V+i) <= *(V+i+1))
            {
                troca((V+i),(V+i+1));
                qtroca++;
            }
        }
    }while(qtroca==0||cont!=(n-1));
}

void mostra(float *V,int n){

    for(int i=0;i<n;i++)
        printf("%f ",*(V+i));

printf("\n");

}


int main()
{
//    Implemente em linguagem C uma função em um programa de computador que leia n valores do
//    tipo float e os apresente em ordem crescente. Utilize alocação dinâmica de memória para
//    realizar a tarefa.


    float *x;
    int n=8;
    x=malloc(n * sizeof (float));
    for(int i=n-1;i>=0;i--){
    *(x+i)=i+rand()%10;}

    mostra(x,n);
    crescente(x,n);
    mostra(x,n);

    free(x);
}
