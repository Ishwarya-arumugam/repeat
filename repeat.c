#include<stdio.h>
void main()
{
int a[100],i,b;
printf("Enter the number");
scanf("%d",&b);
for(i=0;i<b;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<b;i++)
{
if(a[i]==i)
printf("%d",i);
}
}
