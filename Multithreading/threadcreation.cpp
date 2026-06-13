#include<iostream>
#include<thread>
#include<chrono>

using namespace std;

void func(int thread_id, int count)
{
    while(count--)
    {
        cout<<"Thread ID: "<<thread_id<<" "<<"count = "<<count<<endl;
    }

}

int main()
{
    cout<<"In main before creating thread"<<endl;

    //Threads created using function pointer and arguments passed to the thread function
    thread t1(func,1,6);
    thread t2(func,2,5);

    cout<<"In main waiting for thread to finish execution"<<endl;


    //Wait for the thread to finish execution before main thread continues
    t1.join();
    t2.join();

    cout<<"In main after thread execution"<<endl;
    return 0;
}
/*
summary:This C++ program demonstrates the creation and execution of multiple threads using the C++17 standard. 
Theprogram defines a function `func` that takes a thread ID and a count as parameters. 
The function prints the thread ID and the current count value in a loop until the count reaches zero.
Here we cannot ensure that which thread will run first, so the output may vary each time we run the program.

output:
In main before creating thread
In main waiting for thread to finish execution
Thread ID: Thread ID: 1 count = 5
Thread ID: 1 count = 4
Thread ID: 1 count = 3
Thread ID: 1 count = 2
Thread ID: 12 count = 4
 count = 1
Thread ID: 1 count = 0
Thread ID: 2 count = 3
Thread ID: 2 count = 2
Thread ID: 2 count = 1
Thread ID: 2 count = 0
In main after thread execution        

*/