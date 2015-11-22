#include<stdio.h>
#include<math.h>
int main()
{

  long long th, D, fo, s, n, n2, t, diff, d1, a, i, n1, d2, a1, a2, sum, disc;
  scanf("%lld",&t);
  while(t-->0)
  {
      scanf("%lld %lld %lld",&th,&fo,&s);

      diff=fo-th;
      if(diff==0)
      {
          n=s/th;
          printf("%lld\n",n);
          for(i=0; i<n; i++)
          printf("%lld ",th);

      }
      else
      {
          sum=th+fo;

          D=(diff+6*sum-2*s)*(diff+6*sum-2*s)-4*6*diff*sum;



          if(D>0)
          {
               disc= sqrt(D);
               if((-(diff+6*sum-2*s)+disc)%12==0)
               d1=(-(diff+6*sum-2*s)+disc)/12;
               if((-(diff+6*sum-2*s)-disc)%12==0)
               d2=(-(diff+6*sum-2*s)-disc)/12;
               n1=diff/d1+6;
               n2=diff/d2+6;
               if((n1>=7)&&(n1*(th+fo+d1)==2*s))
               {
                     a1=th-2*d1;

                     for(i=0; i<n1; i++)
                     {
                          if(a1+d1*i>0)
                          printf("%lld ",a1+d1*i);
                     }
               }
               else if((n2>=7)&&(n2*(th+fo+d2)==2*s))
               {
                     a2=th-2*d2;

                     for(i=0; i<n2; i++)
                     {
                          if(a2+d2*i>0)
                          printf("%lld ",a2+d2*i);
                     }
               }
          }

      }

  }
      getch();
      return 0;
}
