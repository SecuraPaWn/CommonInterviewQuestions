#include <iostream>
using namespace std;
/* Calculate Second Largest element of an array*/ 

int main() {
	// your code goes here
	
	int a[] = {1,4,5,6,7,8,9,1,1,2};
	int x = 10; 
	int v = -9999;
	
	for (int i = 0 ; i < 10 ; i++)
	{
		if (a[i] < x)
		{
			if (a[i] > v )
			{
				v = a[i];
			}
		}
	}
	
	cout << v; 
	return 0;
}