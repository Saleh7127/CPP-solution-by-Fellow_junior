#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long c=0,d,e=0,f,i,j,k,l,sum=0;
    string a;
    cin>>a;
    l=a.size();
    if(l==1)
        cout<<0<<endl;
    else
    {
        for(i=0; i<l; i++)
        {
            sum+=a[i]-48;
        }
        if(sum<10)
            cout<<1<<endl;
        else
        {
            d=sum;
            while(1)
            {
                e=0;
                c++;
                while(d!=0)
                {
                    f=d%10;
                    e=e+f;
                    d/=10;
                }
                if(e<10)
                {
                    cout<<c+1<<endl;
                    break;
                }
                else
                    d=e;
            }
        }
    }
    return 0;
}
