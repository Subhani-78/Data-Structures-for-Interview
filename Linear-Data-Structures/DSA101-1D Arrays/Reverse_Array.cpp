#include "iostream"
using namespace std;

int * arr_initialize_1(int arr[], int size)
{
    for (int i = 0; i<size; i++)
        cin>>arr[i];
    return arr;
}

void arr_print(int arr[], int size)
{
    for (int i =0; i<size; i++)
        cout<<arr[i]<<" ";
}

int * arr_reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    return arr;
}

int main()
{
    int arr[5];
    int *ptr, *ptr1;
    // Initialization of array
    ptr = arr;
    ptr = arr_initialize_1(arr,5);
    // Reverse an Array
    ptr1 = arr_reverse(ptr, 5);
    arr_print(ptr,5);
    return 0;
}
