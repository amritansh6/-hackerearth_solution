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
ll fact[1000007];
void factorial(ll n)
{
    fact[0]=1;
    for(ll i=1;i<=n;i++)
    fact[i]=(fact[i-1]*i)%mod;
    
}
ll power(ll x, ll y, ll p) 
{ 
    ll res = 1;
  
    x = x % p;  
    while (y > 0) 
    { 
       
        if (y & 1) 
            res = (res*x) % p; 
  
       
        y = y>>1;
        x = (x*x) % p; 
    } 
    return res; 
} 
  
 
ll modInverse(ll n, ll p) 
{ 
    return power(n, p-2, p); 
} 
ll ncr(ll n, ll r, ll p) 
{ 
   if (r==0) 
      return 1; 
  
    
    
  
    return (fact[n]* modInverse(fact[r], p) % p * 
            modInverse(fact[n-r], p) % p) % p; 
} 
int main()
{
    factorial(1000000);
    ll t;
    cin>>t;
    ll v1[100000],v2[100000],a1[100000],a2[100000];
    v1[0]=1;
    a1[0]=1;
    ll p=1;
    for(ll i=1;i<42;i++)
    {
        p*=2;
        v1[i]=p;
        a1[i]=a1[i-1]+p;
    }
    v2[0]=1;
    v2[1]=1;
    a2[0]=1;
    a2[1]=2;
     p=1;
    for(ll i=2;i<42;i++)
    {
        p*=2;
        v2[i]=p;
        a2[i]=a2[i-1]+p;
    }
    while(t--)
    {
        ll n;
        cin>>n;
        if(n%2==0)
        {
            ll even=n/2;
            ll odd=n/2,k=0;
            while(even>=a1[k])
            k++;
            
            ll ans=(fact[even]*fact[odd])%mod;
            ll ad=even-a1[k-1];
            ans=(ans*ncr(v1[k],ad,mod))%mod;
            ans=(ans*2)%mod;
            
            while(odd>=a2[k])
            k++;
            
            // ans=(fact[even]*fact[odd])%mod;
            ll ad2=even-a2[k-1];
            ans=(ans*ncr(v2[k],ad2,mod))%mod;
            //ans=(ans*2)%mod;
            cout<<ans<<endl;
        }
        else
        {
            ll even=(n+1)/2;
            ll odd=n/2;
            ll k=0;
            while(even>=a2[k])
            k++;
            
            ll ans=(fact[even]*fact[odd])%mod;
            ll ad=even-a2[k-1];
          //  cout<<ad<<endl;
            ans=(ans*ncr(v2[k],ad,mod))%mod;
            //ans=(ans*2)%mod;
            //ll even=n/2;
            //ll odd=n/2,k=0;
            k=0;
            while(odd>=a1[k])
            k++;
            
            // ans=(fact[even]*fact[odd])%mod;
            ll ad2=odd-a1[k-1];
            ans=(ans*ncr(v1[k],ad2,mod))%mod;
            //ans=(ans*2)%mod;
            if(ad==0 && ad2==0)
            {cout<<ans<<endl;
            continue;}
            // ans=(ans*2)%mod;
            even=(n+1)/2;
            odd=n/2;
            k=0;
            while(even>=a1[k])
            k++;
            ll ans1=0;
             ans1=(fact[even]*fact[odd])%mod;
            ll ad3=even-a1[k-1];
          //  cout<<ad3<<endl;
            ans1=(ans1*ncr(v1[k],ad3,mod))%mod;
            
            //an
            k=0;
            while(odd>=a2[k])
            k++;
            
            // ans1=(fact[even]*fact[odd])%mod;
            ll ad4=odd-a2[k-1];
            ans1=(ans1*ncr(v2[k],ad4,mod))%mod;
           // cout<<ad4<<endl;
            //ans=(ans*2)%mod;s=(ans*2)%mod;
           // cout<<ans<<endl;
            cout<<(ans+ans1)%mod<<endl;
        }
    }
   
}
