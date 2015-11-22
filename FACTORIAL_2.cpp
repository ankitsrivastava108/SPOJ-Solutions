#include<iostream.h>
#include<stdio.h>
#include<conio.h>
int main()
{
    int t, i, fact[100000], j, n, m, k, temp, x ;
    
    cin >> t;
    while(t>0)
        {
              t--;
              
              cin >> n;
              fact[0]=1, m=1;
              for(i=1; i<=n; i++)
                  {
                     temp = 0;
                       
                     for(j=0; j<m; j++)
                         {
                              
                              x = fact[j] * i + temp;
                              fact[j] = x % 10;
                              temp = x / 10;
                              k--;
                         }
                     while(temp != 0)
                         {
                              fact[m] = temp % 10;
                              temp = temp / 10;
                              m++;
                         }          
                  }      
              for(i=m-1; i>=0; i--)
                 {
                       cout << fact[i];
                 }        
              cout << endl;         
        }
              

   getch();
   return 0;
}              
