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
ll a[1000005];
ll k=1;
bool prime[1000005];

void sieve(ll n)
{
   /* bool prime[n+1];
    memset(prime,true,sizeof(prime));*/
    for(ll i=2;i<=1000005;i++)
    prime[i]=true;
    for(ll p=2;p*p<=n;p++)
    {
        //cout<<"2"<<endl;
        if(prime[p] == true)
        {
           //cout debugv(2);
           //cout<<"2"<<endl;
            for(ll i=2*p;i<=n;i+=p)
            prime[i]=false;
        }
    }
  //  ll k=1;
    
}
int main()
{
    ll n;
    cin>>n;
    sieve(n);
   // ll x=k-1;
   prime[0]=false;
   prime[1]=false;
   ll ans=0;
   if(n==3)
   cout<<"1"<<endl;
   else
   {for(ll i=1;i<n;i++)
   {
       if(prime[i+1]==true)
       {
           for(ll j=i;j<=n;j+=i)
           {
               if(prime[j-1]==true && (j/i+1)<=n && (prime[(j/i+1)]==true))
               {
                   ans++;
                   //cout<<ans<<endl;
                   ans+=j-1!=i+1;
                   //cout<<ans<<endl;
                   ans+=j-1!=j/i+1;
                   //cout<<ans<<endl;
               }
           }
       }
       
   }
       cout<<ans<<endl;
   }
   
   
}
