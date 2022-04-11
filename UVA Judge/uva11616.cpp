#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    fellow_junior
    string a;
    ll c,d,e,f,i,j,k,l;
    while(cin>>a)
    {
        l=a.size();
        if(a[0]>='A' && a[0]<='Z')
        {
            c=0;
            for(i=0; i<l; i++)
            {
                if(a[i]=='I' && a[i+1]=='V')
                {
                    c+=4;
                    i+=1;
                }
                else if(a[i]=='I' && a[i+1]=='X')
                {
                    c+=9;
                    i+=1;
                }
                else if(a[i]=='X' && a[i+1]=='L')
                {
                    c+=40;
                    i+=1;
                }
                else if(a[i]=='X' && a[i+1]=='C')
                {
                    c+=90;
                    i+=1;
                }
                else if(a[i]=='C' && a[i+1]=='D')
                {
                    c+=400;
                    i+=1;
                }
                else if(a[i]=='C' && a[i+1]=='M')
                {
                    c+=900;
                    i+=1;
                }
                else if(a[i]=='I') c+=1;
                else if(a[i]=='X') c+=10;
                else if(a[i]=='C') c+=100;
                else if(a[i]=='V') c+=5;
                else if(a[i]=='L') c+=50;
                else if(a[i]=='D') c+=500;
                else if(a[i]=='M') c+=1000;
            }
            cout<<c<<endl;
        }
        else
        {
            d=0;
            d=stoi(a);
            string x="";
            while(d>0)
            {
                if(d>=1000)
                {
                    x+='M';
                    d-=1000;
                }
                else if(d>=900)
                {
                    x+='C';
                    x+='M';
                    d-=900;
                }
                else if(d>=500)
                {
                    x+='D';
                    d-=500;
                }
                else if(d>=400)
                {
                    x+='C';
                    x+='D';
                    d-=400;
                }
                else if(d>=100)
                {
                    x+='C';
                    d-=100;
                }
                else if(d>=90)
                {
                    x+='X';
                    x+='C';
                    d-=90;
                }
                else if(d>=50)
                {
                    x+='L';
                    d-=50;
                }
                else if(d>=40)
                {
                    x+='X';
                    x+='L';
                    d-=40;
                }
                else if(d>=10)
                {
                    x+='X';
                    d-=10;
                }
                else if(d>=9)
                {
                    x+='I';
                    x+='X';
                    d-=9;
                }
                else if(d>=5)
                {
                    x+='V';
                    d-=5;
                }
                else if(d>=4)
                {
                    x+='I';
                    x+='V';
                    d-=4;
                }
                else if(d>=1)
                {
                    x+='I';
                    d-=1;
                }
            }
            cout<<x<<endl;
        }
    }
    return 0;
}
