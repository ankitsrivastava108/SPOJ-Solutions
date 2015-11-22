#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<cmath>
int main()
{
    long int n1, n2, j, k, t, i, c, s;
    
    
    
    cin >> t;
    for(i=0; i<t; i++)
         {
             
             cin >> n1;
             cin >> n2;
             if(n2-n1<=100000)
             {
               for (j=n1; j<=n2; j++)
                 {
                        
                     if(j==2)
                         {
                             
                           cout << j << endl;
                         }
                     else if((j!=2)&&(j!=1))
                         {   
                           c=0;      
                           s = sqrt(j);  
                           for(k=2; k <=s; k++)
                              {
                                    
                                 if(j%k==0)        
                                     {
                                                   
                                        c++;
                                     }
                              }
                           if(c==0)
                              {   
                                 cout << j << endl;
                              }
                         }
             
                 }
             }    
             cout << endl;                
         }
    getch();
    return 0;
}                                                                               
                          
                          
                          
                          
                          
