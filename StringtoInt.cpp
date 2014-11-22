#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>

using namespace std;
int stringToInt(string); 
int main(void) 
{
    string str;
    cout<<"\n Please enter the numeric string to convert to int:";
    getline(cin,str);
    cout<<"\n "<<str;
    int returnVal = stringToInt(str); 
    system("PAUSE");
    return EXIT_SUCCESS;
}

int stringToInt(string str)  // This function returns an integer given a string. 
{  
    int length = str.length(); 
    int sum = 0; 
    char c = '\0';
    for (int i = 0;i<length;i++)
    { 
        char c = str.at(i); 
        sum = sum + (int)c*pow(10,length-1-i); 
    }
    return sum; 
    
}



    
    
