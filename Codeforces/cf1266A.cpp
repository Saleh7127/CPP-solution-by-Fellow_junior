#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,b,c,d,e,f,i,j,k,l;
    cin>>t;
    while(t--)
    {
        b=0;
        d=0;
        e=0;
        string a;
        cin>>a;
        for(i=0;i<a.size();i++)
        {
            c=a[i]-'0';
            b+=c;
            if(c%2==0) d++;
            if(c==0) e++;
        }
        if(b%3==0 && d>1 && e>0) cout<<"red\n";
        else cout<<"cyan\n";
    }
    return 0;
}
