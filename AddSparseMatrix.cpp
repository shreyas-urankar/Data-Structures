//WRITE A C++ PROGRAM TO ADD TWO SPARSE MATRIX

#include<iostream>

using namespace std;
void SparseMatrixRepresentation()
{
	int rows;
	 int columns;
	 int Matrix[100][100];
	 cout<<"Enter the number of rows:-";
	 cin>>rows;
	 cout<<"Enter number of columns:-";
	 cin>>columns;
	 for(int i=0;i<rows;i++){
	 	for(int j=0;j<columns;j++)
		{
	 		cin>>Matrix[i][j];
		}
	 }
	 cout<<endl;
	 cout<<"Rows"<<" "<<"Columns"<<" "<<"Values"<<endl;
	 int count = 0;
	 for(int i=0;i<rows;i++){
	 	for(int j=0;j<columns;j++){
	 		if(Matrix[i][j]!=0){
	 			count++;
			 }
		 }
	 }
	 cout<<"Rows"<<" "<<"Columns"<<" "<<count<<endl;
	 for(int i=0;i<rows;i++){
	 	for(int j=0;j<columns;j++){
	 		if(Matrix[i][j]!=0){
	 			cout<<i<<" "<<j<<" "<<Matrix[i][j]<<endl;
			 }
	     }
	}
}
void SparseMatrixAddition()
{
	int row1,row2;
	int SparseMatrix1[100][3];
	int SparseMatrix2[100][3];
	cout<<"Enter the number of rows in 1st sparse matrix:-";
	cin>>row1;
	for(int i=0;i<row1;i++){
		for(int j=0;j<3;j++){
			cin>>SparseMatrix1[i][j];
		}
	}cout<<endl;
	cout<<"Enter number of rows in 2nd sparse matrix:-";
	cin>>row2;
	for(int i=0;i<row1;i++){
		for(int j=0;j<3;j++){
			cin>>SparseMatrix1[i][j];
		}
	}
	cout<<"Addition is:-"<<endl;
	int i=1,j=1,k=1;
	int l1=SparseMatrix1[0][2];
	int l2=SparseMatrix2[0][2];
	int Result[100][3];
	while(i<=l1&j<l2)
	{
		if(SparseMatrix1[i][0]==SparseMatrix2[j][0])
{
         if(SparseMatrix1[i][1]=SparseMatrix2[j][1]){
         	Result[k][0]=SparseMatrix1[i][0];
         	Result[k][1]=SparseMatrix1[i][1];
         	Result[k][2]=SparseMatrix1[i][2]+SparseMatrix2[j][2];
         	i++;
         	j++;
         	k++;
		 }
		 else{
		 	if(SparseMatrix1[i][1]>SparseMatrix2[j][0])
		 	{
		 	Result[k][0]=SparseMatrix2[j][0];
         	Result[k][1]=SparseMatrix2[j][1];
         	Result[k][2]=SparseMatrix2[j][2];
         	j++;
         	k++;	
			 }else{
			Result[k][0]=SparseMatrix1[i][0];
         	Result[k][1]=SparseMatrix1[i][1];
         	Result[k][2]=SparseMatrix1[i][2];
         	i++;
         	k++;
			 }
		 }
	}while(i<=l1){
			Result[k][0]=SparseMatrix1[i][0];
         	Result[k][1]=SparseMatrix1[i][1];
         	Result[k][2]=SparseMatrix1[i][1];
         	i++;
         	k++;
        	}	while(j<=l2){
        	Result[k][0]=SparseMatrix2[j][0];
         	Result[k][1]=SparseMatrix2[j][1];
         	Result[k][2]=SparseMatrix2[j][2];
         	j++;
         	k++;	
			}
			for(int i=1;i<k;i++){
				cout<<Result[i][0]<<" "<<Result[i][1]<<" "<<Result[i][2]<<endl;
			}
}
}
int main()
{
	int choice;
	while(true){
	cout<<"MENU:-"<<endl;
	cout<<"1:Sparse Matrix Representation"<<endl;
	cout<<"2:Sparse Matrix Addition"<<endl;
	cout<<"3:Exit"<<endl;
	cout<<"Entewr your coice:-";
	cin>>choice;
	switch(choice){
		case 1:
			SparseMatrixRepresentation();
			break;
		 case 2:
		 	SparseMatrixAddition();
		 	break;
		 	case 3:
		 		return 0;
		 		default:
		 			cout<<"Invalid choice. Please try again."<<endl;
	}
}
}

