#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    Faster

    int i,t=1;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cout<<"Case "<<i<<":\n";
        string command;
        stack<string>backward;
        stack<string>frward;
        string url="http://www.lightoj.com/";

        while(1)
        {
            cin>>command;
            if(command=="QUIT") break;
            else if(command=="VISIT")
            {
                backward.push(url);
                cin>>url;
                while(!frward.empty())
                {
                    frward.pop();
                }
                cout<<url<<endl;
            }
            else if(command=="BACK")
            {
                if(backward.empty())
                {
                    cout<<"Ignored\n";
                }
                else
                {
                    frward.push(url);
                    url=backward.top();
                    backward.pop();
                    cout<<url<<endl;
                }
            }
            else if(command=="FORWARD")
            {
                if(frward.empty())
                {
                    cout<<"Ignored\n";
                }
                else
                {
                    backward.push(url);
                    url=frward.top();
                    frward.pop();
                    cout<<url<<endl;
                }
            }
        }
    }
    return 0;
}
