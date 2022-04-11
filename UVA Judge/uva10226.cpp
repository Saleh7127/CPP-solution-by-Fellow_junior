#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    for(int i=1; i<=t; i++)
    {
        string s;
        if(i==1)getline(cin, s);
        map<string, int> a;
        map<string, int>::iterator it;
        int n=0;
        while(getline(cin, s))
        {
            if(s.size()==0)break;
            n++;
            a[s]++;
        }
        double ans;
        for(it=a.begin(); it!=a.end(); it++)
        {
            s=it->first;
            int x=it->second;
            ans=x*100.0/(double) n;
            cout<<s<<" ";
            cout<<fixed<<setprecision(4)<<ans<<endl;
        }
        if(i!=t) cout<<endl;
    }
    return 0;
}
/*
1

Red Alder
Ash
Aspen
Basswood
Ash
Beech
Yellow Birch
Ash
Cherry
Cottonwood
Ash
Cypress
Red Elm
Gum
Hackberry
White Oak
Hickory
Pecan
Hard Maple
White Oak
Soft Maple
Red Oak
Red Oak
White Oak
Poplan
Sassafras
Sycamore
Black Walnut
Willow

*/
