//
// Created by Veer Shresti on 4/8/20.
//

#include <iostream>
#include <fstream>
#include <string>
#include <thread>

using namespace std;

mutex lock1;

void table1()
{

    //create an output stream to write to the file
    //append the new lines to the end of the file
    ofstream TableFile1("output1.txt", ios::trunc);
    if (TableFile1.is_open())
    {

        for (int i = 1; i < 11; i++) {
            lock1.lock();
            TableFile1 << 1 << " * " << i << " = " << 1 * i << "\n";
            lock1.unlock();
        }
        TableFile1.close();
    } else cout << "Unable to open file for writing";
}

void table2()
{
    ofstream TableFile2("output2.txt", ios::trunc);
    if (TableFile2.is_open()) {
        for (int i = 1; i < 11; i++) {
            lock1.lock();
            TableFile2 << 2 << " * " << i << " = " << 2 * i << "\n";
            lock1.unlock();
        }
        TableFile2.close();
    } else cout << "Unable to open file for writing";
}

void table3()
{
    ofstream TableFile3("output3.txt", ios::trunc);
    if (TableFile3.is_open()) {
        for (int i = 1; i < 11; i++) {
            lock1.lock();
            TableFile3 << 3 << " * " << i << " = " << 3 * i << "\n";
            lock1.unlock();
        }
        TableFile3.close();
    } else cout << "Unable to open file for writing";
}

void table4()
{
    ofstream TableFile4("output4.txt", ios::trunc);
    if (TableFile4.is_open())
    {
        for (int i = 1; i < 11; i++)
        {
            lock1.lock();
            TableFile4 << 4 << " * " << i << " = " << 4 * i << "\n";
            lock1.unlock();
        }
        TableFile4.close();
    } else cout << "Unable to open file for writing";
}

void table5()
{

    ofstream TableFile5("output5.txt", ios::trunc);
    if (TableFile5.is_open())
    {
        for (int i = 1; i < 11; i++)
        {
            lock1.lock();
            TableFile5 << 5 << " * " << i << " = " << 5 * i << "\n";
            lock1.unlock();
        }
        TableFile5.close();
    } else cout << "Unable to open file for writing";
}


void table6()
{
    ofstream TableFile6("output6.txt", ios::trunc);

    if (TableFile6.is_open()) {
        for (int i = 1; i < 11; i++) {
            lock1.lock();
            TableFile6 << 6 << " * " << i << " = " << 6 * i << "\n";
            lock1.unlock();
        }
        TableFile6.close();
    } else cout << "Unable to open file for writing";
}


void table7()
{
    ofstream TableFile7("output7.txt", ios::trunc);
    if (TableFile7.is_open())
    {
        for (int i = 1; i < 11; i++)
        {
            lock1.lock();
            TableFile7 << 7 << " * " << i << " = " << 7 * i << "\n";
            lock1.unlock();
        }
        TableFile7.close();
    }
}


void table8()
{
    ofstream TableFile8("output8.txt", ios::trunc);
    if (TableFile8.is_open()) {
        for (int i = 1; i < 11; i++) {
            lock1.lock();
            TableFile8 << 8 << " * " << i << " = " << 8 * i << "\n";
            lock1.unlock();
        }
        TableFile8.close();
    } else cout << "Unable to open file for writing";
}

void table9()
{

    ofstream TableFile9("output9.txt", ios::trunc);
    if (TableFile9.is_open()) {
        for (int i = 1; i < 11; i++) {
            lock1.lock();
            TableFile9 << 9 << " * " << i << " = " << 9 * i << "\n";
            lock1.unlock();
        }
        TableFile9.close();
    } else cout << "Unable to open file for writing";
}


void table10()
{
    ofstream TableFile10("output10.txt", ios::trunc);
    if (TableFile10.is_open())
    {
        for (int i = 1; i < 11; i++)
        {
            lock1.lock();
            TableFile10 << 10 << " * " << i << " = " << 10 * i << "\n";
            lock1.unlock();
        }
        TableFile10.close();
    } else cout << "Unable to open file for writing";

}


int main()
{
    thread t1 (table1);
    thread t2 (table2);
    thread t3 (table3);
    thread t4 (table4);
    thread t5 (table5);
    thread t6 (table6);
    thread t7 (table7);
    thread t8 (table8);
    thread t9 (table9);
    thread t10 (table10);

    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();
    t6.join();
    t7.join();
    t8.join();
    t9.join();
    t10.join();

    return 0;
}









