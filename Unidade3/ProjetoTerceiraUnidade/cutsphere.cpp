#include "cutsphere.h"
#include "putsphere.h"

inline float pow2(int x)
{
    return x*x;
}

CutSphere::CutSphere(int xcenter, int ycenter, int zcenter, int radius)
{
    this->xcenter=xcenter;
    this->ycenter=zcenter;
    this->zcenter=zcenter;
    this->radius=radius;

}

void CutSphere::draw(Sculptor &t)
{
    if(radius>0)
    for(int i=xcenter-radius; i<xcenter+radius;i++)
        for(int j=ycenter-radius;j<ycenter+radius;j++)
            for(int k=zcenter-radius;k<zcenter+radius;k++)
               if((pow2(xcenter-i)+pow2(ycenter-j)+pow2(zcenter-k))<pow2(radius))
                    t.cutVoxel(i,j,k);
}
