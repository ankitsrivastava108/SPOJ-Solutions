#include<iostream.h>
#include<stdio.h>
#include<conio.h>
int main()
{
   long int sum, y, n, num, a, t, i, flag;
    
    
    cin >> t;
    for(i=0; i<t; i++)
        {  
             flag=0;
             
             cin >> n;
             while(flag==0)
                {     
                      sum=0;    
                      n=n+1 ;                                       
                      y=n;
                      num=n;
                      while(num>0)
                         {
                           a=num%10;
                           sum=a+sum*10;
                           num=num/10;
                           
                         }                        
                      if(y==sum)
                      { 
                                  
                         cout << y;                               
                         flag=1;
                      }
                }     
                   
        }                              
                 
    getch();
    return 0;
 }             
