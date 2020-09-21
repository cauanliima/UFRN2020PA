#include <stdio.h>


    int main(void){
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco");
    for(i = 0 ; i <= 4 ; i++){

    //Posicao
    printf("\ni = %db  ",i);

    //valor
    printf("vet[%d] = %.1f  ",i, vet[i]);

    //valor
    printf("*(f + %d) = %.1f  ",i, *(f+i));

    //entereco de vet[i}
    printf("&vet[%d] = %X  ",i, &vet[i]);

    //endereco de vet[i}
    printf("(f + %d) = %X  ",i, f+i);
    }
}
