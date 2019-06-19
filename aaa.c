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
 
#define ll long long
#define ld long double 
#define pii pair<int, int> 
#define pll pair<ll, ll>  
#define vi vector<int>  
#define vvi vector<vi > 
#define vii vector<pii >
using namespace std;
ll a[10][10];
ll find(ll r,ll c,ll n)
{
    ll count=0;
    if(r<0||c<0||c>9||r>9)
    return 0;
    if(n==0)
    return 0;
    if(a[r][c]==1 && n==1)
    return 0;
    if(n==1)
    {
        count=1;
        a[r][c]=1;
    }
    return count+find(r-2,c-1,n-1)+find(r-2,c+1,n-1)+find(r-1,c+2,n-1)+
find(r+1,c+2,n-1)+find(r+2,c+1,n-1)
+find(r+2,c-1,n-1)+find(r+1,c-2,n-1)+find(r-1,c-2,n-1);
}
int main()
{
    ll r,c,n;
    cin>>r>>c>>n;
    r--;
    c--;
    
    ll ans=find(r,c,n+1);
    cout<<ans<<endl;
    
}
