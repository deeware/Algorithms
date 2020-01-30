#include<iostream>
using namespace std;

int main()
{
	int A[2][2]={0},B[2][2]={0},C[2][2]={0};
	
	for(int i=0;i<2;i++)
	{
		for (int j=0;j<2;j++)
		{
			cin>>A[i][j];
		}
		cout<<endl;
	}
	for(int i=0;i<2;i++)
	{
		for (int j=0;j<2;j++)
		{
			cin>>B[i][j];
		}
		cout<<endl;
	}
	
	int s1=(A[0][0]+A[1][1])*(B[0][0]+B[1][1]);
	int s2=(A[1][0]+A[1][1])*B[0][0];
	int s3=A[0][0]*(B[0][1]-B[1][1]);
	int s4=A[1][1]*(B[1][0]-B[0][0]);
	int s5=(A[0][0]+A[0][1])*B[1][1];
	int s6=(A[1][0]-A[0][0])*(B[0][0]+B[0][1]);
	int s7=(A[0][1]-A[1][1])*(B[1][0]+B[1][1]);
	
	C[0][0]=s1+s4-s5+s7;
	C[0][1]=s3+s5;
	C[1][0]=s2+s4;
	C[1][1]=s1+s3-s2+s6;
	
	for(int i=0;i<2;i++)
	{
		cout<<'|';
		for (int j=0;j<2;j++)
		{
			cout<<C[i][j]<<"\t";
		}
		cout<<"|"<<endl;
	}
}
