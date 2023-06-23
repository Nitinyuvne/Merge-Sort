#include<stdio.h>
void csort(int x[],int n,int g)
{
if(g<=1)return;
int i,t;
for(i=0;i<n-g;i++)
{
if(x[i]>x[i+g])
{
t=x[i];
x[i]=x[i+g];
x[i+g]=t;
}
}
csort(x,n,g/2);
}

void isort(int x[],int n)
{
int i,j,t,value;
for(i=1;i<n;i++)
{
value=x[i];
for(j=i;j>0&&x[j-1]>value;j--)
    {
			x[j]=x[j-1];
	}
		x[j]=value;
}
}

void ssort(int x[],int n)
{
csort(x,n,n/2);
isort(x,n);
}

void main()
{
int x[]={102,2,3,4,5,6,78,88,9};
ssort(x,9);
int i;
for(i=0;i<9;i++)
{
printf("%d\t",x[i]);
}
}

