#include<bits/stdc++.h>
using namespace std;
typedef long long           ll;
typedef unsigned long long  ull;

#define ff                  first
#define ss                  second
#define pb                  push_back
#define mp                  make_pair
#define in                  insert
#define f0(b)               for(int i=0;i<(b);i++)
#define f00(b)              for(int j=0;j<(b);j++)
#define f1(b)               for(int i=1;i<=(b);i++)
#define f11(b)              for(int j=1;j<=(b);j++)
#define f2(a,b)             for(int i=(a);i<=(b);i++)
#define f22(a,b)            for(int j=(a);j<=(b);j++)
#define RFOR(i,x,y)         for(int i=x;i>=y;i--)
#define testcase            ll t; cin>>t; while (t--)
#define vout(v)             for(int ind=0;ind<v.size();ind++){ cout<<v[ind]; if(ind<v.size()-1) cout<<' '; else cout<<endl;}
#define read                ll n;cin>>n;ll ar[n+5];for(i=0;i<n;i++)cin>>ar[i];
#define arrout(arr,i,x,y)   for(int i=x;i<=y;i++){ cout<<arr[i]; if(i<y) cout<<' '; else cout<<endl;}
#define unq(v)              sort(all(v)),(v).resize(unique(all(v))-v.begin())
#define sc(a)               scanf("%lld",&a)
#define sc2(a,b)            scanf("%lld %lld",&a,&b)
#define all(v)              v.begin(),v.end()
#define rall(v)             v.rbegin(),v.rend()
#define reversed(s)         reverse(s.begin(), s.end())
#define gtl(x)              getline(cin, (x))
#define PI                  acos(-1)
#define CLR(x, y)           memset(x, y, sizeof(x))
#define Precision(a)        cout << fixed << setprecision(a)
#define Flame               ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MAXP                1000006
#define MOD                 1e9+7//10000007
#define EPS                 1e-7

template <typename T> T Sqr(T x) { T n = x * x ; return n ;}
template <typename T> T Pow(T B,T P){ if(P==0) return 1; if(P&1) return B*Pow(B,P-1);  else return Sqr(Pow(B,P/2));}
template <typename T> T Abs(T a) {if(a<0)return -a;else return a;}
template <typename T> T Gcd(T a,T b){if(a<0)return Gcd(-a,b);if(b<0)return Gcd(a,-b);return (b==0)?a:Gcd(b,a%b);}
template <typename T> T Lcm(T a,T b) {if(a<0)return Lcm(-a,b);if(b<0)return Lcm(a,-b);return a*(b/Gcd(a,b));}
template <typename T> inline string ToBinary(T n) {string r ;while(n != 0) {r = ( n % 2 == 0 ? "0" : "1" ) + r ; n >>= 1;} return r ;}
long long BinaryToDecimal(string s) {int len = s.size();long long n = 0, p = 1;for (int i = len - 1; i >= 0; i-- , p *= 2) n += p * (s[i] - '0');return n;}

#define bug printf("**!\n")
#define DB(x) cout << #x << " = " << x << endl
#define DDB(x, y) cout << #x << " = " << x << "   " << #y << " = " << y << endl
#define DDDB(x, y, z) cout << #x << " = " << x << "   " << #y << " = " << y << "   " << #z << " = " << z << endl

vector <int> prime; //In this vector all the primes are saved
bitset<MAXP> mark; //nonprime indexes are true, prime indexes are false here


ll bigmod(ll a, ll b, ll m)
{
    if(b==0) return 1%m;
    ll x=bigmod(a, b/2, m);
    x=(x*x)%m;
    if(b%2!=0)
    {
        x=(x*a)%m;
    }
    return x;
}
int main()
{
    ll n, a, b, m;
    while(cin >> n, n)
    {
        f0(n)
        {
            cin >> a >> b >> m;
            cout << bigmod(a,b,m) << endl;
        }
    }
    return 0;
}
