//
// Created by Veer Shresti on 4/9/20.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void tables()
{
    for (int i = 1; i <= 10; i++)
    {
        ofstream TableFile("output" + to_string(i) + ".txt");

        if (TableFile.is_open())
        {
            for (int j = 1; j <= 10; j++)
            {
                TableFile << i << " * " << j << " = " << i * j << "\n";
            }
            TableFile.close();
        } else cout << "Unable to open file for writing";
    }
}

int main()
{
    tables();
}

