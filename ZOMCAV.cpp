#include <bits/stdc++.h>
#include <iomanip>
 
#define FAST std::ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define DECIMAL(n)  std::cout << std::fixed;std::cout << std::setprecision(n);
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define fi first 
#define se second
#define ALL(v) v.begin(), v.end()
#define SORT(v) sort(ALL(v))  
#define REVERSE(v) reverse(ALL(v))
#define endl "\n"
#define maxc(v) max_element(all(v))
#define minc(v) min_element(all(v))
#define GCD(m,n) __gcd(m,n)
#define debug cerr<<"bhau"<<endl
#define debugv(x) cerr<<x<<endl
#define inputarr(a,n) for(int i=0;i<n;++i) cin>>a[i]
#define printarr(a,n) for(int i=0;i<n;++i) cout<<a[i]<<" "
#define initarr(a,n,x) for (int i=0;i<n;++i) a[i]=x
 
#define ll  long long
#define ld long double 
#define pii pair<int, int> 
#define pll pair<ll, ll>  
#define vi vector<int>  
#define vvi vector<vi > 
#define vii vector<pii >
using namespace std;
vector<ll> differ(vector<ll> &A)
{
    ll n=A.size();
    vector<ll> dp(n+5);
    dp[0]=A[0];
    dp[n]=0;
    for(ll i=1;i<n;i++)
    {
        dp[i]=A[i]-A[i-1];
    }
    return dp;
}
void update(vector<ll> &dp,ll l,ll r,ll x)
{
    dp[l]+=1;
    dp[r+1]-=1;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll x;
        vector<ll> v;
        ll h[n+3];
        for(ll i=0;i<n;i++)
        {
          cin>>x;
          v.pb(x);
         // cout<<v[i];
        }
        for(ll i=0;i<n;i++)
        cin>>h[i];
        vector<ll> dp=differ(v);
        ll a,b;
        for(ll i=0;i<n;i++)
        {
            if((i-v[i])<0)
             a=0;
            else 
            a=i-v[i];
            if((i+v[i])>n-1)
            b=n-1;
            else
            b=i+v[i];
          //  cout<<a<<" "<<b;
            update(dp,a,b,1);
            
        }
        //dp[0]=-300;
        //h[0]=-300;
       // for(ll i=0;i<n;i++)
        //cout<<dp[i]<<" ";
        vector<ll> vx;
    
       for(ll i=0;i<n;i++)
        {
            if(i==0)
           {vx.pb(dp[i]);
               
           }
            else
            {
                if(i==1)
                vx.pb(dp[i]+vx[i-1]);
                else
                 vx.pb(dp[i]+vx[i-1]);
            }
         //   cout<<vx[i]<<" ";
           // dp[i]=vx[i]-v[i];}
         //  cout<<vx[i]<<endl;}
        }
        
        for(ll i=0;i<n;i++)
         v[i]=vx[i]-v[i];
         
         
        sort(h,h+n);
        sort(v.begin(),v.end());
     //   for(ll i=0;i<n;i++)
        // cout<<h[i]<<" ";
        ll flag=0;
        for(ll i=0;i<n;i++)
        {
            
            if(h[i]!=v[i])
            {
                flag=1;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(flag==0)
        cout<<"YES"<<endl;
       
    }
}
