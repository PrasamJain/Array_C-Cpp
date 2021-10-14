#include<iostream>
using namespace std;
#define n 100

int main()
{
	int x,size;
	int arr[n];   //size of array
	cin>>size;   //number of elements inside array
	for(int i=0;i<size;i++)
		cin>>arr[i];
		
	//insert at end
	
	if(size<n)
	{
		cout<<"Enter the element for insert at beginning : ";
		cin>>x;
		arr[size] = x;
		size++;
		for(int i=0;i<size;i++)
			cout<<arr[i]<<" ";
	}
	else
		cout<<"Array ia full!!";
return 0;
}




/*
*INPUT
*    10
*    1 2 3 4 5 6 7 8 9 10
*    50
*OUTPUT    
*    1 2 3 4 5 6 7 8 9 10 50
*/    
