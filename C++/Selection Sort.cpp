#include<iostream>
const int  max =100;

void selectionSort(int A[max],int n)
{
int i;
int j;
int temp;
int min;
int loc;
for(i=0;i<=n-1;i++)
{
	min=A[i];
	loc=i;
	for(j=i+1;j<=n-1;j++)
	{
		if (A[j]<min){
		min=A[j];
		loc=j;
	}
}
if (loc!=i)
{
    A[i]=temp;
	A[i]=A[loc];
	A[loc]=temp;
}
}
}
int main()
{
	int n;
	std::cout<<"Enetr the number of elements of the array:-";
	std::cin>>n;
	int A[max];
	std::cout<<"Enter the elements of the array:-\n";
	for(int i=0;i<n;i++){
		std::cout<<"Elements"<<i+1<<":";
		std::cin>>A[i];
		
	}
	selectionSort(A,n);
	std::cout<<"Sorted Array:-\n";
	for(int i=0;i<n;i++){
		std::cout<<A[i]<<" ";
	}
	return 0;
}
