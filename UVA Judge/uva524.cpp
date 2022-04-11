#include<bits/stdc++.h>
using namespace std;
vector<int>xx;
int n;
int used[100];
bool isprime(int a)
{
    for (int i=2; i*i<=a; i++)
    {
        if (a%i==0) return false;
    }
    return true;
}
void backtrack(char x)
{
    if(xx.size()==n)
    {
        if(isprime(xx[n-1]+1))
        {

            printf("1");
            for(int i=1; i<xx.size();i++)
            {
                printf(" %d",xx[i]);
            }
            printf("\n");
            return;

        }
        else return;
    }
    else
    {
        for(int i=2; i<=n; i++)
        {
            if(!used[i])
            {
                int l=xx.size()-1;
                if(isprime(i+xx[l]))
                {
                    used[i]=1;
                    xx.push_back(i);
                    backtrack(i+1);
                    xx.pop_back();
                    used[i]=0;
                }
            }
        }
    }
    return;

}
int main()
{
    int cc=0;
    while(cin>>n)
    {
        cc++;
        if(cc!=1)printf("\n");
        printf("Case %d:\n",cc);
        xx.push_back(1);
        backtrack('x');
        xx.clear();
    }
}
