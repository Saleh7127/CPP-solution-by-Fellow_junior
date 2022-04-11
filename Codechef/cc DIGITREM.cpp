#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll n,m,i,d,j,k,l;

        string a,x;

        cin>>a>>d;

        x=a;

        l=0;

        for(i=0; i<a.size(); i++)
        {
            if((a[i]-'0')==d)
            {
                l=1;
                break;
            }
        }

        if(l==0)
        {
            cout<<0<<endl;
            continue;
        }

        else if(l==1 && a.size()==1)
        {
            cout<<1<<endl;
            continue;
        }

        if(d==0)
        {
            k=0;
            for(i=0; i<a.size(); i++)
            {
                if(a[i]=='0' || k==1)
                {
                    k=1;
                    a[i]='1';
                }
            }

            k=stoi(a)-stoi(x);

            cout<<k<<endl;
        }

        else if(d==9)
        {
            if(a[0]=='9')
            {
                k=a.size();
                k=pow(10,k);
                cout<<k-stoi(a)<<endl;
            }

            else
            {
                k=-1;

                for(i=0; i<a.size(); i++)
                {
                    if(a[i]=='9')
                    {
                        for(j=i-1; j>=0; j--)
                        {
                            if(a[j]<'8')
                            {
                                k=j;
                                a[j]+=1;
                                break;
                            }
                        }

                        if(k==-1)
                        {
                            k=(int)x.size();
                            k=pow(10,k);

                            cout<<k-stoi(x)<<endl;
                            break;
                        }

                        else
                        {
                            for(i=k+1; i<a.size(); i++)
                            {
                                a[i]='0';
                            }

                            k=stoi(a)-stoi(x);

                            cout<<k<<endl;
                            break;
                        }
                    }
                }
            }
        }

        else
        {
            k=0;
            l=0;

            for(i=0; i<a.size(); i++)
            {
                l=(a[i]-'0');
                if(l==d)
                {
                    k=i;
                    break;
                }
            }

            k++;

            l=(int)a.size()-k;

            j=0;

            k--;

            for(i=k; i<a.size(); i++)
            {
                j=j*10+(a[i]-'0');
            }

            k=(d+1)*pow(10,l);

            cout<<k-j<<endl;
        }

    }


    return 0;
}

