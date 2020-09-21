#include <stdio.h>


//8. O que fazem os seguintes programas em C?

//Mostra o valor de cada elemento do vetor
//int main(){
//int vet[] = {4,9,13};
//int i;
//for(i=0;i<3;i++){
//printf("%d ",*(vet+i));
//}
//}

//Mostra o endereco de cada elemento do vetor
        int main(){
        int vet[] = {4,9,13};
        int i;
        for(i=0;i<3;i++){
    printf("%X ",vet+i);
}
}

