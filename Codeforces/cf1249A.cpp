#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c,d,e,f,i,j,k;
    cin>>b;
    while(b--)
    {
        d=0;
        cin>>c;
        int a[c+5];
        for(i=0;i<c;i++)
        {
            cin>>a[i];
        }
        sort(a,a+c);
        for(i=0;i<c;i++)
        {
            if(a[i]-1==a[i-1])
            {
                d++;
                break;
            }
        }
        if(d!=0)
        {
            cout<<"2\n";
        }
        else
        {
            cout<<"1\n";
        }
    }
    return 0;
}
