



#include<iostream>
using namespace std;

int main()

{
	int x,size;
	cin>>size;   //size of array
	int *arr = new int[size];   //dynamica allocation of memory
	for(int i=0;i<size;i++)
		cin>>arr[i];
		
	//delete from beginning

	size--;
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
		
	delete[] arr;	//delete dynamically allocated memory.
	return 0;	
}
