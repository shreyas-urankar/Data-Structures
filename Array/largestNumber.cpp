#include <iostream>
#include <climits>  // Include this header for INT_MAX

using namespace std;

// int main()
// {
//     int num[] = {5, 6, 9, 7, 2, 8};
//     int size=6;
//     int largest = INT_MIN;  

//     for(int i=0; i<size;i++)
//     {
//         if(num[i]>largest){
//             largest=num[i];
//         }
//     }
//     cout<<"Largest number:"<<largest<<endl;
//     return 0;
// }


void changeArr(int arr[], int size)
{
    cout<<"in function\n";
    for(int i=0; i<size;i++)
    {
        arr[i]=2*arr[i];
    }
}
int main()
{
    int arr[]={5, 6, 9, 7, 2, 8};
    changeArr(arr, 3);
    int size;
    cout<<"in main\n";
    for(int i=0; i<3;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}