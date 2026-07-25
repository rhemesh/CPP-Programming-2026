#include<iostream>
#include<vector>
using namespace std;

int main()
{
   // vector<int> vec;  //empty vector
   // vector<int> vec(5); //vector with size initialized with 0 0 0 0 0
   // vector<int> vec(5,10);//vector with size and initialised with number 10  - 10 10 10 10 10
    vector<int> vec = {10,20,30}; //initialise with numbers

    cout<<"vec[1]: "<<vec[1]<<endl; //elements can be accessed - It prints 1st index element - prints 20
    cout<<"vec.at(2): "<<vec.at(2)<<endl; //Performs bound checking  - prints element at particular index (2) - 20
                        //and throws an exception if no index

    cout<<"vec.front: "<<vec.front()<<endl; //return first element in an vector - 10
    cout<<"vec.back: "<<vec.back()<<endl; //returns last element in an vector - 30

    int *ptr = vec.data();
    cout<<"ptr[0]: "<<ptr[0]<<endl;  //return pointer to the first element of the vector  - 10
    cout<<"Elements inside vector are: ";
    for(int i=0;i<vec.size();i++)  
    {
        cout<<ptr[i]<<" ";  //prints 10 20 30
    }
    cout<<"\n";
    
    cout<<"vec.size: "<<vec.size()<<endl;;;  //prints number od elements - 3
   
    cout<<"vec.empty: "<<vec.empty()<<endl;  //returns 1 if vector is empty and return 0 if vector is not empty
    if(vec.empty())
        cout<<"Empty"<<endl;
    else
        cout<<"Not empty"<<endl;

    
    cout<<"vec.capacity: "<<vec.capacity()<<endl;; //returns current allocated capacity - 3

    vec.resize(5);

    cout<<"vec.capacity after resize: "<<vec.capacity()<<endl;//prints as 6 depends on compiler it can alloacte empty space 
    cout<<"vec.size ater resize: "<<vec.size()<<endl; //prints 5
    cout<<"Elements inside vector are: ";
    for(int i : vec)
    {
        cout<<i<<" ";  //prints 10 20 30 0 0
        i++;
    }
    cout<<endl;
    vec.reserve(100); //pre allocates the memory
    cout<<"vec.capacity: "<<vec.capacity()<<endl; //prints 100
    vec.shrink_to_fit();  //removes unused capacity.
    cout<<"vec.capacity: "<<vec.capacity()<<endl; //prints 5
    cout<<"vec.maxsize: "<<vec.max_size()<<endl; //maximum possible elements
    //Modifiers
    vec.push_back(7);  //adding elements at end  10 20 30 0 0 7
    vec.push_back(23); // 10 20 30 0 0 7 23

    cout<<"Elements inside vector are: ";
    for(int i : vec)
    {
        cout<<i<<" ";  //prints 10 20 30 0 0 7 23
        i++;
    }
    cout<<"\n";
    vec.pop_back(); //removes last element 10 20 30 0 0 7

    vec.insert(vec.begin() + 3,50); //insert at any position  //10 20 30 50 0 0 7
    
    vec.erase(vec.begin() + 4); //removes element at any position 10 20 30 50 0 7

    vec.erase(vec.begin()+3,vec.begin()+5);  //removes multiple elements from 1st to last ;removed 50 0 //10 20 30 7
    vec.clear();  //clears full vector elements
    cout<<"vec.size after clear(): "<<vec.size()<<endl; //0

    vec.assign(5,100);  //assigns 5 elements with value 100

    cout<<"Elements inside vector are: ";
    for(int i : vec)
    {
        cout<<i<<" ";  //prints 100 100 100 100 100
        i++;
    }
    cout<<"\n";
    vector<int> a = {10,20};
    vector<int> b = {30,40};

    a.swap(b); //this swaps the vector values 
    cout<<"vector a values are after swap: ";
    for(int x:a)
    {
        cout<<x<<" "; //prints 30 40
    }
    cout<<endl;

    cout<<"vector b values are after swap: ";
    for(int x:b)
    {
        cout<<x<<" "; //prints 10 20
    }

    cout<<"\n";
    
    vec.emplace_back(120); //construct element directly at the end //100 100 100 100 100 120
    //emplace works like an push_back but avoids an extra copy of complex objects 
    //use push_back when already have an object 
    //or else use emplace which creates an object automatically inside the container
    //we can see the difference only in user defined and class/object for push_back and emplace
    


    vec.emplace(vec.begin()+2,200); //construct element at any place 100 100 200 100 100 100 120

    cout<<"Elements inside vector are: ";
    for(int i : vec)
    {
        cout<<i<<" ";  //prints 100 100 200 100 100 100 120
        i++;
    }
    cout<<"\n";
    
    cout<<"vec.begin(): "<<*vec.begin()<<endl;//prints first element of the vector - 100
    cout<<"Elements inside vector using vec.begin and vec.end: ";
    for(auto it = vec.begin();it!=vec.end();it++) //iterates through all the elements in the vector starting from vec.begin (first element) and vec.end (last element)
    {
        cout<<*it<<" "; //prints 100 100 200 100 100 100 120
    }
    cout<<"\n";

    cout<<"vec.rbegin(): "<<*vec.rbegin()<<endl; //prints last element in vector - 120
    cout<<"Elements inside vector using vec.rbegin and vec.rend: ";
    for(auto it = vec.rbegin();it!=vec.rend();it++) //iterates through all the elements in the vector starting from vec.rbegin (last element) and vec.rend (first element)
    {
        *it = *it +5;
        cout<<*it+2<<" "; //prints 127 107 107 107 207 107 107
    }
    cout<<"\n";

    //cbegin(),cend() - constant iterators.Read only
    cout<<"vec.cbegin(): "<<*vec.cbegin()<<endl;  //prints first element - 105 
    cout<<"Elements inside vector using vec.cbegin and vec.cend: ";
    for(auto it = vec.cbegin();it!=vec.cend();it++) //iterates through all the elements in the vector starting from vec.begin (first element) and vec.end (last element)
    {
        //*it = *it +5; //this cannot be modified because as this is a constant iterator
        cout<<*it+2<<" "; //prints 107 107 207 107 107 107 127
    }
    cout<<"\n";

    return 0;

}

/*

Output:

vec[1]: 20     
vec.at(2): 30
vec.front: 10
vec.back: 30
ptr[0]: 10
Elements inside vector are: 10 20 30 
vec.size: 3
vec.empty: 0
Not empty
vec.capacity: 3
vec.capacity after resize: 6
vec.size ater resize: 5
Elements inside vector are: 10 20 30 0 0 
vec.capacity: 100
vec.capacity: 5
vec.maxsize: 2305843009213693951
Elements inside vector are: 10 20 30 0 0 7 23 
vec.size after clear(): 0
Elements inside vector are: 100 100 100 100 100 
vector a values are after swap: 30 40 
vector b values are after swap: 10 20 
Elements inside vector are: 100 100 200 100 100 100 120 
vec.begin(): 100
Elements inside vector using vec.begin and vec.end: 100 100 200 100 100 100 120 
vec.rbegin(): 120
Elements inside vector using vec.rbegin and vec.rend: 127 107 107 107 207 107 107 
vec.cbegin(): 105
Elements inside vector using vec.cbegin and vec.cend: 107 107 207 107 107 107 127 


*/