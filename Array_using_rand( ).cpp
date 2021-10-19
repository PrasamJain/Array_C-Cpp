//we create a randomize array using random function in between 0 to 99.
//For making an array we use dynamic memory allocation.
//For rand() function we add library called : #include<stdlib.h>


/* SOURCE CODE(C++) */

#include<iostream>
#include<stdlib.h>
using namespace std;
int rdm()
{
    return rand() % 100;   //rand() function. 
}
int main()
{
    int size;
    cout<<"Size : ";   //Size of the array.
    cin>>size;
    int *a = new int [size];    //dynamic memory allocation.
    
    for(int i=0;i<size;i++)
        a[i] = rdm();
    
    for(int i=0;i<size;i++)
        cout<<a[i]<<" ";
    
  return 0;
}

//INPUT :- 10
//OUTPUT :- 45 34 78 12 4 98 3 55 1 90

//In output we find random element in between 0 to 100.

//  THANK YOU...
