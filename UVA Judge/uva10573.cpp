#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a;

    int t;

    cin>>t;

    getline(cin,a);

    for(int cs=1; cs<=t; cs++)
    {


        ll b,c,i,j,k,l=0;

        getline(cin,a);

        for(i=0; i<a.size(); i++)
        {
            if(a[i]==' ')
            {
                l=i;
                break;
            }
        }

        double x,r,r1,r2,s;

        if(l==0)
        {
            b=0;
            for(i=0; i<a.size(); i++)
            {
                b=b*10+(a[i]-'0');
            }

            x=b*1.00;

            r=x/2.00;

            r1=r2=x/4.00;

        }
        else
        {
            b=c=0;
            for(i=0; i<l; i++)
            {
                b=b*10+(a[i]-'0');
            }
            l++;
            for(i=l; i<a.size(); i++)
            {
                c=c*10+(a[i]-'0');
            }

            r1=b*1.00;
            r2=c*1.00;

            r=(r1*2.00)+(r2*2.00);
            r/=2.00;

        }

        s=pi*r*r;
        s=s-(pi*r1*r1)-(pi*r2*r2);

        cout<<fixed<<setprecision(4)<<s<<endl;
    }


    return 0;
}
