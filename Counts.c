#include<stdio.h>
void show(int x[],int n)
{
   int i;
   int min=x[0];
   int max=x[0];
   for(i=0;i<n;i++)
   {
	   if(min>x[i])min=x[i];
	   if(max<x[i])max=x[i];
   }
   max++;
   int a[max-min];
   for(i=0;i<max-min;i++)
   {
   a[i]=0;
   }
   int y[n];
   for(i=0;i<n;i++)
   {
	   a[x[i]-min]++;
   }
   
   for(i=1;i<max-min;i++)
   {
	   a[i]+=a[i-1];
   }
   for(i=0;i<n;i++)
   {
   y[a[x[i]-min]-=1]=x[i];
   }
   for(i=0;i<n;i++)
   {
   x[i]=y[i];
   }
}
void main()
{
	int i;
	int x[]={2,7,-20,7,3,-400,5,9};
	show(x,8);
	for(i=0;i<8;i++)
   {
		printf("%d\t",x[i]);
   }
} 