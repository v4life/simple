//
// Created by Veer Shresti on 4/2/20.
//

#include <iostream>


using namespace std;

int main()
{
    cout<<"This is an example of a time table.\n";

    for(int i = 1; i < 11; i++)
    {

        for(int j = 1; j<11; j++)
        {
            cout<<i<<" * "<<j<<" = "<<i * j<<"\n\n";
        }
    }
    return 0;
}