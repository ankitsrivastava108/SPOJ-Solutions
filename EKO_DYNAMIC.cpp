#include<iostream.h>
#include<conio.h>
class height
{
      public:
      long long int m, n, c, *a, i, j, h1, l, temp, total; 
      int sum, flag;
      void max_height()
      {
         total=0;
         cout << "enter m and n";
         cin >> m >> n;
         long long int *a = new long long int(m);
         for(i=0; i<m; i++)
                  {
                          cin >> h1;
                          a[i] = h1;
                          total =total + a[i];
                  }
         if(total >= n)
         {       
           for (j=1; j<m; j++)
                  {
                          temp = a[j];          
                          i=j-1;
                          while((i>=0)&&(a[i]>temp))
                          {
                                 a[i+1] = a[i];
                                 i=i-1;
                          }
                          a[i+1] = temp;
                  } 
           c = a[m-1];   
           flag = 1;      
           while((c >=0)&&(flag==1))
                  {
                          sum = 0;
                          for(l=m-1; ((a[l]>=c)&&(l>=0)); l--)
                              {
                                     
                                     sum = sum + a[l] - c;
                                     
                                     if(sum >= n)
                                     {
                                                  
                                               flag=0;
                                     }
                              }    
                          c--;       
                  }       
                          
                 cout << c+1;         
           }
           else
           {
               exit(0);
           }                         
      }                  
};
int main()
{
    height tree;
    tree.max_height();
    getch();
    return 0;
}                       
           
