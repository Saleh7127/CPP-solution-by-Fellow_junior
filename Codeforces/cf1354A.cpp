#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,c,d,e,f,i,j,l,k;
    cin>>t;
    while(t--)
    {
        cin>>a>>c>>d>>e;
        l=d-e;
        k=a-c;
        if(c>=a) cout<<c<<endl;
        else if(d<=e && c<a) cout<<-1<<endl;
        else
        {
            if(k%l==0)
            {
                f=k/l;
            }
            else
            {
                f=1+(k/l);
            }
            long long ans=(f*d)+c;
            cout<<ans<<endl;
        }
    }
   return 0;
}
