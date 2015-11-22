#include<stdio.h>
#include<math.h>
int main()
{
    long long int mul, a, div, j, p, b, q, i, c, count;
    int t;
    scanf("%d",&t);
    while(t-->0)

    {

                scanf("%lld %lld",&p,&q);

                if(p>=3)
                {

                      i=ceil(sqrt(p));
                      count=0;
                      for(; i*i<=q; i++)
                      {
                          mul=i*i;
                          c=0;

                          div=0;
                          a=sqrt(mul);
                          for(j=2; j<=a; j++)
                          {
                           if(mul%j==0)
                           div = div + j + mul/j;

                          }
                          if(a*a==mul)
                          div=div-sqrt(mul);
                          div=div+mul+1;
                          b=(long long int)sqrt(div);
                          for(j=2; ((j<=b)&&(c==0)); j++)
                          {
                              if(div%j==0)
                              {
                                  c++;
                              }
                          }

                          if((c==0)&&(mul>1))
                          count++;

                      }
                printf("%lld\n",count);
                }
                else
                {
                      if((p==1)&&(q==1))
                      count=0;
                      else
                      count=1;
                      i=2;

                      for(; i*i<=q; i++)
                      {
                          mul=i*i;
                          c=0;
                          div=0;
                          a=(long long int)sqrt(mul);
                          for(j=2; j<=a; j++)
                          {
                           if(mul%j==0)
                           div = div + j + mul/j;

                          }
                          if(a*a==mul)
                          div=div-sqrt(mul);
                          div=div+mul+1;
                          b=(long long int)sqrt(div);
                          for(j=2; ((j<=b)&&(c==0)); j++)
                          {
                              if(div%j==0)
                              c++;
                          }

                          if((c==0)&&(i>1))
                          count++;

                      }
                printf("%lld\n",count);
                }
    }

    return 0;
}
