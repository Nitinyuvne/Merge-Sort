#include<stdio.h>
int count=1;
void show(int x[],int n,int g)
{
if(g<1)g=count--;
if(g<1)return;
int i,t;
for(i=0;i<n-g;i++)
{
if(x[i]>x[i+g])
{
t=x[i];
x[i]=x[i+g];
x[i+g]=t;
}
show(x,n,g/1.3);
}
}

void main()
{
int x[]={2,3,4,5,6,7,8,9,10,22,11};
show(x,11,11/1.3);
int i;
for(i=0;i<12;i++)
{
printf("%d\t",x[i]);
}
}