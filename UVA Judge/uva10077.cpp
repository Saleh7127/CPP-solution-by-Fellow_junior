#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll m,n,nn,nm,mm,mn,pm,pn;
int main()
{

    while(true)
    {
        cin>>m>>n;
        if(m==1 && n==1) break;
        pm=0, nm=1, pn=1, nn=0;
        mm=1,mn=1;
        while(true)
        {
            if(mm==m && mn==n)
            {
                break;
            }
            if(mm*n>mn*m)
            {
                cout<<"L";
                nm=mm;
                nn=mn;
            }
            else
            {
                cout<<"R";
                pm=mm;
                pn=mn;
            }
            mm=pm+nm;
            mn=pn+nn;
        }
        cout<<endl;
    }
    return 0;
}
