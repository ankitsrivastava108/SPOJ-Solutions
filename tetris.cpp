#include<iostream.h>
#include<conio.h>
int main()
{
    long long w, h, a, b, t, gcd;
    cin>> w>>h;
    while((w!=0)&&(h!=0))
    {
                if(h%w==0)
                {
                          cout<< h/w<< endl;
                }
                else
                {
                    a = h;
                    b = w;
 
                    while (b != 0) 
                    {
                           t = b;
                           b = a % b;
                           a = t;
                    }
                    gcd = a;
                    if(gcd==1)
                    {
                              cout<< w*h<< endl;
                    }
                    else
                    {
                              cout<< (w*h)/(gcd*gcd)<< endl;;
                    }
                }
                cin>> w>> h;        
   }
    getch();
    return 0;
}
