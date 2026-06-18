#include<iostream>

using namespace std;
#if INTEGER_ALLOCATION
int main()
{
    int *n = new int(10); //allocating memory for an integer
    *n = 20;    //dereferencing pointer with other number
    cout<<*n;   //printing value
    delete n;   //deallocating memory

    return 0;
}


/*
Output:
20
*/


#else
int main()
{
    char *cptr = new char('H');  //allocating memory for char 
    cout<<*cptr<<endl;

    delete cptr;

    return 0;
}


/*
Output:
H
*/
#endif
