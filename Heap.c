#include<stdio.h>
void show(int x[],int n,int i)
{
int t;
int l=i*2+1;
int r=i*2+2;
int max=i;
if(r<n)
{
	if(x[l]>x[r])
	{
		max=l;
	}
	else
	{
		max=r;
	}
}
else if(l<n)
{
max=l;	
}

if(x[max]>x[i])
{
	t=x[i];
	x[i]=x[max];
	x[max]=t;
   show(x,n,max);
}
}
void showloop(int x[],int n)
{
	int i;
	for(i=n/2-1;i>=0;i--)
	{
		show(x,n,i);
	}
}
void deleteDemo(int x[],int n)
{
	int i,t;
	for(i=n-1;i>0;i--)
	{
		t=x[0];
		x[0]=x[i];
		x[i]=t;
		show(x,i,0);
	}
}
void main()
{
	int x[]={1,2,3,4,5,6,7};
	showloop(x,7);
	deleteDemo(x,7);
	int i;
	for(i=0;i<7;i++)
	{
		printf("%d ",x[i]);
	}
}

/*#include<stdio.h>
void show(int x[],int n,int i)
{
int t;
int l=i*2+1;
int r=i*2+2;
int max=i;
if(r<n)
{
	if(x[l]>x[r])
	{
		max=l;
	}
	else
	{
		max=r;
	}
}
else if(l<n)
{
max=l;	
}
if(x[max]<x[i])
{
	t=x[i];
	x[i]=x[max];
	x[max]=t;
   show(x,n,max);
}
}
void showloop(int x[],int n)
{
	int i;
	for(i=n/2-1;i>=0;i--)
	{
		show(x,n,i);
	}
}
void deleteDemo(int x[],int n)
{
	int i,t;
	for(i=n-1;i>0;i--)
	{
		t=x[0];
		x[0]=x[i];
		x[i]=t;
		showloop(x,i);
	}
}
void main()
{
	int x[]={1,2,3,4,5,6,7};
	showloop(x,7);
	deleteDemo(x,7);
	int i;
	for(i=0;i<7;i++)
	{
		printf("%d ",x[i]);
	}
}*/