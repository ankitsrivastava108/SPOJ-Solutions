#include<stdio.h>
#include<math.h>
int main()
{

  unsigned long long int th, D, fo, s, n, n2, diff, d1, a, i, n1, d2, a1, a2, sum, disc;
  int t;
  scanf("%d",&t);
  while(t-->0)
  {

      scanf("%llu %llu %llu",&th,&fo,&s);

      diff=fo-th;
      if(diff==0)
      {
          if(th>0)
          {
              n=s/th;
              if((n>=7)&&(n*(th+fo)==2*s))
              {
                   printf("%lld\n",n);
                   for(i=0; i<n; i++)
                   printf("%lld ",th);
              }
          }
      }
      else
      {
          sum=th+fo;

          D=((7*th+5*fo+2*s)*(7*th+5*fo+2*s)- 48*s*(th+fo));



          if(D>0)
          {
               disc=(unsigned long long int) sqrtl(D);
               n1=((7*th + 5*fo + 2*s)+disc);
               n1=n1/(2*sum);
               //n2=((-(diff-6*sum-2*s)-disc)/(2*sum));
               if(n1>=7)
               {

                     d1=(diff/(n1-6));
                     a1=(th-2*d1);
                     if(((a1+(n1-1)*d1)>0)&&(n1*(th+fo+d1)==2*s)&&(a1+2*d1==th)&&(a1+(n1-4)*d1==fo))
                     {
                          printf("%lld\n",n1);
                          for(i=0; i<n1; i++)
                          {
                              printf("%lld ",a1);
                              a1=a1+d1;
                          }

                     }
               }
               /****else if(n2>=7)
               {

                     d2=(diff/(n2-6));
                     a2=(th-2*d2);
                     if(((a2+(n2-1)*d2)>0)&&(n2*(th+fo+d2)==2*s)&&(a2+2*d2==th)&&(a2+(n2-4)*d2==fo))
                     {
                         printf("%lld\n",n2);
                         for(i=0; i<n2; i++)
                         printf("%lld ",a2+d2*i);

                     }
               }***/
          }

      }
      printf("\n");

  }
      getch();
      return 0;
}
