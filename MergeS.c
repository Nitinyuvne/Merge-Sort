#include<stdio.h>
void sum(int x[],int a[],int b[],int n1,int n2);
void show(int x[],int n)
{
if(n<=1)return;
int m1=n/2;
int m2=n-m1;
int i;
int a[m1];
int b[m2];
for(i=0;i<m1;i++)
{
	a[i]=x[i];
}
for(i=0;i<m2;i++)
{
	b[i]=x[m1+i];
}
show(a,m1);
show(b,m2);
sum(x,a,b,m1,m2);
}
void sum(int x[],int a[], int b[],int n1,int n2)
{
	int i,j,k;
	for(i=0,j=0,k=0;i<n1&&j<n2;)
	{
		if(a[i]<b[j])
		{
			x[k++]=a[i++];
		}
		else
		{
			x[k++]=b[j++];
     	}
	}
while(i<n1)	
	x[k++]=a[i++];

while(j<n2)	
	x[k++]=b[j++];
}
void main()
{
	int i;
	int x[]={1,3,5,7,4,5,4,};
	show(x,7);
	for(i=0;i<7;i++)
	{
		printf("%d\t",x[i]);
	}
}