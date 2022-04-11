#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ///~!B}]

    test
    {
        int n,k,i,j,l=0,c,f=0,z=0,y=-1,x=0;
        string a,d;
        ///vector<pair<int,int> >xx;
        cin>>n>>k;
        cin>>a;
        d=a;
        c=0;
        for(i=y; i<n; i++)
        {
            if(a[i]=='W')
            {
                z=i;
                c=0;
                for(j=i+1; j<n; j++)
                {
                    if(a[j]=='L')
                    {
                        c++;
                        if(c==k && a[j+1]=='W')
                        {
                            y=j+1;
                            f=1;
                            break;
                        }
                    }
                }
            }
            if(f) break;
        }

        for(i=z; i<=y; i++)
        {
            if(a[i]=='L' && k>0)
            {
                a[i]='W';
                k--;
            }
        }
        if(k>0)
        {
            for(i=1; i<n; i++)
            {
                if(a[i-1]=='W' && a[i]=='L' && k>0)
                {
                    a[i]='W';
                    k--;
                }
            }
        }
        if(k>0)
        {
            for(i=0; i<n; i++)
            {
                if(a[i]=='L' && k>0)
                {
                    a[i]='W';
                    k--;
                }
            }
        }
        f=0;
        for(i=0; i<n; i++)
        {
            if(i==0 && a[i]=='W')
            {
                f+=1;
            }
            else if(a[i]=='W' && a[i-1]=='W')
            {
                f+=2;
            }
            else if(a[i]=='W') f+=1;
        }
        c=0;
        y=n-1;
        f=0;
        for(i=y; i>=0; i--)
        {
            if(a[i]=='W')
            {
                z=i;
                c=0;
                for(j=i-1; j>=0; j--)
                {
                    if(a[j]=='L')
                    {
                        c++;
                        if(c==k && a[j-1]=='W')
                        {
                            y=j-1;
                            f=1;
                            break;
                        }
                    }
                }
            }
            if(f) break;
        }

        for(i=z; i>=y; i--)
        {
            if(a[i]=='L' && k>0)
            {
                a[i]='W';
                k--;
            }
        }
        if(k>0)
        {
            for(i=n-2; i>=0; i--)
            {
                if(a[i+1]=='W' && a[i]=='L' && k>0)
                {
                    a[i]='W';
                    k--;
                }
            }
        }
        if(k>0)
        {
            for(i=n-1; i>=0; i--)
            {
                if(a[i]=='L' && k>0)
                {
                    a[i]='W';
                    k--;
                }
            }
        }
        int ans=0;
        for(i=0; i<n; i++)
        {
            if(i==0 && a[i]=='W')
            {
                ans+=1;
            }
            else if(a[i]=='W' && a[i-1]=='W')
            {
                ans+=2;
            }
            else if(a[i]=='W') ans+=1;
        }
        cout<<max(f,ans)<<endl;
    }

    return 0;
}

/*
for(i=c; i<n; i++)
        {
            if(a[i]=='W' && a[i+1]=='L')
            {
                l=0;
                for(j=i+1; j<n; j++)
                {
                    if(a[j]=='L') l++;
                    else break;
                }
                if(l<=k)
                {
                    xx.push_back( make_pair(l,i));
                }
                c=j;
            }
        }
        sort(xx.rbegin(), xx.rend());

        for(i=0; i<xx.size(); i++)
        {
            if(xx[i].first<=k)
            {
                for(j=xx[i].second+1; j<n; j++)
                {
                    if(a[j]=='L' && k>0)
                    {
                        a[j]='W';
                        k--;
                    }
                    else break;
                }
            }
        }
        if(k)
        {
            for(i=1; i<n; i++)
            {
                if(a[i]=='L' && a[i-1]=='W' && k>0)
                {
                    a[i]='W';
                    k--;
                }
            }
        }
        if(k)
        {
            for(i=0; i<n; i++)
            {
                if(a[i]=='L' && k>0)
                {
                    a[i]='W';
                    k--;
                }
            }
        }

 */
