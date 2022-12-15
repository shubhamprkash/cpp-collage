
#include <iostream>
#include <array>
using namespace std;

int main(){
    int arr[] = {2,3,5,6,2,9,3,7,7};
    int n=a9;
    int i,j,min_idx,temp;
    for (int i = 0; i < n-1 ;i++)
    {
        min_idx =i;
        for (int j = i+1; j < n; j++){
        {
            if(arr[j]<arr[min_idx])
                min_idx=j;
        }}
        // swap(&arr[min_idx], &arr[i]);
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;

        
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    

}