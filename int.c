#include<stdio.h>
void main()
{
int N[100],sum=0,i,K;
for(i=1;i<=10;i++)
{
scanf("%d",&N[i]);
}
scanf("%d",&K);
for(i=1;i<=K;i++)
{
sum=sum+N[i];
}
printf("%d",sum);
}
