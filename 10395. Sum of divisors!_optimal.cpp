#include<stdio.h>
#include<math.h>
int main()
{
    long int p, q, count;
    int t, i;
    long int k[38]={2, 4, 9, 16, 25, 64, 289, 729, 1681, 2401, 3481, 4096, 5041, 7921, 10201, 15625, 17161, 27889, 28561, 29929,
         65536, 83521, 85849, 146689, 262144, 279841, 458329, 491401, 531441, 552049, 579121, 597529, 683929, 703921,
         707281, 734449, 829921};
    scanf("%d",&t);
    while(t-->0)

    {

                count=0;
                scanf("%d %d",&p,&q);
                i=0;
                while(i<=36)
                {

                       if((k[i]>=p)&&(k[i]<=q))
                       {
                           count++;

                       }
                       else if (k[i]>q)
                       {
                           break;
                       }

                       i++;
                }
                printf("%d\n",count);
    }
    return 0;
}
