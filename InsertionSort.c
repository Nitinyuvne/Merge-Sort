#include<stdio.h>
void display(int x[],int n);
void isort(int x[],int n)
{
	int i,j;
	int value;
	for(i=1;i<n;i++)
	{
		value=x[i];
		for(j=i;j>0&&x[j-1]>value;j--)
		{
			x[j]=x[j-1];
		}
		x[j]=value;
		display(x,n);
	}
	
}
void display(int x[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",x[i]);
	}
	printf("\n\n");
}
void main()
{
	int x[]={43,54,32,34,65,40,23,89};
	// display(x,8);
	isort(x,8);
	display(x,8);
}