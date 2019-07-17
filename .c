#include<stdio.h>
int main()
{
int a,f=0,i;
scanf("%d",&a);
for(i=2,i<=n/2;i++)
{
if(n%i==0)
{
f=1;
break;
}
}
if(a==1)
{
printf("either prime or not");
}
if(f==0)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
