#include<iostream>
#include<string>

using namespace std;

int main()
{
    string place1,place2;

    place1 = "Bangalore";
    place2 = "Hometown";

    cout<<"Size of place1 = "<<place1.size()<<endl;  //9
    cout<<"Length of place1 = "<<place1.length()<<endl; //9

    cout<<"Size of place2 = "<<place2.size()<<endl; //8
    cout<<"Length of place2 = "<<place2.length()<<endl;//8

    return 0;

}

/*
length() and size() works same return the total size of the string.

length() counts the number of characters whereas size() works for all the things like arr,vector etc.,

Output:

Size of place1 = 9
Length of place2 = 9
Size of place2 = 8
Length of place2 = 8

*/