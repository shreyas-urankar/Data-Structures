#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of array:";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of the array:";
    for(int i=0; i<size; i++){
    cin>>arr[i];
    }
    for(int i=0; i<size;i++)
    {
        int index=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[index]){
            index=j;
            }
        }
        swap(arr[i], arr[index]);
    }
    cout<<"Sorted array is:";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }


}