#include <iostream>
using namespace std;

int display(int arr[], int i, int max, int n)
{
    if(i<n)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        return display(arr,i+1,max,n);
        
    }
    return max;
    
    
}
int main() {
    int arr[5] = {1,67,65,10001,0};
    int n;
    n = sizeof(arr) / sizeof(arr[0]);
    cout<<display(arr,0,arr[0],n);
    
}