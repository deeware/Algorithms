#include<bits/stdc++.h> 
using namespace std;

void swap(int &x,int &y)
{
	int t=x;
	x=y;
	y=t;
}


int partition(int a[],int l,int r)
{
	int pivot=a[r];
	int i=l-1;
	
	for(int j=l;j<=r-1;j++)
	{
		if(pivot>a[j])
		{
			swap(a[++i],a[j]);
		}
	}
	
	swap(a[++i],a[r]);
	return i;
}

void Q_sort(int a[],int l,int r)
{
	
	if (l<r)
	{	int pos=partition(a,l,r);
		Q_sort(a,l,pos-1);
		Q_sort(a,pos+1,r);
	}
	
	 	
}



int main()
{
	int n,m=-1;
	
	
	cout<<"Enter no. of elements :";
	cin>>n;
	
	int a[n]={0};
	cout<<"Enter the elements : ";
	for (int i=0;i<=n-1;i++)
	{
		a[i]=rand();
		if (a[i]>m) 	m=a[i];
	}
	
	
	clock_t time_req;
	time_req=clock();
	
	Q_sort(a,0,n-1);
		
	cout<<"The Sorted Array is : ";
	for(int i=0;i<=n-1;i++)
	{
		cout<<a[i]<<" ";
	}
	
	time_req=clock()-time_req;
	cout<<"\nExecution Time : "<<((float)time_req)/CLOCKS_PER_SEC<<endl;
		
}
