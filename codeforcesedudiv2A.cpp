#include<bits/stdc++.h> 
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int arr[n],i;
		for(i=0;i<n;i++)
			cin>>arr[i];
			
		sort(arr,arr+n);
		
		cout<<min((arr[n-2]-1),(n-2))<<"\n";
	}
 
	return 0;		
}
