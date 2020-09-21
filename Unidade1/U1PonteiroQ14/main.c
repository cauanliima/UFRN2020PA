#include <stdio.h>
#include <stdlib.h>
#include<time.h>

//Funcao que imprime um vetor recebe um ponteiro para vetor e o tamanho n
void mostra(float *V,int n){

    for(int i=0;i<n;i++)
        printf("%f ",*(V+i));

printf("\n");

}


//Funcao compare recebe dois ponteiros void e retorna um inteiro que e a subtracao de a e b
int compare (const void * a, const void * b)
{
  // printf("\n%f ",*(float*)a - *(float*)b);
  return ( *(float*)a - *(float*)b );

}


int main()
{
    //    Reimplemente o programa da questão anterior utilizando a função qsort() do C. Comente o seu
    //    código, explicando o que faz cada uma das linhas.

    //variaveis de tempo
    clock_t t;

    //Criacao do vetor
    float *x;
    int n=10;
    x=malloc(n * sizeof (float));
    for(int i=n-1;i>=0;i--){
    *(x+i)=i+rand()%n;}

    mostra(x,n);

    t = clock();
    qsort(x,n,sizeof (float),compare);
    t = clock() - t;

    mostra(x,n);

    free(x);

    printf("\n -----tempo------ \n O tempo gasto foi de: %.60f seg \n",(float)t/CLOCKS_PER_SEC);
    //printf("%f \n",t);

}





