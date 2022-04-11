#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string S;
    cin >> S;
    int sum=0;
    int cnt0=0, cnt1=0, cnt2=0;
    for(int i=0; i<S.size(); i++)
    {
        int dig = S[i] - '0';
        sum += dig;
        if(dig%3==0) cnt0++;
        else if(dig%3==1) cnt1++;
        else cnt2++;
    }

    if(sum%3==0)
    {
        cout << "0\n";
    }
    else if(sum%3==1)
    {
        if(cnt1)
        {
            if(S.size()>1)
            {
                cout << "1\n";
            }
            else
            {
                cout << "-1\n";
            }
        }
        else
        {
            if(cnt2>=2)
            {
                if(S.size()>2)
                {
                    cout << "2\n";
                }
                else
                {
                    cout << "-1\n";
                }
            }
            else
            {
                cout << "-1\n";
            }
        }
    }
    else
    {
        if(cnt2)
        {
            if(S.size()>1)
            {
                cout << "1\n";
            }
            else
            {
                cout << "-1\n";
            }
        }
        else
        {
            if(cnt1>=2)
            {
                if(S.size()>2)
                {
                    cout << "2\n";
                }
                else
                {
                    cout << "-1\n";
                }
            }
            else
            {
                cout << "-1\n";
            }
        }
    }

    return 0;
}
