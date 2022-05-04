#include<iostream>
using namespace std;

int main()
{
	int a[20],x,n,flag = 0,i;
	cout<<"Enter No. of elements : ";
	cin>>x;
	cout<<"Enter the elements of array"<<endl;
	for(i=0;i<x;i++)
	{
		cin>>a[i];
	}
	cout<<"Which element do you wants to search? : ";
	cin>>n;
	for(i=0;i<x;i++)
	{
		if(n == a[i])
		{
			flag++;
			break;
		}
	}
	if(flag == 1)
		cout<<"Result Found!!"<<endl<<"position : "<<i+1<<endl;
	else
		cout<<"No Results Found!! "<<endl;
	return 0;
}
