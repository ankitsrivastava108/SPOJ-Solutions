#include<iostream.h>
#include<stdio.h>
#include<conio.h>
int reverse(int);
int main()
{
    int ans, n1, n2, r, r1, r2, i, t;
    
    cin >> t;
    for(i=0; i<t; i++)
         {
            cout << endl;
            cin >> n1;
            cin >> n2;
            r1 = reverse(n1);
            r2 = reverse(n2);
            r = r1 + r2;
            ans = reverse(r);
            cout << ans;
    
         }
    
    
    getch();
    return 0;
}                   
int reverse(int a)
{
    int sum=0, b;
    while(a>0)
       {
          b = a%10;
          sum = sum *10 + b;
          a = a/10;
       }       
    return sum;
}          
              
              
                               
    
