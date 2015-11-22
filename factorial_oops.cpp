#include<iostream.h>
#include<conio.h>
class factorials
{
      public:      
      long int sum, i;
      int number_of_zeroes(long int m)
          {
             sum = 0;
             
             for(i=5; m/i!=0; i=i*5)
                    {
                       sum = sum + m/i;
                    }
             return sum;
          }
};
int main()
{
    factorials fact_zero;
    long int ans, n; 
    int t, j; 
    cin >> t;
    for(j=0; j<t; j++)
        {   
          cin >> n;  
          ans = fact_zero.number_of_zeroes(n);
          cout << ans << endl;   
        }     
    getch();
    return 0;
} 
