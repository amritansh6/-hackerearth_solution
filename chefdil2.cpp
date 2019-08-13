#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
         ll c1=0;
        ll c2=0;
        for(ll i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            c1++;
            if(s[i]=='0')
            c2++;
        }
       
        if(c1%2==0 && c2%2==0)
        cout<<"LOSE"<<endl;
        else if(c1%2!=0 && c2%2==0)
        cout<<"WIN"<<endl;
        else if(c1%2==0 && c2%2!=0)
        cout<<"LOSE"<<endl;
        else
        cout<<"WIN"<<endl;
        
    }
}
