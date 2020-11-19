#include <iostream>
#include "sculptor.h"
#include "string"
#include "iostream"
#include "fstream"
#include "ostream"
#include "strings.h"


int main()
{


    int nx,ny,nz,op;
    float a,b,c,d,e,f;
    char nome[25];

    printf("Nome do projeto: ");
    std::cin.get(nome,20);
    strcat(nome,".off");


    printf("Qual as dimensoes do projeto? /n dim X: ");
    std::cin>>nx;
    printf("dim Y: ");
    std::cin>>ny;
    printf("dim Y: ");
    std::cin>>nz;

    Sculptor exec(nx,ny,nz);



    do{
        printf("1 Setar cor \n"
               "2 Desenha ponto \n "
               "3 Apaga um ponto \n "
               "4 Denhenha circ \n "
               "5 Apaga circ \n "
               "6 Denhenha elipse \n "
               "7 Apaga Elipse \n "
               "8 Desenha retangulo \n "
               "9 Apaga retangulo \n "
               "0 para sair \n "
               );

        std::cin>>op;


        switch (op){

        case(1):
            printf("Cor r: ");
            std::cin>>a;
            printf("Cor g: ");
            std::cin>>b;
            printf("Cor b: ");
            std::cin>>c;
            printf("Transparencia: ");
            std::cin>>d;
            exec.setColor(a,b,c,d);
            break;

        case(2):
            printf("Cord x: ");
            std::cin>>a;
            printf("Cord y: ");
            std::cin>>b;
            printf("Cord z: ");
            std::cin>>c;
            exec.putVoxel(a,b,c);
            break;

        case(3):
            printf("Cord x: ");
            std::cin>>a;
            printf("Cord y: ");
            std::cin>>b;
            printf("Cord z: ");
            std::cin>>c;
            exec.cutVoxel(a,b,c);
            break;

        case(4):
            printf("X do centro: ");
            std::cin>>a;
            printf("Y do centro: ");
            std::cin>>b;
            printf("Z do centro: ");
            std::cin>>c;
            printf("Raio: ");
            std::cin>>d;
            exec.putSphere(a,b,c,d);
            break;

        case(5):
            printf("X do centro: ");
            std::cin>>a;
            printf("Y do centro: ");
            std::cin>>b;
            printf("Z do centro: ");
            std::cin>>c;
            printf("Raio: ");
            std::cin>>d;
            exec.cutSphere(a,b,c,d);
            break;

        case(6):
            printf("X do centro: ");
            std::cin>>a;
            printf("Y do centro: ");
            std::cin>>b;
            printf("Z do centro: ");
            std::cin>>c;
            printf("A: ");
            std::cin>>d;
            printf("B: ");
            std::cin>>e;
            printf("C: ");
            std::cin>>f;
            exec.putEllipsoid(a,b,c,d,e,f);
            break;

        case(7):
            printf("X do centro: ");
            std::cin>>a;
            printf("Y do centro: ");
            std::cin>>b;
            printf("Z do centro: ");
            std::cin>>c;
            printf("A: ");
            std::cin>>d;
            printf("B: ");
            std::cin>>e;
            printf("C: ");
            std::cin>>f;
            exec.cutEllipsoid(a,b,c,d,e,f);
            break;


        case(8):
            printf("Xi: ");
            std::cin>>a;
            printf("Xf: ");
            std::cin>>b;
            printf("Yi: ");
            std::cin>>c;
            printf("Yf : ");
            std::cin>>d;
            printf("Zi : ");
            std::cin>>e;
            printf("Zf : ");
            std::cin>>f;
            exec.putBox(a,b,c,d,e,f);
            break;

        case(9):
            printf("Xi: ");
            std::cin>>a;
            printf("Xf: ");
            std::cin>>b;
            printf("Yi: ");
            std::cin>>c;
            printf("Yf : ");
            std::cin>>d;
            printf("Zi : ");
            std::cin>>e;
            printf("Zf : ");
            std::cin>>f;
            exec.cutBox(a,b,c,d,e,f);
            break;

        case(0):
            exec.writeOFF(nome);
            break;

        default:
            printf(" Opcao invalida");

        }


    }while(op!=0);


    return 0;
}

