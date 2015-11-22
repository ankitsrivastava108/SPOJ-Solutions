#include<iostream.h>
#include<math.h>
#include<conio.h>
int main()
{
    long t, div, j, n, a;
    cin >> t;
    while(t-->0)
    {
                div=0;
                cin>> n;
                for(j=2; j<=sqrt(n); j++)
                {
                         if(n%j==0)
                         {
                           a=n/j;
                           if(j==sqrt(n))        
                           div = div + j ;
                           else
                           div = div + j + a;
                         }
                }
                cout<< div+1 <<endl;
    }
    getch();
    return 0;
}
