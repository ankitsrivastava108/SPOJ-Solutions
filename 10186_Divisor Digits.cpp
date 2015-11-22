#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    char a[241];
    int num, sum=0, count=0, i, j, sum_8, sum_7, n, ch;
 while(cin>>a  != EOF)
 {   
    
    
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
                        case 1 : count++;
                                 break;
                                 
                        case 2 : if((a[n-1]-'0') %2 ==0)
                                 count++;
                                 break;
                                 
                        case 3 : if(sum%3==0)
                                 count++;
                                 break;
                                 
                        case 4 : if (( ((a[n-2]-'0')%2==0)&&(((a[n-1]-'0')==0)||((a[n-1]-'0')==4)||((a[n-1]-'0')==8)))||(((a[n-2]-'0')%2!=0)&&(((a[n-1]-'0')==2)||((a[n-1]-'0')==6))))
                                 count++;
                                 break;
                                 
                        case 5 : 
                                 if(((a[n-1]-'0')==0)||((a[n-1]-'0')==5))
                                 count++;
                                 break;
                                 
                        case 6 : if(((a[n-1]-'0')%2==0)&&(sum%3==0))
                                 count++;
                                 break;
                                 
                                 
                        case 7 : sum_7=0;
                                 for(j=0; j<n; j++)
                                 {
                                               sum_7 = sum_7*10; 
                                               sum_7 +=  a[j]-'0';
                                               sum_7 -= (int) '0'; 
                                               sum_7 %= 7;                                       
                                 }
                                 if(sum_7==0)
                                 count++;
                                 break;
                        case 8 : sum_8=0;
                                 for(j=n-3; j<n; j++)
                                 {
                                          sum_8 = sum_8*10+ (a[j]-'0');
                                 }
                                 if(sum_8%8==0)
                                 count++;
                                 break;
                        case 9 : if(sum%9==0)
                                 count++;
                                 break;
                        default : 
                                   break;        
              }
             
                                                     
    }
    cout<< count;
}
    getch();
    return 0;
}
