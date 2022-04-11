#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
void Minprogram(int a[], int e[], int n)
{


    sort(a,a+n);
    sort(e,e+n);

    int cur=1,ans=1,i=1,j=0;
    while (i < n && j < n)
    {
        if (a[i] <= e[j])
        {
            cur++;
            if (cur>ans)
            {
                ans= cur;
            }
            i++;
        }
        else
        {
            cur--;
            j++;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    test
    {
        int a[100000],c[100000],b,d,e,i,j,k,l;
        cin>>b;
        for(i=0; i<b; i++)
        {
            cin>>a[i]>>c[i];
        }

        cout<<"Case "<<cs<<": ";

        Minprogram(a,c,b);

    }
    return 0;
}
