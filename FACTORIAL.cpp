#include<iostream.h>
#include<stdio.h>
#include<conio.h>
int main()
{
    long int n, sum, i, t, j; 
    
    cin >> t;
    for(j=0; j<t; j++)
        {   
            sum = 0;
            
            cin >> n;
            for(i=5; n/i!=0; i=i*5)
                {
                   sum = sum + n/i;
                }
            cout << sum << endl;
        }     
                 

   getch();
   return 0;
}              
