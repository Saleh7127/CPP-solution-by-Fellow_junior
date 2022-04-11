#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int b,c,d,e,f,i,j,k,l;
    cin>>b;
    while(b--)
    {
        c=0;
        string a;
        cin>>a;
        sort(a.begin(),a.end());
        l=a.size();
        for(i=1; i<l; i++)
        {
            if(abs((a[i]-65)-(a[i-1]-65))!=1)
            {
                c=1;
            }
        }
        if(c!=0)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
