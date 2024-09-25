//Que 1) Square Pattern


#include <iostream>
using namespace std;


//For number pattern
//........................................


// int main()
// {
//     int i,j,n;
//     cout<<"Enter the n:";
//     cin>>n;
//     for(i=1; i<n; i++)
//     {
//         for(j=1; j<=n; j++)
//         {
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// for star pattern
// ................................
int main()
{
    int i,j,n;
    cout<<"Enter the n:";
    cin>>n;
    for(i=1; i<n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}