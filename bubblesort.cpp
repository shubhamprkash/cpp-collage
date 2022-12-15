
#include <iostream>

using namespace std;

int main()
{
    int arr[] = {96,55,88,43,91,56,73,12,5};
    int n=9;
    // sorting;
    // bool swapCheck = false;
    int i,j,idx,temp;
    for(i=0;i<n-1;i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
           if( arr[j]<arr[j+1])
           {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1]=temp;
            // swapCheck=true;
           }
        }

    
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
return 0;
}