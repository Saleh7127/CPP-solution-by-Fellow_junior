#include <bits/stdc++.h>
using namespace std;
#define ll long long
double ans[1000005];
const int ma=1e8+1;

void fre()
{
    double s=0.0;

    for(ll i=1; i<ma; i++)
    {
        s+=(1.00/(double)i);

        if(i%100==0)
        {
            ans[i/100]=s;
        }
    }
}



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t,cs=1;
    cin>>t;

    fre();

    while(t--)
    {

        ll a,b,i,j,k,l;

        cin>>a;
        b=a/100;

        k=b*100+1;

        double xx=ans[b];

        for(i=k; i<=a; i++)
        {
            xx+=(1.00/(double)i);
        }

        cout<<"Case "<<cs++<<": "<<fixed<<setprecision(10)<<xx<<endl;
    }


    return 0;
}
/*

#include <bits/stdc++.h>
using namespace std;
double k[1000000],ol=0.57721566490153286060651209;
int n;
int main()
{
    k[1]=1;
    for(int i=2; i<1000000; i++)
    {
        k[i]=k[i-1]+1.0/i;
    }

    int Case=1,T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        if(n<1000000)
            printf("Case %d: %.10lf\n",Case++,k[n]);
        else
            printf ( "Case% d:% .10lf\n", Case ++, log (n) + 1.0/ (2 * n) + ol); // C language kinds of log (n) is ln (n)
    }
    return 0;
}

*/
