#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define sc(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
int main()
{
    int x,a,c,d,e,f,i,j,k,l=0,m,n;
    while(scanf("%d",&x)==1 && x)
    {
        if(l) cout<<endl;
        k=0;
        for(i=1234; i<=99999; i++)
        {
            c=i*x;
            d=c/i;
            if(i*x>99999) break;
            if(d==x)
            {
                m=i;
                n=c;
                int n0=0,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0;
                while(m>0)
                {
                    a=m%10;
                    if(a==0) n0++;
                    if(a==1) n1++;
                    if(a==2) n2++;
                    if(a==3) n3++;
                    if(a==4) n4++;
                    if(a==5) n5++;
                    if(a==6) n6++;
                    if(a==7) n7++;
                    if(a==8) n8++;
                    if(a==9) n9++;
                    m=m/10;
                }
                while(n>0)
                {
                    a=n%10;
                    if(a==0) n0++;
                    if(a==1) n1++;
                    if(a==2) n2++;
                    if(a==3) n3++;
                    if(a==4) n4++;
                    if(a==5) n5++;
                    if(a==6) n6++;
                    if(a==7) n7++;
                    if(a==8) n8++;
                    if(a==9) n9++;
                    n=n/10;
                }
                if((n0==1 || n0==0) && n1==1 && n2==1 && n3==1 && n4==1 && n5==1 && n6==1 && n7==1 && n8==1 && n9==1)
                {
                    printf("%05d / %05d = %d\n",c,i,x);
                    k=1;
                }
            }
        }
        if(k==0) printf("There are no solutions for %d.\n",x);
        l++;
    }
    return 0;
}
