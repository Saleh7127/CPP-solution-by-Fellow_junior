#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {

        string a;

        ll i,j,k,l,m,n,ans,s;

        cin>>a;

        for(i=0; i<2; i++)
        {
            for(j=0; j<2; j++)
            {
                for(k=0; k<2; k++)
                {
                    string x="";

                    for(m=0; m<a.size(); m++)
                    {
                        if(a[m]=='A') n=i;
                        else if(a[m]=='B') n=j;
                        else n=k;

                        if(n) x+=')';
                        else x+='(';
                    }

                    ans=0;
                    s=0;

                    for(ll h=0; h<x.size(); h++)
                    {
                        if(x[h]=='(') s++;
                        else s--;

                        if(s<0)
                        {
                            ans=1;
                            break;
                        }
                    }

                    if(s!=0) ans=1;

                    if(ans==0) break;
                }
                if(ans==0) break;
            }
            if(ans==0) break;
        }

        if(ans==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }


    return 0;
}
