#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string a;
    ll t,c,d,i,j,k,l;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>a;
        l=a.size();
        for(i=0;i<l;i++)
        {
            if(a[i]!='0')
            {
                c++;
            }
        }
        printf("%lld\n",c);
        for(i=l-1;i>=0;i--)
        {
             if(a[i]!='0')
            {
                k=l-(i+1);
                cout<<a[i];
                for(j=0;j<k;j++)
                {
                    printf("0");
                }
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
