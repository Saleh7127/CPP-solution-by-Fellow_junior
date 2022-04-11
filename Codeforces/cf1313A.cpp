#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j,k,l;
    cin>>d;
    while(d--)
    {
        e=0;
        cin>>a>>b>>c;
        if(a<b) swap(a,b);
        if(a<c) swap(a,c);
        if(b<c) swap(b,c);
        if(--a>=0) e++;
        if(--b>=0) e++;
        if(--c>=0) e++;
        if(--a>=0 && --b>=0) e++;
        if(--a>=0 && --c>=0) e++;
        if(--b>=0 && --c>=0) e++;
        if(--a>=0 && --b>=0 && --c>=0) e++;
        cout<<e<<endl;
    }
    return 0;
}
