#include <iostream>
#include "sculptor.h"
#include "string"
#include "iostream"
#include "fstream"
#include "ostream"


int main()
{

    Sculptor Test(3,1,1);
    Test.setColor(0,0,0,1);
    Test.putVoxel(0,0,0);
    Test.setColor(1,1,1,1);
    Test.putVoxel(2,0,0);
    Test.writeOFF("Test.off");


    Sculptor OneCubo(1,1,1);
    OneCubo.setColor(1.0,1.0,1.0,1);
    OneCubo.putVoxel(0,0,0);

    OneCubo.writeOFF("OneCubo.off");

    printf("Eba \n");


    return 0;
}

