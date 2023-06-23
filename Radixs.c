#include<stdio.h>
void display(int x[],int n);
void show(int x[],int n,int div)
{
   int i;
   int a[10]={0};
   int y[n];

   for(i=0;i<n;i++)
   {
	   a[x[i]/div%10]++;
   }
   
   for(i=1;i<10;i++)
   {
	   a[i]+=a[i-1];
   }
   
   for(i=n-1;i>=0;i--)
   {
   y[a[x[i]/div%10]-=1]=x[i];
   }
   
   for(i=0;i<n;i++)
   {
   x[i]=y[i];
   }
   
}
void rsort(int x[],int n)
{
int max=x[0];
int i;
for(i=0;i<n;i++)
{
if(max<x[i])max=x[i];
}
for(i=1;i<=max;i=i*10)
{
show(x,n,i);
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
printf("\n");
}
void main()
{
	int i,n=7;
	int x[]={329,4587,6579,9839,436,720,355};
	rsort(x,n);	
} 