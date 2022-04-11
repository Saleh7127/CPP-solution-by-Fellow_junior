#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int i,j,k,l;
    list<char>b;
    list<char>:: iterator fn;
    while(cin >> a)
    {
        fn = b.begin();
        for( i=0; i<a.size(); i++)
        {
            if(a[i] == ']')
            {
                fn = b.end();
            }
            else if(a[i] == '[')
            {
                fn = b.begin();
            }
            else
            {
                b.insert(fn,a[i]);
            }
        }
        for(fn=b.begin(); fn!=b.end(); fn++)
        {
            cout << *fn;
        }
        cout <<endl;
        b.clear();
    }
    return 0;
}
