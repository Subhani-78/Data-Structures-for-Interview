#include "iostream"
using namespace std;

int * arr_initialize(int arr[], int size)
{
    for (int i = 0; i<size; i++)
        cin>>arr[i];
    return arr;
}

int arr_maximum(int arr[], int size)
{
    int temp = arr[0];
    for (int i=0;i<size;i++)
        if(temp<arr[i])
            temp = arr[i];

    return temp;
}

int arr_minimum(int arr[], int size)
{
    int temp = arr[0];
    for (int i=0;i<size;i++)
        if(temp>arr[i])
            temp = arr[i];

    return temp;
}

int main()
{
    int arr[5];
    int *ptr;
    // Initialization of array
    ptr = arr;
    ptr = arr_initialize(arr,5);
    // Maximum value in an array
    int max = arr_maximum(ptr,5);
    cout<<"\n The maximum value is : "<<max;
    // Maximum value in an array
    int min = arr_minimum(ptr,5);
    cout<<"\n The maximum value is : "<<min;
    return 0;
}