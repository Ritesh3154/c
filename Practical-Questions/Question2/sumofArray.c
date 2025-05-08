#include <stdio.h>

int sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int arr[5] = {1,23,4,3,5};
    printf("sum = %d ",sum(arr,5));
    
}