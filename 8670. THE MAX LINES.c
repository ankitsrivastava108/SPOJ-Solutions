#include<stdio.h>
int main()
{
int t,i=1;
double r,s;
scanf("%d",&t);
while(t--)
{
scanf("%lf",&r);
s=4*r*r+0.25;
printf("Case %d: ",i);
printf("%.2lf\n",s);
i=i+1;
}
return 0;
}
