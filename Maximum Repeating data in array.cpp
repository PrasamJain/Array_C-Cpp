/*
Given an array of size n, the array contains numbers in range from 0 to k-1 where k is a positive integer and k <= n. 
Find the maximum repeating number in this array. 
For example: let k be 10 the given array be arr[] = {1, 2, 2, 2, 0, 2, 0, 2, 3, 8, 0, 9, 2, 3}, the maximum repeating number would be 2.
Expected time complexity is O(n^2).
*/


#include<iostream>
using namespace std;
int main()
{
	int n,max,count,temp=0;
	cout<<"Enter the size of array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of array : ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		count=1;
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
				count++;
				if(count>temp)
				{
					temp = count;
					max = arr[j];
				}
		}
	}
	cout<<"The maximun repeating element : "<<max;
	return 0;
}
