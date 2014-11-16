    #include <iostream>
    #include <cmath>
    using namespace std;
    
    /* Code for recursive binary search.Given an integer , try to find recursively the position of that integer in an array  */
    
    int binarySearch(int arr[],int x,int first,int last) 
    {
        if (last < first) 
        {return -1;}
        
        if (last >= first) 
        {
         int mid = (first + last ) / 2;
         if(arr[mid]==x) 
         { return mid; }
         else if ( arr[mid] < x) 
         { 
           return binarySearch(arr,x,mid+1,last);
         }
         else {
           return binarySearch(arr,x,first,mid-1);
         }
        
        }
         return -1;
    }
    
    int main() 
    {
        int myList[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
        int N = sizeof(myList)/sizeof(int);
        int last = N - 1;
        int first = 0;
        int pos = binarySearch(myList,19,first,last);
        cout<< " The position of the found integer is :" << pos + 1  << endl;
        system("PAUSE");
        return EXIT_SUCCESS;
    }
