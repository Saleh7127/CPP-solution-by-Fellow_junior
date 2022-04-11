/***
 created: 2022-02-08-16.15.00
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

deque<ll>x,y,w,z;
vector<char>a,b,c,d;

void check1()
{
    ll m=0,j,k,l;

    while(x.empty()==false)
    {
        k=x.front();
        l=x.back();

        j=0;

        if(x.size()==1)
        {
            if(k>m)
            {
                a.push_back('R');
                x.pop_back();
            }

            break;
        }

        if(m==0)
        {
            if(min(k,l)==k)
            {
                a.push_back('L');
                x.pop_front();
                m=k;
            }
            else
            {
                a.push_back('R');
                x.pop_back();
                m=l;
            }
            j=1;
        }
        else
        {

            if(l>m && k>m)
            {
                if(min(k,l)==l)
                {
                    a.push_back('R');
                    x.pop_back();
                    m=l;
                }

                else
                {
                    a.push_back('L');
                    x.pop_front();
                    m=k;
                }

                j=1;
            }


            else if(l>m)
            {
                j=1;
                m=l;
                a.push_back('R');
                x.pop_back();
            }

            else if(k>m)
            {
                j=1;
                m=k;
                a.push_back('L');
                x.pop_front();
            }
        }

        if(j==0) break;
    }
    return;
}

void check2()
{
    ll m=0,j,k,l;

    while(y.empty()==false)
    {
        k=y.front();
        l=y.back();

        j=0;

        if(y.size()==1)
        {
            if(k>m)
            {
                b.push_back('R');
                y.pop_back();
            }

            break;
        }

        if(m==0)
        {
            if(min(k,l)==k)
            {
                b.push_back('L');
                y.pop_front();
                m=k;
            }
            else
            {
                b.push_back('R');
                y.pop_back();
                m=l;
            }
            j=1;
        }
        else
        {

            if(l>m && k>m)
            {
                if(min(k,l)==k)
                {
                    b.push_back('L');
                    y.pop_front();
                    m=k;

                }

                else
                {
                    b.push_back('R');
                    y.pop_back();
                    m=l;
                }

                j=1;
            }


            else if(l>m)
            {
                j=1;
                m=l;
                b.push_back('R');
                y.pop_back();
            }

            else if(k>m)
            {
                j=1;
                m=k;
                b.push_back('L');
                y.pop_front();
            }
        }

        if(j==0) break;
    }
    return;
}


void check3()
{
    ll m=0,j,k,l;

    while(w.empty()==false)
    {
        k=w.front();
        l=w.back();

        j=0;

        if(w.size()==1)
        {
            if(k>m)
            {
                c.push_back('R');
                w.pop_back();
            }

            break;
        }

        if(m==0)
        {
            if(min(k,l)==l)
            {
                c.push_back('R');
                w.pop_back();
                m=l;

            }
            else
            {
                c.push_back('L');
                w.pop_front();
                m=k;
            }

            j=1;
        }
        else
        {

            if(l>m && k>m)
            {
                if(min(k,l)==l)
                {
                    c.push_back('R');
                    w.pop_back();
                    m=l;
                }

                else
                {
                    c.push_back('L');
                    w.pop_front();
                    m=k;
                }

                j=1;
            }


            else if(l>m)
            {
                j=1;
                m=l;
                c.push_back('R');
                w.pop_back();
            }

            else if(k>m)
            {
                j=1;
                m=k;
                c.push_back('L');
                w.pop_front();
            }
        }

        if(j==0) break;
    }
    return;
}

void check4()
{
    ll m=0,j,k,l;

    while(z.empty()==false)
    {
        k=z.front();
        l=z.back();

        j=0;

        if(z.size()==1)
        {
            if(k>m)
            {
                d.push_back('R');
                z.pop_back();
            }

            break;
        }

        if(m==0)
        {
            if(min(k,l)==l)
            {
                d.push_back('R');
                z.pop_back();
                m=l;

            }
            else
            {
                d.push_back('L');
                z.pop_front();
                m=k;
            }
            j=1;
        }
        else
        {

            if(l>m && k>m)
            {
                if(min(k,l)==k)
                {
                    d.push_back('L');
                    z.pop_front();
                    m=k;

                }

                else
                {
                    d.push_back('R');
                    z.pop_back();
                    m=l;
                }

                j=1;
            }


            else if(l>m)
            {
                j=1;
                m=l;
                d.push_back('R');
                z.pop_back();
            }

            else if(k>m)
            {
                j=1;
                m=k;
                d.push_back('L');
                z.pop_front();
            }
        }

        if(j==0) break;
    }
    return;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m=0,i,j,k,l;

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>m;
        x.push_back(m);
        y.push_back(m);
        z.push_back(m);
        w.push_back(m);
    }

    check1();
    check2();
    check3();
    check4();

    if(a.size()>=b.size() && a.size()>=c.size() && a.size()>=d.size())
    {
        cout<<a.size()<<nl;

        for(auto dd:a) cout<<dd;

        cout<<nl;
    }
    else if(b.size()>=a.size() && b.size()>=c.size() && b.size()>=d.size())
    {
        cout<<b.size()<<nl;

        for(auto dd:b) cout<<dd;

        cout<<nl;
    }
    else if(c.size()>=a.size() && c.size()>=b.size() && c.size()>=d.size())
    {
        cout<<c.size()<<nl;

        for(auto dd:c) cout<<dd;

        cout<<nl;
    }
    else if(d.size()>=a.size() && d.size()>=b.size() && d.size()>=c.size())
    {
        cout<<d.size()<<nl;

        for(auto dd:d) cout<<dd;

        cout<<nl;
    }

    get_lost_idiot;
}

