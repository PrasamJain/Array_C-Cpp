/* IN THIS LAB WE LEARM HOW TO DELETE AN ELEMENTS FROM BEGINNING */


/* We have an array of 10 elements
*                                 1 2 3 4 5 6 7 8 9 10
* After deleting a first element from an array
*                                 2 3 4 5 6 7 8 9 10
* First element whose index number is 0 i.e. array[0] is deleted.
* After deleting we have to shift all the elements from R to L.
*/



/*   C++ code   */ 



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
	
	for(int i=1;i<size;i++)
		arr[i-1] = arr[i];

	size--;
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
		
	delete[] arr;	//delete dynamically allocated memory.
	return 0;	
}



/* 

* INPUT :-     10
*              1 2 3 4 5 6 7 8 9 10
* OUTPUT :-    2 3 4 5 6 7 8 9 10

*/
