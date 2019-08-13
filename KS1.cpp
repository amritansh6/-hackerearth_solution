#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> v[3000000];
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       
        
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        cin>>a[i];
        ll x=0;
        v[0].push_back(0);
        for(ll i=0;i<n;i++)
        {
            x=x^a[i];
            v[x].push_back(i+1);
        }
        ll sum=0;
        for(ll i=0;i<3000000;i++)
        {
            ll p=v[i].size();
            if(p>1)
            {
             ll sum1=0;
             for(ll j=0;j<p;j++)
             {
               sum1+=(j*v[i][j]-(p-j-1)*v[i][j]);  
             }
             //sum+=sum1;
             sum1=sum1-(p*(p-1)/2);
             if(sum1<0)
             sum1=0;
             
            sum+=sum1;
             
             
             
            }
        }
        cout<<sum<<endl;
        
         //ll n;
        for(ll i=0;i<3000000;i++)
        v[i].clear();
    }
}
