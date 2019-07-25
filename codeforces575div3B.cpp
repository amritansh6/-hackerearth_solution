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
int main()
{
    ll q;
    cin>>q;
    while(q--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        inputarr(a,n);
        ll even=0;
        ll odd=0;
        ll p=0;
        ll index[n];
        ll sum=0,count=0;
       for(ll i=0;i<n;i++)
       {
           sum+=a[i];
           if(sum%2!=0)
           {
               count++;
           //    index[p-1]=i-1;
               index[p]=i;
               p++;
               sum=0;
           }
           
       }
       if(index[p-1]!=n-1)
       index[p-1]=n-1;
       if(count<k)
       cout<<"NO";
       else
       {
           
           ll incre,i;
           if(count%2==0 && k%2==0)
           {
               cout<<"YES"<<endl;
                incre=p-k+1;
               for( i=0;i<p; )
               {
                   if(i==0)
                   {
                      // i+=incre;
                       cout<<index[i+incre-1]+1<<" ";
                       i+=incre;
                   }
                   else
                   {
                       cout<<index[i]+1<<" ";
                       i++;
                       
                   }
                   
               }
               
           }
           else if(count%2!=0 && k%2!=0)
           {
               cout<<"YES"<<endl;
               incre=p-k+1;
               for(ll i=0;i<p; )
               {
                   if(i==0)
                   {
                      // i+=incre;
                       cout<<index[i+incre-1]+1<<" ";
                       i+=incre;
                   }
                   else
                   {
                      
                       
                    cout<<index[i]+1<<" ";
                    i++;
                   }
                   
               }
           }
           else
           {
               cout<<"NO";
           }
           
       }
       cout<<endl;
    }
}
