#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{

    vector<int> vec(10);
    int arrval[10] ={10,20,23,23,34,24,35,33,35};
    copy(arrval+1,arrval+5,vec.begin()+2);
    vector<int>::iterator it = vec.begin();
    while(it != vec.end())
    {
        cout<<*it<<" "<<endl;
        it++;
    } 

    return 0;

}

/*

Copy algorithm:
copy(arrindexstart,arrayindex stop,index from where to copy);

Output:

0   
0 
20 
23 
23 
34 
0 
0 
0 
0 

*/