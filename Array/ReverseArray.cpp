// QUESTION ON REVERSE ARRAY

#include<iostream>
using namespace std;
void ReverseArray(int arr[], int size){
    int start  = 0, end =size-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout<<"Reversed Array:";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int size;
    cout<<"Enter the size of the array:";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array:";
    for(int i=0; i<size; i++){
    cin>>arr[i];
    }
    
    ReverseArray(arr, size);
    return 0;
}