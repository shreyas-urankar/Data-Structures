// Triangle Pattern
// Easy with stars *

#include<iostream>
using namespace std;

// int main()
// {   
//     int num, i, j;
//     cout<<"Enter the numbers of lines stars you want to print:";
//     cin>>num;
//     for(i=0; i<num; i++)
//     {
//         for(j=0; j<i+1; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// ........................
// for numbers
// int main()
// {   
//     int num, i, j;
//     cout<<"Enter the numbers of lines you want to print:";
//     cin>>num;
//     for(i=0; i<num; i++)
//     {
//         for(j=0; j<i+1; j++)
//         {
//             cout<<(i+1);
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// ...............................................
// REVERSE TRIANGLE PATTERN


// int main()
// {   
//     int num, i, j;
//     cout<<"Enter the numbers of lines you want to print:";
//     cin>>num;
//     for(i=0; i<num; i++)
//     {
//         for(j=i+1; j>0; j--)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// .............................................
// FLOYDS TRIANGLE PATTERN
// int main()
// {   
//     int num, i, j;
//     int n =1;
//     cout<<"Enter the numbers of lines you want to print:";
//     cin>>num;
//     for(i=0; i<num; i++)
//     {
//         for(j=0; j<i+1; j++)
//         {
//             cout<<n;
//             n++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//.......................................................


// int main()
// {   
//     int num, i, j;
//     char ch='A';
//     cout<<"Enter the numbers of lines you want to print:";
//     cin>>num;
//     for(i=0; i<num; i++)
//     {
//         for(j=0; j<i+1; j++)
//         {
//             cout<<ch;
//             ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//.............................................................
// INVERTED TRIANGLE PATTERN


// int main()
// {   
//     int num, i, j;
    
//     cout<<"Enter the numbers of lines you want to print:";
//     cin>>num;
//     for(i=0; i<num; i++)
//     {
//         for(j=0; j<i; j++)
//         {
//             cout<<" ";
//         }
//         for (j=0; j<num-i; j++){
//             cout<<i+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// .................................................
// PYRAMID PATTERN
// int main()
// {   
//     int num, i, j;
//     cout<<"Enter the numbers of lines you want to print:";
//     cin>>num;
//     for(i=0; i<num; i++)
//     {
//         for(j=0; j<num-i-1; j++)
//         {
//             cout<<" ";
//         }
//         for(j=1; j<=i+1; j++){
//             cout<<j;
//         }
//         for(j=i; j>0; j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//.................................................
#include<iostream>
using namespace std;

int main()
{   
    int num, i, j;
    cout << "Enter the number of lines you want to print: ";
    cin >> num;

    for (i = 0; i < num; i++) 
    {
        for (j = 0; j < num - i - 1; j++) 
        {
            cout << " ";
        }
        cout << "*";
        if (i != 0) 
        {
            for (j = 0; j < 2 * i - 1; j++) 
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    for (i = 1; i < num; i++) 
    {
        for (j = 0; j < i; j++) 
        {
            cout << " ";
        }
        cout << "*";
        if (i != num - 1) 
        {
            for (j = 0; j < 2 * (num - i) - 3; j++) 
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
