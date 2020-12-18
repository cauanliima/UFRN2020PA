#include "interpretado.h"
#include "figurageometrica.h"
#include "vector"
#include "iostream"
#include "string"
#include "sstream"
#include "fstream"
#include "PutVoxel.h"
#include "cutvoxel.h"
#include "putbox.h"
#include "cutbox.h"
#include "putsphere.h"
#include "cutsphere.h"
#include "putellipsoid.h"
#include "cutellipsoid.h"


Interpretado::Interpretado()
{

}

std::vector<FiguraGeometrica *> Interpretado::parse(char *filename)
{
    std::ifstream fin;
    std::string str;
    std::stringstream ss;

    std::vector<FiguraGeometrica*> figs;

    //char buffer[40];

    fin.open(filename, std::fstream::in);

    if(!fin.is_open())
    {
        printf("Er 003 Arq n aberto\n");
        exit(1);
    }

    //fin.get(buffer,40);

    ss.clear();
    std::getline(fin,str);
    ss.str(str);
    ss>>str;

    if(str=="dim")
    {
       ss>>dimX;
       ss>>dimY;
       ss>>dimZ;

    }
    else
    {
        fin.close();
        std::cout<<"Erro 004 \n";
        exit(1);
    }


   while(std::getline(fin,str))
   {

       ss.clear();
       ss.str(str);
       ss>>str;

       if(str.compare("putvoxel")==0)
    {
       ss>>Xi;
       ss>>Yi;
       ss>>Zi;
       ss>>r;
       ss>>g;
       ss>>b;
       ss>>a;
       figs.push_back(new PutVoxel(Xi,Yi,Zi,r,g,b,a));
    }

    if(str.compare("cutvoxel")==0)
    {
        ss>>Xi;
        ss>>Yi;
        ss>>Zi;
        figs.push_back(new CutVoxel(Xi,Yi,Zi));
    }
    if(str.compare("putbox")==0)
    {

        ss>>Xi;
        ss>>Xf;
        ss>>Yi;
        ss>>Yf;
        ss>>Zi;
        ss>>Zf;
        ss>>r;
        ss>>g;
        ss>>b;
        ss>>a;

        figs.push_back(new PutBox(Xi,Xf,Yi,Yf,Zi,Zf,r,g,b,a));

    }


    if(str.compare("cutbox")==0)
    {
        ss>>Xi;
        ss>>Xf;
        ss>>Yi;
        ss>>Yf;
        ss>>Zi;
        ss>>Zf;

        figs.push_back(new CutBox(Xi,Xf,Yi,Yf,Zi,Zf));
    }
    if(str.compare("putsphere")==0)
    {
        ss>>Xi;
        ss>>Yi;
        ss>>Zi;
        ss>>rA;
        ss>>r;
        ss>>g;
        ss>>b;
        ss>>a;
       figs.push_back(new PutSphere(Xi,Yi,Zi,rA,r,g,b,a));
    }

    if(str.compare("cutsphere")==0)
    {
        ss>>Xi;
        ss>>Yi;
        ss>>Zi;
        ss>>rA;
        figs.push_back(new CutSphere(Xi,Yi,Zi,rA));
    }

    if(str.compare("putellipsoid")==0)
    {
        ss>>Xi;
        ss>>Yi;
        ss>>Zi;
        ss>>rA;
        ss>>rB;
        ss>>rC;
        ss>>r;
        ss>>g;
        ss>>b;
        ss>>a;
        figs.push_back(new PutEllipsoid(Xi,Yi,Zi,rA,rB,rC,r,g,b,a));
    }

    if(str.compare("cutellipsoid")==0)
    {
        ss>>Xi;
        ss>>Yi;
        ss>>Zi;
        ss>>rA;
        ss>>rB;
        ss>>rC;
        figs.push_back(new CutEllipsoid(Xi,Yi,Zi,rA,rB,rC));
    }


   }


     fin.close();

     return  figs;
}
