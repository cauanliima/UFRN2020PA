
//    Procure na internet mecanismos que possibilitem medir tempos de execução de rotinas
//    computacionais. Geralmente, estas medidas são realizadas com o auxílio de funções em C que
//    lêem a hora no sistema (sistemas Unix e Windows geralmente usam funções diferentes).
//    Utilizando os conhecimentos que você obteve com sua pesquisa, meça os tempos de execução
//    das implementações que você criou para os dois problemas de ordenação anteriores e compare
//    os resultados obtidos

//A minha funcao (Q15) eh muito mais lenta comparada a funcao C qSort() (Q14)
//        Tempo para ordenar um vetor de 10000 elementos
//        Minha funcao:1.863 segundos
//        Qsort: 0,003 segundos
//                           eh de chorar

#include <stdio.h>
#include <stdlib.h>
#include<time.h>

//Funcao que imprime um vetor recebe um ponteiro para vetor e o tamanho n

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

void troca(float *a,float *b){
    float aux;
    aux=*a;
    *a=*b;
    *b=aux;
}

int main()
{
    //    Reimplemente o programa da questão anterior utilizando a função qsort() do C. Comente o seu
    //    código, explicando o que faz cada uma das linhas.

    //variaveis de tempo
    clock_t t;

    //Criacao do vetor
    float *x;
    int n=10000;
    x=malloc(n * sizeof (float));

    for(int i=n-1;i>=0;i--){
    *(x+i)=i+rand()%n;}




    t = clock();
    qsort(x,n,sizeof (float),subAeB);
    t = clock() - t;
    printf("\n -----tempo------ qsort \n O tempo gasto foi de: %.10f seg \n",(float)t/CLOCKS_PER_SEC);

    ///Novos valores no vetor
    for(int i=n-1;i>=0;i--){
    *(x+i)=i+rand()%n;}

    t=clock();
    myQsort(x,n,subAeB);
    t=clock()-t;
    printf("\n -----tempo------ myQsort \n O tempo gasto foi de: %.10f seg \n",(float)t/CLOCKS_PER_SEC);



    free(x);


    //printf("%f \n",t);

}







