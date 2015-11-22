#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int  c;
    char a[241];
    int num, i, j, l, n, ch, k, sum_7, sum_8, ch1[500];
    for(i=0;i<500;i=i+6)
    {
         ch1[i]=-2;
         ch1[i+1]=-3;
         ch1[i+2]=-1;
         ch1[i+3]=2;
         ch1[i+4]=3;
         ch1[i+5]=1;

    }

while(scanf("%s",a)!=EOF)
 {
    long long sum=0;
    int count=0;
    n= strlen(a);
    a[n]='\0';
    for(i=0; i<n; i++)
    {

       sum = sum + a[i]-'0';

    }


    for(i=0; i<n; i++)
    {

              ch= a[i]-'0';

              switch(ch)
              {
                        case 1 : {
                                 count++;
                                 break;
                                 }

                        case 2 : {
                                 if((a[n-1]-'0') %2 ==0)
                                 count++;
                                 break;
                                 }
                        case 3 : {
                                 if(sum%3==0)
                                 {
                                     count++;

                                 }
                                 break;
                                 }
                        case 4 : {
                                 if(n==1)
                                 {
                                      count++;
                                      break;
                                 }
                                 else
                                 {
                                 if (( ((a[n-2]-'0')%2==0)&&(((a[n-1]-'0')==0)||((a[n-1]-'0')==4)||((a[n-1]-'0')==8)))||(((a[n-2]-'0')%2!=0)&&(((a[n-1]-'0')==2)||((a[n-1]-'0')==6))))
                                 count++;
                                 break;
                                 }
                                 }
                        case 5 : {
                                 if(((a[n-1]-'0')==0)||((a[n-1]-'0')==5))
                                 count++;

                                 break;
                                 }
                        case 6 : {
                                 if(((a[n-1]-'0')%2==0)&&(sum%3==0))
                                 count++;
                                 break;
                                 }

                        case 7 : {

                                    sum_7=0;
                                    for(j=0;j<=n-1;j++)
                                    {
                                        sum_7=sum_7+((a[j]-'0')*(ch1[j]));
                                    }

                                    if(sum_7%7==0)
                                    {

                                        count++;

                                    }
                                    break;
                                 }

                        case 8 : {
                                 sum_8=0;
                                 if(n==1)
                                 count++;
                                 else if(n==2)
                                 {
                                    for(j=n-2; j<n ; j++)
                                    {
                                          sum_8 = sum_8*10+ (a[j]-'0');
                                    }
                                    if(sum_8%8==0)
                                    count++;

                                 }
                                 else
                                 {
                                    for(j=n-3; j<n ; j++)
                                    {
                                          sum_8 = sum_8*10+ (a[j]-'0');
                                    }
                                    if(sum_8%8==0)
                                    count++;
                                 }
                                 break;
                                 }
                        case 9 : {
                                 if(sum%9==0)
                                 count++;
                                 break;
                                 }
                        default :{
                                   break;
                                 }
              }


    }
    printf("%d\n",count);
}

    return 0;
}
