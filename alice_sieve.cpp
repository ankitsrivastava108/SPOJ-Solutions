#include<iostream.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a[27]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59, 61,67,71 ,73,79,83,89,97,101,103}, t;
    int n, c;
    cin >>t;
    while(t-->0)
    {
              cin>> n;
              if(n%2==0)
              cout<< n/2<< endl;
              else
              cout<< n/2+1<< endl;
    }      
    getch();
    return 0;
}
