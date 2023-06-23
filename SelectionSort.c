#include<stdio.h>
void display (int x[],int n);
void ssort(int x[],int n)
{
int i,j,t,min;
for(i=0;i<n;i++)
{
min=i;
for(j=i;j<n;j++)
{
if(x[min]>x[j])
{
min=j;
}
}
if(i!=min)
{
t=x[i];
x[i]=x[min];
x[min]=t;
display(x,8);
}
}
}
void display(int x[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",x[i]);
	}
	printf("\n");
}
void main()
{
	int x[]={43,54,32,34,65,40,23,89};
	display(x,8);
	ssort(x,8);
	display(x,8);
}