#include <iostream>
#include "sculptor.h"
#include "string"
#include "iostream"
#include "fstream"
#include "ostream"
#include "strings.h"
#include <sstream>

void writeON(char *filename){
    std::ifstream fin;
    std::string str;
    std::stringstream ss;

    int Xi,Yi,Zi,Xf,Yf,Zf,rA,rB,rC;
    float r,g,b,a;

    //char buffer[40];

    fin.open(filename, std::fstream::in);

    if(!fin.is_open())
    {
        printf("Er 003 \n");
        exit(1);
    }

    //fin.get(buffer,40);

    ss.clear();
    std::getline(fin,str,' ');
    ss.str(str);
    ss>>str;

    if(str=="dim")
    {
       ss>>Xi;
       ss>>Yi;
       ss>>Zi;

    }
    else
    {
        fin.close();
        std::cout<<"Erro 004 \n";
        exit(1);
    }

     Sculptor creator(Xi,Yi,Zi);
    fin.clear();


   while(std::getline(fin,str,' '))
   {
       ss.clear();
       ss.str(str);
       ss>>str;


       if(str.compare("putvoxel"))
    {
       ss>>Xi;
       ss>>Yi;
       ss>>Zi;
       ss>>r;
       ss>>g;
       ss>>b;
       ss>>a;
       creator.setColor(r,g,b,a);
       creator.putVoxel(Xi,Yi,Zi);
    }

    if(str.compare("cutvoxel"))
    {
        ss>>Xi;
        ss>>Yi;
        ss>>Zi;
        ss>>r;
        ss>>g;
        ss>>b;
        ss>>a;
        creator.setColor(r,g,b,a);
        creator.cutVoxel(Xi,Yi,Zi);
    }
    if(str.compare("putbox"))
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
        creator.setColor(r,g,b,a);
        creator.putBox(Xi,Xf,Yi,Yf,Zi,Zf);

    }

    if(str.compare("cutbox"))
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
        creator.setColor(r,g,b,a);
        creator.cutBox(Xi,Xf,Yi,Yf,Zi,Zf);
    }
    if(str.compare("putsphere"))
    {
        ss>>Xi;
        ss>>Yi;
        ss>>Zi;
        ss>>rA;
        ss>>r;
        ss>>g;
        ss>>b;
        ss>>a;
        creator.setColor(r,g,b,a);
        creator.putSphere(Xi,Yi,Zi,rA);
    }

    if(str.compare("cutsphere"))
    {
        ss>>Xi;
        ss>>Yi;
        ss>>Zi;
        ss>>rA;
        ss>>r;
        ss>>g;
        ss>>b;
        ss>>a;
        creator.setColor(r,g,b,a);
        creator.cutSphere(Xi,Yi,Zi,rA);
    }

    if(str.compare("putellipsoid"))
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
        creator.setColor(r,g,b,a);
        creator.putEllipsoid(Xi,Yi,Zi,rA,rB,rC);
    }

    if(str.compare("cutellipsoid"))
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
        creator.setColor(r,g,b,a);
        creator.putEllipsoid(Xi,Yi,Zi,rA,rB,rC);
    }
    fin.clear();
    }


     fin.close();

     creator.writeOFF("Salvo.off");
}




int main()
{

 writeON("cauan.txt");

    return 0;
}

