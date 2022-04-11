#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ///!]B
    test
    {
        ll a=0,c=0,d=0,e,f,i,j,k,l,n;
        cin>>n;
        if(n<=4 && n!=3)
        {
            cout<<-1<<endl;
            continue;
        }

        c=n/5;
        if(n%5==1)
        {
            c--;
            a+=2;
        }
        else if(n%5==2)
        {
            d++;
            c--;
        }
        else if(n%5==3)
        {
            a++;
        }
        else if(n%5==4)
        {
            c--;
            a+=3;
        }
        cout<<a<<" "<<c<<" "<<d<<endl;
    }


    return 0;
}
