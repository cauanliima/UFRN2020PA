#include "sculptor.h"
#include "malloc.h"
#include <stdio.h>
#include <stdlib.h>


float pow2(int x)
{

    return float(x*x);
}

Sculptor::Sculptor(int _nx, int _ny, int _nz)
{
    nx=_nx;ny=_ny;nz=_nz;

//    v = (Voxel***)malloc(nx*sizeof(Voxel***));
//    for(int i=1;i<ny;i++)
//    {
//        *(v+i)=(Voxel**)(malloc((ny*nz)*sizeof(Voxel**)));
//        for(int j=1;j<nz;j++)
//            *(*(v+i)+j)=(Voxel*)(malloc(nz*sizeof(Voxel*)));
//    }


    v = (Voxel***)malloc((nx+ny+nz)*sizeof(Voxel***));
    for(int i=1;i<nx;i++)
    {   v[i]=(v[i-1]+ny*nz);
        for(int j=1;j<ny;j++)
            v[i-1][j]=v[i-1][j-1]+nz;
    }

}

Sculptor::~Sculptor()
{
//    for(int i=nx;i>=0;i--)
//        for(int j=ny;j>=0;j--)
//            free(v[i][j]);

    free(v);
    
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
    v[x][y][z].r=r;
    v[x][y][z].g=g;
    v[x][y][z].b=b;
    v[x][y][z].isOn=true;
    v[x][y][z].a=a;
}

void Sculptor::cutVoxel(int x, int y, int z)
{
    v[x][y][z].isOn=false;
}

void Sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1)
{
    for(int i=x0;i<x1;i++)
        for(int j=y0;j<y1;j++)
            for(int k=z0;k<z1;k++)
                putVoxel(i,j,k);   
}

void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1)
{
    for(int i=x0;i<x1;i++)
        for(int j=y0;j<y1;j++)
            for(int k=z0;k<z1;k++)
                cutVoxel(i,j,k);  
}

void Sculptor::putSphere(int xcenter, int ycenter, int zcenter, int radius){


    for(int i=-radius; i<=radius;i++)
        for(int j=-radius;j<=radius;j++)
            for(int k=-radius;k<=radius;k++)
               if((pow2(xcenter-i)+pow2(ycenter-j)+pow2(zcenter-k))<pow2(radius))
                    putVoxel(xcenter-i,ycenter-j,zcenter-k);

}
void Sculptor::cutSphere(int xcenter, int ycenter, int zcenter, int radius){

    for(int i=-radius; i<=radius;i++)
        for(int j=-radius;j<=radius;j++)
            for(int k=-radius;k<=radius;k++)
               if((pow2(xcenter-i)+pow2(ycenter-j)+pow2(zcenter-k))<pow2(radius))
                    cutVoxel(xcenter-i,ycenter-j,zcenter-k);


}
void Sculptor::putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz){
    for(int i=-rx; i<=rx;i++)
        for(int j=-ry;j<=ry;j++)
            for(int k=-rz;k<=rz;k++)
                if((pow2(xcenter-i)/pow2(rx)+pow2(ycenter-j)/pow2(ry)+pow2(zcenter-k)/pow2(rz))<1)
                    putVoxel(xcenter-i,ycenter-j,zcenter-k);
}
void Sculptor::cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz){
    for(int i=-rx; i<=rx;i++)
        for(int j=-ry;j<=ry;j++)
            for(int k=-rz;k<=rz;k++)
                if((pow2(xcenter-i)/pow2(rx)+pow2(ycenter-j)/pow2(ry)+pow2(zcenter-k)/pow2(rz))<1)
                    cutVoxel(xcenter-i,ycenter-j,zcenter-k);

}
void writeOFF(char* filename){


}
