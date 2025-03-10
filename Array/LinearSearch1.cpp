#include<iostream>
using namespace std;
int main()
{
    int arr[]={5, 6, 9, 7, 2, 8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target;
    bool found=false;
    cout<<"Enter the target element you want to find from the array:";
    cin>>target;
    for (int i=0; i<size; i++)
    {
        if(target==arr[i])
        {
            found=true;
            cout<<"Target element found at index:"<<i<<endl;
            found=true;
            break;
        }
    }
    if(!found)
    {
        cout<<"Target element not found in the array." << endl;
    }
    return 0;
}