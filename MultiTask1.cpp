//
// Created by Veer Shresti on 4/5/20.
//

//
// Created by Veer Shresti on 4/4/20.
//
#include <string>
#include <iostream>
#include <thread>
#include <unistd.h>

using namespace std;

mutex lock1;

// The function we want to execute on the new thread.
void task1()
{
    for (int j = 1; j < 11; j++)
    {
        if(1==j) cout << "Table-1\n";
        //usleep(rand() % 10);
        lock1.lock();
        cout << 1 << " * " << j << " = " << 1 * j << "\n";
        lock1.unlock();
    }
}

// The function we want to execute on the new thread.
void task2()
{
    for (int j = 1; j < 11; j++)
    {
        if(1==j) cout << "Table-2\n";
        //usleep(rand() % 10);
        lock1.lock();
        cout << 2 << " * " << j << " = " << 2 * j << "\n";
        lock1.unlock();
    }
}

int main()
{
    // Constructs the new thread and runs it. Does not block execution.
    thread t1(task1);
    thread t2(task2);

    // Makes the main thread wait for the new thread to finish execution, therefore blocks its own execution.
    t1.join();
    t2.join();
}