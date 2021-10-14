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
		
	//insert at beginning
	
	if(size<n)
	{
		cout<<"Enter the element for insert at beginning : ";
		cin>>x;
		for(int i=size-1;i>=0;i--)
		{
			arr[i+1] = arr[i];
		}
		arr[0] = x;
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
 *    10                             (total no. of elements)
 *    1 2 3 4 5 6 7 8 9 0            (elements in array) 
 *    50                             (element for inserting)
 
 * OUTPUT
 *    50 1 2 3 4 5 6 7 8 9 0
*/
