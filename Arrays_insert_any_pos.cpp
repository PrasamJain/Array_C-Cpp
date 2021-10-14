#include<iostream>
using namespace std;
#define n 100

int main()
{
	int x,size,pos;
	int arr[n];   //size of array
	cin>>size;   //number of elements inside array
	for(int i=0;i<size;i++)
		cin>>arr[i];
		
	//insert at any position 
	cout<<"Enter the position : ";
	cin>>pos;
	if(size<n)
	{
		cout<<"Enter the element for insert at pos "<<pos<<" : ";
		cin>>x;
		for(int i=size-1;i>=pos-1;i--)
			arr[i+1] = arr[i];
		
		arr[pos-1] = x;
		size++;
		for(int i=0;i<size;i++)
			cout<<arr[i]<<" ";
	}
	else
		cout<<"Array ia full!!";
return 0;
}



/*
* INPUT
       10
       1 2 3 4 5 6 7 8 9 10
       Enter the position : 5
       Enter the element for insert at pos 5 : 50
* OUTPUT
       1 2 3 4 50 5 6 7 8 9 10
