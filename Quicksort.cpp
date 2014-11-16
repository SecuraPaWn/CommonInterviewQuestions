#include <iostream.h>
#include <stdio.h>
#include <stdlib.h> 

/*Code to Sort an Array using QuickSort*/ 

void quickSort(int arr[], int left, int right);
int partition(int arr[], int left ,int right);
void swap(int& a , int& b);
void print(int array[],const int& N );


int main()
{
    int test[] = {7,-13,1,3,10,5,2,4};
    int N = sizeof(test)/sizeof(int);   
     
    cout << "Size of test array :" << N << endl;
    cout << "Before sorting : " << endl;
    
    print(test,N);
    quickSort(test,0,N-1);
    
    cout << endl << endl << "After Sorting :" << endl;
    print(test,N);
    system("PAUSE");
    return EXIT_SUCCESS;
}

void quickSort(int arr[] , int left , int right) 
{
     int index = partition(arr,left,right);
     
     if ( left < index - 1) { //sort left half 
     quickSort(arr,left,index-1); 
     }
     
     if ( index < right ) { //sort right half 
         quicksort(arr,index,right);
     }
}

int partition(int arr[] , int left , int right) { 
    
    int pivot  = arr[(left + right)/2];
    while ( left <= right) {
          
         // Find element on left that should be on right 
        while (arr[left] < pivot ) left++;
        while (arr[right] > pivot) right--;
        
        //Swap elements, and move left and right indices
        if (left<=right) 
        {
             swap(arr[left],arr[right]);
             left++;
             right--;
             }
}
return left;
}

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void print(int a[], const int& N)
{
    for(int i = 0 ; i < N ; i++)
        cout << "array[" << i << "] = " << a[i] << endl;
} 

