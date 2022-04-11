#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,b,c,d,e,f,i,j,k,l;
    cin>>t;
    while(t--)
    {
        d=-1000;
        c=0;
        string a;
        cin>>a;
        b=a.size();
        for(i=0;i<b;i++)
        {
            if(a[i]=='L') c++;
            else
            {
                d=max(d,c);
                c=0;
            }
        }
        d=max(d,c);
        cout<<d+1<<endl;
    }
    return 0;
}
