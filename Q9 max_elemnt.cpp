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
