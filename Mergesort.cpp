#include <iostream>
using namespace std;

/* Code to sort an array using MergeSort */ 

void merge(int *arr,int size1 , int size2) {
	int temp[size1+size2];
	int ptr1 = 0;
	int ptr2 = 0;
	
    while (ptr1+ptr2 < size1+size2) {
    	
        if (ptr1 < size1 && arr[ptr1] <= arr[size1+ptr2] || ptr1 < size1 && ptr2 >= size2)
            temp[ptr1+ptr2] = arr[ptr1++];
 
        if (ptr2 < size2 && arr[size1+ptr2] < arr[ptr1] || ptr2 < size2 && ptr1 >= size1)
            temp[ptr1+ptr2] = arr[size1+ptr2++];
    }
 
    for (int i=0; i < size1+size2; i++)
        arr[i] = temp[i];
}
	
void mergeSort(int *arr,int size) {
	if(size==1){
		return;
	}
	int size1 = size/2;
	int size2 = size - size1;
	mergeSort(arr, size1);
    mergeSort(arr+size1, size2);
    merge(arr, size1, size2);
}

int main() {
	
	int num = 8;
    int a[] = {34,56,23,10,5,8,9,12};
    
    // Start merge sort
    mergeSort(a, num);
    // Print the sorted array
    
    cout << endl;
    for (int i = 0; i < num; i++)
        cout << a[i] << " ";
        
    cout << endl;
	return 0;
}