#include<stdio.h>
#include<math.h>

int main()
{
    int t, a, div, j, n;
    scanf("%d",&t);
    while(t-->0)

    {
                div=0;
                scanf("%d",&n);
                a=(int)sqrt(n);
                if(n>1)
                {

                    for(j=2; j<=a; j++)
                      {
                         if(n%j==0)
                         div = div + j + n/j;
                      }
                    if(a*a==n)
                    div=div-sqrt(n);




                    printf("%d\n",div+1) ;
                }
                else
                printf("0\n");

    }

    return 0;
}
