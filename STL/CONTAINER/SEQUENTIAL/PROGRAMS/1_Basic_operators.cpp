#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>

#define ARRAY 1
#define VECTOR 1
#define DEQUE 1
#define LIST 1

using namespace std;
int main()
{



#if ARRAY
array<int,5> arr;
cout<<"Enter the array elements:"<<endl;
for(int &x : arr)
{
    cin>>x;
}
cout<<endl;

cout<<"Elements stored inside array are: ";
for(int x :arr)
{
    cout<<x<<" ";
}
cout<<endl;

cout<<"Printing array elements using Iterator:"<<endl;
auto it_arr = arr.begin();
for(it_arr;it_arr != arr.end();it_arr++)
    cout<<*it_arr+2<<" ";
cout<<endl;
#endif




#if VECTOR
vector<int> vec(5);
cout<<"Enter elements to the vector: ";
for(int &i : vec)
{
    cin >> i;
}
vec.push_back(10);
vec.push_back(20);

cout<<"Elements inside vector : ";
for(int i : vec)
    cout<<i<<" "; //prints 123 324 34 234 234 10 20 

cout<<endl;

cout<<"Printing elements inside vector using iterator: ";
for(auto it_vec = vec.begin();it_vec!=vec.end();it_vec++)
{
    *it_vec = *it_vec + 5;  //adding number to the all the elements
    cout<<*it_vec<<" "; //prints 128 329 39 239 239 15 25 
}
cout<<endl;
#endif







#if DEQUE 
deque<int> deq(4);
cout<<"Enter elements to the deque: "<<endl;
for(int &i : deq)
    cin>>i;
deq.push_back(10);
deq.push_back(20);
deq.push_front(34);
deq.push_front(5);
deq.push_front(7);

cout<<"Elements inside deque: ";
for(int i:deq)
    cout<<i<<" "; //prints 7 5 34 234 45 46 46 10 20 
cout<<endl;

cout<<"Elements inside deque printing using iterator: ";
for(auto it_deq = deq.begin();it_deq != deq.end();it_deq++)
{
    if(it_deq  == deq.begin()+2)  //at index 2
        *it_deq = 200;    //replaces the value with the 200
    else
        (*it_deq)++; //increments 1 time with elements inside the deque
    cout<<*it_deq<<" ";  //prints 8 6 200 35 235 46 47 11 21 
}
cout<<endl;
#endif





#if LIST
list<int> lst = {34,56,3,24,53};
cout<<"Elements inside list : ";
for(int x: lst)
    cout<<x<<" "; //prints 34 56 3 24 53
cout<<endl;
lst.push_back(20);
lst.push_back(345);
lst.push_front(34);
lst.push_front(21);

for(auto it_lst = lst.begin();it_lst!= lst.end();it_lst++)
{
    if(it_lst != lst.begin())  //except first index add 7 for all the elements
        *it_lst = *it_lst+7;
    cout<<*it_lst<<" "; //prints 21 41 41 63 10 31 60 27 352 
}
cout<<endl;


#endif

}

