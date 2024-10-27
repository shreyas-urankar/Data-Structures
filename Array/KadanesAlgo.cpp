// Kadanes algorithm 
// Maximum Subarray Sum

#include <iostream>
#include<climits>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int maxSum = INT_MIN;
    int arr[n];  // Array of size 'n'
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Input array elements from the user
    }
    
    for (int st=0;st<n;st++)
    {
        int currentSum=0;
        for(int end=st; end<n; end++){
            currentSum += arr[end];
            maxSum=max(currentSum, maxSum);
            for(int i=st; i<=end; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        
    }
    cout<<"Max Subarray sum = "<<maxSum<<endl;
    return 0;
}