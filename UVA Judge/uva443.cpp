#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a[10000]= {0};
    ll i,j,k,l,c,d,e,n,x=0;
    for(i=0; i<=30; i++)
    {
        for(j=0; j<=19; j++)
        {
            c=pow(2,i)*pow(3,j);
            if(c<2000000001)
            {
                for(k=0; k<=13; k++)
                {
                    c=pow(2,i)*pow(3,j)*pow(5,k);
                    if(c<2000000001)
                    {
                        for(l=0; l<=11; l++)
                        {
                            c=pow(2,i)*pow(3,j)*pow(5,k)*pow(7,l);
                            if(c<2000000005 && a[x]==0)
                            {
                                a[x]=c;
                                x++;
                            }
                            else break;
                        }
                    }
                }
            }
        }
    }
    sort(a,a+x);
    while(cin>>n && n)
    {
        printf("The %d", n);
        if(n%10 == 1 && n%100 != 11) printf("st");
        else if(n%10 == 2 && n%100 != 12) printf("nd");
        else if(n%10 == 3 && n%100 != 13) printf("rd");
        else printf("th");
        printf(" humble number is %d.\n", a[n-1]);
    }

    return 0;
}
