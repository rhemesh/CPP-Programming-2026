#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    vector<int> vec(8);                 //0 0 0 0 0 0 0 0
    fill(vec.begin(),vec.begin()+4,7);  // 7 7 7 7 0 0 0 0
    fill(vec.begin()+2,vec.end()-3,10); // 7 7 10 10 10 0 0 0
    vector<int>::iterator vect;
    vect = vec.begin();
    for(vect;vect!=vec.end();vect++)
    {
        cout<<*vect<<" "<<endl;
    }

    return 0;

}

/*

Fill algorithm:
fill(start index,stop index,number to be replaced)

Output:
7
7 
10 
10 
10 
0 
0 
0 

*/