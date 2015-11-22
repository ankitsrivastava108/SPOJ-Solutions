#include<iostream.h>
#include<conio.h>
class next
{
    public:
    long int n1, n2, n3;
    int flag;         
    void APorGP()
     { 
      flag=1;
      while(flag==1)
         {
                          cin >>n1 >>n2 >>n3;
                          if((n1==0)&&(n2==0)&&(n3==0))
                            {
                                      exit(0);
                            }     
                          else if((n2-n1)==(n3-n2))
                            {
                                      cout << "AP\t" << n3+n3-n2 <<endl;
                            }
                          else
                            {
                                      cout << "GP\t" << n3*n3/n2 <<endl;
                            }
                          
                       
         }
     }
};
int main()
{
    next n;
    n.APorGP();
    getch();
    return 0;
    
}            
