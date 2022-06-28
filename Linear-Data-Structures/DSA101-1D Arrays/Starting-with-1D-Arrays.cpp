#include "iostream"
using namespace std;

int * arr_initialize_1(int arr[], int size)
{
    for (int i = 0; i<size; i++)
        arr[i] = i + 2;
    return arr;
}

int main()
{
    int arr[5];
    int *ptr;
    // Initialization of array
    ptr = arr;
    ptr = arr_initialize_1(arr,5);
    for(int i = 0; i<5; i++)
        cout<<ptr[i];

    return 0;
}