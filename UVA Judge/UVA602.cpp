#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
string day[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
string month[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
ll days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

ll old(ll m,ll d,ll y) ///date before 09/02/1752
{
    if(y<1752) return 1ll;
    else if((y==1752 && m<9) || (y==1752 && m==9 && d<=2)) return 1ll;
    else return 0ll;
}

ll ly(ll y) ///leap year
{
    if(y<1752) return (y%4==0);
    else return (y%4==0 && (y%100!=0 || y%400==0));
}

ll valid(ll m,ll d,ll y) ///valid date
{
    if(d<=0 || d>days[m] || m<=0 || m>12 || y<=0) return 0ll;
    else if(d>=3 && d<=13 && m==9 && y==1752) return 0ll;
    else return 1ll;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m,i,j,k,l,d,y;

    while(cin>>m>>d>>y && (m+d+y)!=0)
    {
        days[2]=28+ly(y);

        l=0;

        if(valid(m,d,y))
        {
            l=d;

            for(i=1; i<m; i++)
            {
                l+=days[i];
            }

            for(i=1; i<y; i++)
            {
                l+=365 + ly(i);
            }

            if(old(m,d,y)) l+=12; ///rules of old date;
            else l+=1;

            l%=7;

            cout<<month[m]<<" "<<d<<", "<<y<<" is a "<<day[l]<<endl;
        }
        else
        {
            cout<<m<<"/"<<d<<"/"<<y<<" is an invalid date."<<endl;
        }

        days[2]=28;
    }


    return 0;
}
