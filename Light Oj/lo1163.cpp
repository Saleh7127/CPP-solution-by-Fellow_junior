#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {

        ll x,a;

        cin>>x;
        cout<<"Case "<<cs<<": ";

        a=x+(x/9);

        if(x%9==0)
        {
            cout<<a-1<<" "<<a<<endl;
        }
        else cout<<a<<endl;
    }


    return 0;
}
/*
So, A - A/10 = X
A - (A-A%10)/10 = X
10A - A + (A%10) = 10X
9A = 10X - K , let K = A%10
A = (10X - K)/9
A = X + (X - K)/9
For K equals to 0 to 9, if (X - K)%9 = 0, then A would be a solution.
If we get a solution for K = 0, then we would also get a solution for
K = 9 in this case. That means, if X%9 = 0, then there exists two
solutions: A = X + X//9 - 1 and A = X + X//9.
Otherwise the only solution would be A = X + X//9 */
