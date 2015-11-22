#include<stdio.h>
#include<string.h>
int main()
{

  char qe[25];
  long long  int a, b, c, d, n1, n2, n3;
  int t, n, i, j, k;
  n=strlen(qe);
  qe[n]='\0';
  scanf("%d",&t);
  while(t-->0)
  {

      scanf("%s",&qe);
      if(((qe[0]>65)&&(qe[0]<91))||((qe[0]>97)&&(qe[0]<122)))
      {
          a=1;
          i=3;
          if(qe[i]!='=')
          {

              if(((qe[i+1]>=65)&&(qe[i+1]<=91))||((qe[i+1]>=97)&&(qe[i+1]<=122)))
              {
                   if(qe[i]=='-')
                   b=-1;
                   else
                   b=1;

                   j=i+2;

                   if(qe[j]!='=')
                   {

                       n3=0;
                       for(k=j+1; ((qe[k]>=48)&&(qe[k]<=57)); k++)
                       {
                             n3=n3*10+qe[k]-'0';
                       }

                       if(qe[j]=='-')
                       c=-n3;
                       else
                       c=n3;
                   }
                   else
                   c=0;

              }

              else
              {
                  n2=0;
                  for(j=i+1; ((qe[j]>=48)&&(qe[j]<=57)); j++)
                  {

                      n2=n2*10+qe[j]-'0';
                  }
                  if(qe[j]!='=')
                  {
                      if(qe[i]=='-')
                      b=-n2;
                      else
                      b=n2;
                      j=j+2;
                      if(qe[j]!='\0')
                      {
                         n3=0;
                         for(k=j+1; ((qe[k]>=48)&&(qe[k]<=57)); k++)
                         {
                              n3=n3*10+qe[k]-'0';
                         }
                         if(qe[j]=='-')
                         c=-n3;
                         else
                         c=n3;
                      }
                      else
                      c=0;
                  }


                  else
                  {
                      b=0;
                      if(qe[i]=='-')
                      c=-n2;
                      else
                      c=n2;
                  }
               }
          }
          else
          {
              b=0;
              c=0;
          }
     }

     else
     {
         n1=0;
          for(i=0; ((qe[i]>=48)&&(qe[i]<=57));i++)
          {
              n1=n1*10+qe[i]-'0';
          }
          a=n1;
          i=i+4;

          if(qe[i]!='=')
          {

             if(((qe[i+1]>=65)&&(qe[i+1]<=91))||((qe[i+1]>=97)&&(qe[i+1]<=122)))
             {
                  if(qe[i]=='-')
                  b=-1;
                  else
                  b=1;
                  j=i+2;
                  if(qe[j]!='=')
                   {
                       n3=0;
                       for(k=j+1; ((qe[k]>=48)&&(qe[k]<=57)); k++)
                       {
                           n3=n3*10+qe[k]-'0';
                       }
                       if(qe[j]=='-')
                       c=-n3;
                       else
                       c=n3;
                   }
                   else
                   c=0;

             }
             else
             {
                   n2=0;
                   for(j=i+1; ((qe[j]>=48)&&(qe[j]<=57));j++)
                   {
                       n2=n2*10+qe[j]-'0';
                   }

                   if(qe[j]!='=')
                   {
                       if(qe[i]=='-')
                       b=-n2;
                       else
                       b=n2;

                       j=j+2;
                       if(qe[j]!='=')
                       {
                           n3=0;
                           for(k=j+1; ((qe[k]>=48)&&(qe[k]<=57)); k++)
                           {
                               n3=n3*10+qe[k]-'0';
                           }

                           if(qe[j]=='-')
                           c=-n3;
                           else
                           c=n3;
                       }
                       else
                       c=0;
                   }
                   else
                   {
                      b=0;
                      if(qe[i]=='-')
                      c=-n2;
                      else
                      c=n2;
                   }
             }
          }
          else
          {
             b=0;
             c=0;
          }
      }
      d= b*b-4*a*c;

      if(d>0)
      printf("Distinct real roots.\n");
      else if(d<0)
      printf("Imaginary roots.\n");
      else
      printf("Equal roots.\n");
   }
   return 0;
}






