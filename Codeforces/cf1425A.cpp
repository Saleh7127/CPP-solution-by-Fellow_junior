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
        ll a,c=0,d=0,e,f,i,j=0,k,l;
        cin>>a;
        d=a;
        if(a==1 || a==3 || a==5)
        {
            if(a==1) cout<<1<<endl;
            else cout<<2<<endl;
            continue;
        }
        if(a%2)
        {
            while(a)
            {
                if(j==0)
                {
                    c+=1;
                    a-=1;
                    j=1;
                }
                else if(j==1)
                {
                    if((a/2)%2==0)
                    {
                        a-=1;
                        j=0;
                    }
                    else
                    {
                        a=a/2;
                        j=0;
                    }
                }
            }
            cout<<c<<endl;
        }
        else
        {
            while(a)
            {
                if(j==0)
                {
                    if((a/2)%2==0)
                    {
                        c+=1;
                        a-=1;
                        j=1;
                    }
                    else
                    {
                        c+=(a/2);
                        a=a/2;
                        j=1;
                    }
                }
                else if(j==1)
                {
                    a-=1;
                    j=0;
                }
            }
            cout<<c<<endl;
        }
    }


    return 0;
}
