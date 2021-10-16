/* IN THIS LAB WE LEARM HOW TO DELETE AN ELEMENTS FROM END */


/* We have an array of 10 elements i.e size = 10,
*                                 1 2 3 4 5 6 7 8 9 10
* After deleting the last element from an array
*                                 1 2 3 4 5 6 7 8 9
* last element whose index number is size-1 i.e. array[9] is deleted.
*/

//SOURCE CODE

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



/* 
* INPUT :-
	  10
	  1 2 3 4 5 6 7 8 9 10
* OUTPUT :-
	  1 2 3 4 5 6 7 8 9
	  
*/
