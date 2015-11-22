# include <iostream>
# include<map>
#include<conio.h>
using namespace std;
int main()
{
       
        int t;
        int n1;
        cin>>t;
        int k;
        for(k = 0; k < t; k++){
               
                map<int,string>m;
                map<int,string>::iterator it;
                string a,b,c;
                cin>>n1;
                for(int op = 0; op < n1 ;op++){
                cin>>a;
                int i;
                int j;
                for( i = 0; a[i] != ':';i++);
                c = a.substr(0,i);     

                j = i+1;
                b = a.substr(j,a.size());
                if(b.size()<16){
                if( c == "ADD"){
                        int s = 0;
                        for(int p = 0; p < b.size();p++){
                                s = s+((int)b[p]*(p+1));
                        }
                        int ci;
                        s = s*19;
                        ci = s%101;
                        int l;
                        for(int p = 1; p < 20;p++){
                                l = ci+(p*p)+(23*p);
                                l = l%101;
                                if(m.count(l)){
                                        break;
                                }
                                if( !m.count(l)){
                                        m.insert(pair<int,string>(l,b));
                                        break;
                                }
                        }
                }
                else if ( c == "DEL"){
                                for(it = m.begin();it != m.end();it++){
                                        if(b == (*it).second){
                                                m.erase(it);
                                        }
                                }
                }
        }
        }
       
                int count = 0;
                for(it = m.begin();it != m.end();it++){
                        count++;
                }
                cout<<count<<endl;
                for(it = m.begin();it != m.end();it++){
                        cout<<(*it).first<<":"<<(*it).second<<endl;
                }
}
getch();
        return 0;
}
