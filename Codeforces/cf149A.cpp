#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],b,c=0,d=0,e=0,f,i,j,k,l;
    cin>>b;
    for(i=0;i<12;i++)
    {
        cin>>a[i];
        e+=a[i];
    }
    if(e<b) cout<<-1<<endl;
    else if(b==0) cout<<0<<endl;
    else
    {
        sort(a,a+12,greater<int>());
        for(i=0;i<12;i++)
        {
            c+=a[i];
            if(c<b)
            {
                d++;
            }
            else
            {
                d+=1;
                break;
            }
        }
        cout<<d<<endl;
    }
    return 0;
}
