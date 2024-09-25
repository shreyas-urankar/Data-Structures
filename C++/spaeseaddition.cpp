#include<iostream>
using namespace std;

int main()
{
	int row1,row2;
	cout<<"Enter the number of row1 in Sparse matrix 1:-";
	cin>>row1;
	int Sparse1[row1][3];
	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<3;j++)
		{
		cin>>Sparse1[i][j];
		}
	}
	cout<<endl;
	cout<<"Enetr the number of rows2 in Sparse matrix 2:-";
	cin>>row2;
	int Sparse2[row1][3];
	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<3;j++)
		{
		cin>>Sparse2[i][j];
		}
	}
	cout<<endl;
	int Result[100][3];
	int i=1,j=1,k=1;
	int l1,l2;
	l1=Sparse1[0][2];
	l2=Sparse2[0][2];
	while(i<l1&&j<l2)
	{
		if(Sparse1[i][0]==Sparse2[j][0])
		{
			if(Sparse1[i][1]==Sparse2[j][1])
			{
				Result [k][0]=Sparse1[i][0];
				Result [k][1]=Sparse1[i][1];
				Result [k][2]=Sparse1[i][2]+Sparse2[j][2];
				i++;
				j++;
				k++;
			}
			else
			{
				if(Sparse1[i][1]>Sparse2[j][1])
				{
				Result [k][0]=Sparse2[j][0];
				Result [k][1]=Sparse2[j][1];
				Result [k][2]=Sparse2[j][2];
				j++;
				k++;
				}
				else
				{
				Result [k][0]=Sparse1[i][0];
				Result [k][1]=Sparse1[i][1];
				Result [k][2]=Sparse1[i][2];
				i++;
				k++;
				}
			}
		}else
		{
				if(Sparse1[i][0]>Sparse2[j][0])
				{
				Result [k][0]=Sparse2[j][0];
				Result [k][1]=Sparse2[j][1];
				Result [k][2]=Sparse2[j][2];
				j++;
				k++;
				}
				else
				{
				Result [k][0]=Sparse1[i][0];
				Result [k][1]=Sparse1[i][1];
				Result [k][2]=Sparse1[i][2];
				i++;
				k++;
			}
		}
	}
	while(i<=l1)
	{
		Result [k][0]=Sparse1[i][0];
		Result [k][1]=Sparse1[i][1];
		Result [k][2]=Sparse1[i][2];
		i++;
		k++;
	}
	   while (j <= l2)
    {
                    Result[k][0] = Sparse2[j][0];
                    Result[k][1] = Sparse2[j][1];
                    Result[k][2] = Sparse2[j][2];
                    j++;
                    k++;
    }
    cout<<"Addition:-"<<endl;
    for (int i = 1 ; i<k ; i++)
    {
        cout<<Result[i][0]<<"  "<<Result[i][1]<<"  "<<Result[i][2]<<endl;
    }
	
	
}
