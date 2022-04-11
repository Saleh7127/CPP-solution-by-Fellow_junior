#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    fellow_junior
    int a,d,e,j,k;
    while(cin>>a &&a)
    {
        string x="";
        for(j=1; j<=a; j++)
        {
            d=j;
            while(d>0)
            {
                if(d>=100)
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
        }
        int i=0,v=0,xx=0,l=0,c=0;
        for(k=0;k<x.size();k++)
        {
            if(x[k]=='I') i++;
            else if(x[k]=='V') v++;
            else if(x[k]=='X') xx++;
            else if(x[k]=='L') l++;
            else if(x[k]=='C') c++;
        }
        printf("%d: %d i, %d v, %d x, %d l, %d c\n",a,i,v,xx,l,c);
    }
    return 0;
}
