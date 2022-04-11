#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int b,c,d,e,f,i,h,j,k,l;
    cin>>b;
    while(b--)
    {
        d=0;
        cin>>c;
        cin>>a;
        if(c<11)
        {
            cout<<"NO\n";
        }
        else if(c==11)
        {
            if(a[0]=='8')
            {
                cout<<"YES\n";
            }
            else if(a[0]!='8')
            {
                cout<<"NO\n";
            }
        }
        else if(c>11)
        {
            for(i=0; i<c; i++)
            {
                d=c-i;
                if(a[i]=='8' && d>=11)
                {
                    cout<<"YES\n";
                    break;
                }
                else if(d<11)
                {
                     cout<<"NO\n";
                     break;
                }
            }
        }
    }
    return 0;
}
