#include<iostream.h>
#include<stdio.h>
#include<conio.h>
int main()
{
    
    long long int i, t, p, n1, less, n2, j, k;
    
    cin >> t;
    for(i=0; i<t; i++)
         {
             
             cin >> n1;
             cin >> n2;
             if (n2-n1<=100000)
             {
             char a[n2-n1+1];
             for(j=0; j<n2-n1+1; j++)
                {
                       a[j]='t';
                }
             for(p=2; p*p<=n2; ++p)
                {
                       less = n1 / p;
                       less *= p; 

                       for(j=less; j<=n2; j+=p) 
                           {
                                 if(j != p && j >= n1)
                                  {
                                      a[j-n1] = 'f';
                                  }
                           }
                }          
             for(k=0; k<n2-n1+1; k++)
                {
                       
                                  if((a[k] == 't' )&& (n1+k != 1))
                                      {  
                                         cout << k+n1 << endl;
                                      }   
                          
                                                  
                }
             }   
            cout << endl;          
         } 
     
    getch();
    return 0;
}
                  
