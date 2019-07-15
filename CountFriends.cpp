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
ll size[100000];
void initialize(ll a[],ll n)
{
    for(ll i=0;i<n;i++)
    {
        a[i]=i;
        size[i]=1;
    }
}
ll root(ll a[],ll i)
{
    //ll p=
    while(a[i]!=i)
    {
        i=a[i];
    }
    return i;
}
void weighted(ll a[],ll x,ll y)
{
    ll root_x=root(a,x);
    ll root_y=root(a,y);
    if(root_x==root_y)
    return;
    if(size[root_x]>size[root_y])
    {
        a[root_y]=root_x;
        size[root_x]+=size[root_y];
        
    }
    else
    {
        a[root_x]=root_y;
        size[root_y]+=size[root_x];
    }
}
int main()
{
    ll n,m;
    cin>>n>>m;
    ll a[n+2];
    initialize(a,n);
    while(m--)
    {
        ll x,y;
        cin>>x>>y;
        weighted(a,x,y);
    }
    for(ll i=1;i<=n;i++)
    cout<<size[root(a,i)]-1<<" ";
}
