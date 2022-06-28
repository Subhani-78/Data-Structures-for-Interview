#include "iostream"
using namespace std;

int * arr_initialize_1(int arr[], int size)
{
    for (int i = 0; i<size; i++)
        cin>>arr[i];
    return arr;
}

bool linear_search(int arr[], int size, int key)
{
    for(int i =0; i<size; i++)
        if(arr[i] == key)
            return true;

    return false;
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
    // Linear Search in 1D Array
    int key;
    cout<<"\n Please enter a key : ";
    cin>>key;
    cout<<"\n Is the key found : "<< linear_search(arr,5,key);

    return 0;
}
