#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll p,tt=1;

    while(cin>>p)
    {
        if(p==-1) break;
        string x;
        ll num1=0,dos1=1,dos2=1,num2=0,ans,i,j,k,l;

        cin>>x;

        cout<<"Case "<<tt++<<": ";

        for(i=2; i<x.size(); i++)
        {
            num1=(num1*10)+(x[i]-'0');
            dos1*=10;
        }
        if(p==0)
        {
            k=__gcd(num1,dos1);
            cout<<num1/k<<"/"<<dos1/k<<endl;
        }
        else
        {
            l=x.size()-p;
            for(i=2; i<l; i++)
            {
                num2=(num2*10)+(x[i]-'0');
                dos2*=10;
            }
            num1-=num2;
            dos1-=dos2;
            k=__gcd(num1,dos1);
            cout<<num1/k<<"/"<<dos1/k<<endl;
        }

    }



    return 0;
}
