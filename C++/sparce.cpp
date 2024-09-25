#include <iostream>
using namespace std ;

int main ()
{
    int row,col;
    cout<<"Enter the number of rows :- ";
    cin>>row;
    cout<<"Enter the number of coloumn :- ";
    cin>>col;
    int a[row][col];
    for (int i = 0;i<row;i++)
    {
        for (int j = 0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl;
    int counter  = 0;
    for (int i = 0 ;i <row ; i++)
    {
        for (int j = 0 ; j<col ; j++)
        {
              if  (a[i][j] != 0)
              {
                counter ++;
              }
        }
    }
}