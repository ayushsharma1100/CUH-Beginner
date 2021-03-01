#include<iostream>
using namespace std;
void read(int arr[8][8],int x, int y)
{
	int i,j;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
		cout<<"Enter value!=";
		cin>>arr[i][j];
	    }
	}
}
void write(int arr[8][8],int x, int y)
{
	int i,j;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
}
int main()
{
	int r,c;
	int a[8][8];
	cout<<"Enter no. of rows=";
	cin>>r;
	cout<<"Enter no. of columns=";
	cin>>c;
	read(a,r,c);
	write(a,r,c);
	return 0;
}
