#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1000010];
int main()
{
    ll t,i,j,k,Case=1;
    while(cin>>t && t)
    {
        for(j=0; j<t; j++)
        {
            cin>>a[j];
        }
        cout<<"Case "<<Case++<<":\n";
        string n1,n2,n3;
        ll shuru,sesh,posi=0;
        for(i=0; i<t; i++)
        {
            shuru=i;
            while(i+1<t && a[i+1]==a[i]+1)
            {
                i++;
            }
            sesh=i;
            if(shuru==sesh)
            {
                cout<<"0"<<a[i]<<"\n";
            }
            else
            {
                cout<<"0"<<a[shuru]<<"-";

                n1=to_string(a[shuru]);
                n2=to_string(a[sesh]);
                posi=0;
                while(n1[posi]==n2[posi])
                {
                    posi++;
                }
                for(k=posi; k<n2.size(); k++)
                {
                    cout<<n2[k];
                }
                cout<<endl;
            }
        }
         cout<<endl;
    }
    return 0;
}
