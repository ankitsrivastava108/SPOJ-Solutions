#include<stdio.h>
int main()
{

  long long th, thl, s, n, t, diff, d, a, i;
  scanf("%lld",&t);
  while(t-->0)
  {
      scanf("%lld %lld %lld",&th,&thl,&s);
      n=(2*s)/(th+thl);
      diff=thl-th;
      d=diff/(n-5);
      a=th-2*d;
      printf("%lld\n",n);
      for(i=0; i<n; i++)
      {
          printf("%lld ",a+d*i);
      }
  }
      getch();
      return 0;
}
