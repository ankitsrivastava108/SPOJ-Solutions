#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    unsigned long long  temp, i, j, n, sum, primefactor;
    int t, *primes;
    scanf("%d",&t);
    while(t-->0)
    {
           scanf("%llu",&n);
           primes=malloc(n*sizeof(int));
           for (i=2; i<=n; i++)
           primes[i]=1;

           for (i=2; i<=n; i++)
           {

               if (primes[i])
               for (j=i;i*j<=n;j++)
               primes[i*j]=0;
           }
           sum=1;
           while(n>1)
           {


               temp=1;
               for(i=2; i<n; i++)
               {

                   if((primes[i]==1)&&(n%primes[i]==0))
                   {

                        primefactor=i;
                        break;
                   }
               }

               while (n % primefactor == 0)
               {
                   printf("hi");
                   temp = temp * primefactor + 1;
                   n /= primefactor;
               }
               sum *= temp;
           }
       printf("%llu\n",sum);
    }

return 0;
}
