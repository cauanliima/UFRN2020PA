#include "sculptor.h"
#include <stdio.h>
#include <stdlib.h>
#include <ostream>
#include <fstream>
#include <cstdlib> //exit()
#include <iostream>
#include <iomanip>
#include <string>
#include <istream>
#include <sstream>




//using namespace std;

inline float pow2(int x)
{
    return x*x;
}


Sculptor::Sculptor(int _nx, int _ny, int _nz)
{

    nx=_nx;ny=_ny;nz=_nz;

    if(nz<0||ny<0||nx<0)
    {
        printf("Er 001 \n");
        exit(1);

    }

    v=new Voxel**[nx];
    for(int i=0;i<nx;i++)
    {
        v[i]=new Voxel*[ny];
        for(int j=0;j<ny;j++)
        {
            v[i][j]=new Voxel[nz];

            // inicializa todos os voxels como inativos
            for(int k=0;k<nz;k++)
                 v[i][j][k].isOn=false;
        }
    }

}

Sculptor::~Sculptor()
{

    for(int i=0;i<nx;i++)
    {for(int j=0;j<ny;j++)
        {
            delete [] v[i][j];

        }
        delete [] v[i];
    }

    delete [] v;

    
}

void  Sculptor::setColor(float r_, float g_, float b_, float alpha)
{
    r=r_;
    g=g_;
    b=b_;
    a=alpha;
}

void Sculptor::putVoxel(int x, int y, int z)
{
    if(x>0&&x<nx&&y>0&&y<ny&&z>0&&z<nz)
    {
    v[x][y][z].a=a;
    v[x][y][z].r=r;
    v[x][y][z].g=g;
    v[x][y][z].b=b;
    v[x][y][z].isOn=true;
    }

}

void Sculptor::cutVoxel(int x, int y, int z)
{
    if(x>0&&x<nx&&y>0&&y<ny&&z>0&&z<nz)
    v[x][y][z].isOn=false;
}


void Sculptor::writeOFF(char* filename){

    std::ofstream fout;

    fout.open(filename);

    if(!fout.is_open())
    {
        printf("Er 002 \n");
        exit(1);
    }

    int cont=0;
    for(int i=0;i<nx;i++)
        for(int j=0;j<ny;j++)
            for(int k=0;k<nz;k++)
            {
                if (v[i][j][k].isOn)
                    cont++;
            }

    fout<<"OFF\n";
    fout<<8*cont<<' '<<6*cont<<" 0 \n";

    for(int i=0;i<nx;i++)
        for(int j=0;j<ny;j++)
            for(int k=0;k<nz;k++)
            {
                //p(0,0,0)

                if(v[i][j][k].isOn)
                {

                //-0.5 0.5 -0.5
                fout<<(i-0.5)<<" "<<(j+0.5)<<" "<<(k-0.5)<<' '<<std::endl;

                // -0.5 -0.5 -0.5
                fout<<(i-0.5)<<" "<<(j-0.5)<<" "<<(k-0.5)<<' '<<std::endl;

                //  0.5 -0.5 -0.5
                fout<<(i+0.5)<<" "<<(j-0.5)<<" "<<(k-0.5)<<' '<<std::endl;

                //  0.5 0.5 -0.5
                fout<<(i+0.5)<<" "<<(j+0.5)<<" "<<(k-0.5)<<' '<<std::endl;

                //  -0.5 0.5 0.5
                fout<<(i-0.5)<<" "<<(j+0.5)<<" "<<(k+0.5)<<' '<<std::endl;

                //  -0.5 -0.5 0.5
                fout<<(i-0.5)<<" "<<(j-0.5)<<" "<<(k+0.5)<<' '<<std::endl;

                //  0.5 -0.5 0.5
                fout<<(i+0.5)<<" "<<(j-0.5)<<" "<<(k+0.5)<<' '<<std::endl;

                //  0.5 0.5 0.5
                fout<<(i+0.5)<<" "<<(j+0.5)<<" "<<(k+0.5)<<' '<<std::endl;

                }

            }



    int adc=0;

    for(int i=0;i<nx;i++)
        for(int j=0;j<ny;j++)
            for(int k=0;k<nz;k++)
            {
                    if(v[i][j][k].isOn){


                    std::fixed(fout);

                    // 4 0 3 2 1 1 1 1 1

                   fout<<"4 "<<0+adc*8<<" "<<3+adc*8<<" "<<2+adc*8<<" "<<1+adc*8<<" "
                       <<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<" "<<std::endl;

                    //4 4 5 6 7 1 1 1 1
                    fout<<"4 "<<4+adc*8<<" "<<5+adc*8<<" "<<6+adc*8<<" "<<7+adc*8<<" "
                       <<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<" "<<std::endl;

                    //4 0 1 5 4 1 1 1 1
                    fout<<"4 "<<0+adc*8<<" "<<1+adc*8<<" "<<5+adc*8<<" "<<4+adc*8<<" "
                       <<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<" "<<std::endl;

                    //4 0 4 7 3 1 1 1 1
                    fout<<"4 "<<0+adc*8<<" "<<4+adc*8<<" "<<7+adc*8<<" "<<3+adc*8<<" "
                       <<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<" "<<std::endl;

                    //4 3 7 6 2 1 1 1 1
                    fout<<"4 "<<3+adc*8<<" "<<7+adc*8<<" "<<6+adc*8<<" "<<2+adc*8<<" "
                       <<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<" "<<std::endl;

                    //4 1 2 6 5 1 1 1 1
                    fout<<"4 "<<1+adc*8<<" "<<2+adc*8<<" "<<6+adc*8<<" "<<5+adc*8<<" "
                       <<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<" "<<std::endl;

                    adc++;

                }

            }



    fout.close();
}
