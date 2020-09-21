#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void troca(float *a,float *b){
    float aux;
    aux=*a;
    *a=*b;
    *b=aux;
}

void myQsort(float* Vetor, int n, int(*compare)(const void*,const void*)){
    int qtroca,cont=0;

    do{
        cont++;
        qtroca=0;
        for(int i=0;i<(n-1);i++)
        {
            if(compare(Vetor+i,Vetor+i+1))
            {
             troca(Vetor+i,Vetor+i+1);
             qtroca++;
            }

        }
    }while(qtroca!=0&&cont<=(n-1));
}

void mostra(float *V,int n){

    for(int i=0;i<n;i++)
        printf("%f ",*(V+i));

printf("\n");

}

int subAeB(const void * a, const void * b)
{
  // printf("\n%f ",*(float*)a - *(float*)b);
  return ( *(float*)a - *(float*)b );

}

int main()
{
//    Implemente em linguagem C uma função em um programa de computador que leia n valores do
//    tipo float e os apresente em ordem crescente. Utilize alocação dinâmica de memória para
//    realizar a tarefa.

    //variaveis de tempo
    clock_t t;

    float *x;
    int n=10;
    x=malloc(n * sizeof (float));
    for(int i=n-1;i>=0;i--){
    *(x+i)=i+rand()%n;}

    mostra(x,n);

    t=clock();
    myQsort(x,n,subAeB);
    t=clock()-t;

    mostra(x,n);

    free(x);

    printf("\n -----tempo------ \n O tempo gasto foi de: %f.10 seg \n",(float)t/CLOCKS_PER_SEC);
}
