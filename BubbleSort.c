#include<stdio.h>
void main()
{
int i,j,t,k;
int x[]={5,3,9,2,8};
for(i=3;i>=0;i--)
{
for(j=0;j<=i;j++)
{
if(x[j]>x[j+1])
{
t=x[j];
x[j]=x[j+1];
x[j+1]=t;
}
}
}
for(k=0;k<5;k++)
{
	printf("%d\t",x[k]);
}
}