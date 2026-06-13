#include<iostream>
#include<thread>

using namespace std;

int main()
{
#if 0
    auto func = [](int x)
    {
        while(x-- > 0)
        {
            cout<<"Count = "<<x<<endl;
        }
    };
    thread t(func,10);
#else


    thread t([](int x){
        while(x-- > 0)
        {
            cout<<"Count = "<<x<<endl;
        }
    }, 15);


#endif


    t.join();

    return 0;
}

/*
Thread creation type 2 : Lambda Funtion 

Here, instead of writing function seperately we are injecting the function into the thread
This can be witten in 2 formats which i have shown above
Output:

Count = 14
Count = 13
Count = 12
Count = 11
Count = 10
Count = 9
Count = 8
Count = 7
Count = 6
Count = 5
Count = 4
Count = 3
Count = 2
Count = 1
Count = 0
*/