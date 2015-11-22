#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    long long int *s, c, i, j, k, temp, n, r, t, div;
    int game;
    
    cin >> t;
    while(t-- >0)
    {
              
              cin >> n >> game;
              
              long long int *s= new long long int(n);
              for(i=0; i<n; i++)
              {
                      
                       s[i]=i+1;
              }
              for (j=1; j<n; j++)
              {
                      temp = s[j];          
                      i=j-1;
                      while((i>=0)&&(s[i]>temp))
                      {
                            s[i+1] = s[i];
                            i=i-1;
                      }
                      s[i+1] = temp;
              }
              srand(time(0));
              while(n > 0)
              {
                      r = rand() % n;
                      div = s[r];
                      
                      for(k=r; k<n-1; k++)
                      {
                             
                               s[r] = s[r+1];
                      }
                      n--;
                      c=0;
                      for(j=0; j<r; j++)
                      {       
                                
                               if(div % s[j] == 0)
                               {
                                      c++;
                                      for(k=j; k<n-1; k++)
                                      {
                                               
                                               s[k] = s[k+1];
                                      }
                               }
                      }
                      n=n-c;         
                      if(game == 1)
                        {
                              game =0;
                        }
                      else
                        {
                              game=1;
                        }  
              }
              if(game==0)
              {
                         cout<<"Pagfloyd wins" <<endl;
              }
              else
              {
                  cout<<"Airborne wins"<<endl;
              }        
}                       
    getch();
    return 0;

}
     
