#include <stdio.h>
int i=0;
void printArray(int arr[], int n)
{
    if(i<n)
    {
        printf("%d\t", arr[i]);
        i++;
        printArray(arr,n);
    }
}

int main() {
    int arr[5] = {1,2,3,4,5};
    int n;
    n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr,n);
    return 0;
    
}