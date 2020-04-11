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
void *task(void *argp)
{
    int tableId = *(int*)argp;
    
    for (int j = 1; j <= 10; j++)
    {
        lock1.lock();
        if(1==j) cout << "Table-" << tableId << "\n";
        cout << tableId << " * " << j << " = " << tableId * j << "\n";
        lock1.unlock();
    }
}

int main()
{
    pthread_t tid;
    
    // Constructs the new thread and runs it. Does not block execution.
    for(int tableId=0; tableId<4; ++tableId)
    {
        pthread_create(&tid, NULL, task, (void*)&tableId);
    }
    
    pthread_exit(NULL);
    return 0;
}

