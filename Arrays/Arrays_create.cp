//We have to learn how to create array by using c/c++.

#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size];

    cout<<"Enter the elements of an array"<<endl;
    for(int i=0;i<size;i++)
    {
       cin>>arr[i];
    }
    cout<<"The array is : ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
  return 0;
} 




//INPUT 
//   10
//   1 2 4 6 8 0 3 5 7 9
//OUTPUT
//   1 2 4 6 8 0 3 5 7 9
