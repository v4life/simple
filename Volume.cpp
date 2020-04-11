//
// Created by Veer Shresti on 4/4/20.
//
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float cubeSide = 6.9;
    float sphereRadius = -9.76;
    float coneHeight = 29;
    float coneRadius = 19.6745;

    float volCube = 0;
    float volCone = 0;
    float volSphere = 0;

    volCube = pow(cubeSide,3);

    volSphere = (4.0 / 3.0) * M_PI * (sphereRadius,3);

    volCone = M_PI*pow(coneRadius,2) * (coneHeight/3);

    cout<<"The volume of a cube is "<<volCube<<"\n";
    cout<<"The volume of a sphere is "<<volSphere<<"\n";
    cout<<"The volume of a cone is "<<volCone<<"\n";
    return 0;
}

