#include<bits/stdc++.h>

using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int arr[100003];
memset(arr,0,sizeof(arr));
for(int i=1;i<=n;i++)
cin>>arr[i];
int motu = 1;
int patlu = n;

while(motu<patlu)
{
int temp = 2*arr[patlu];
while(temp!=0&&motu<patlu)
{
if(arr[motu]>temp){
arr[motu]-=temp;
temp = 0;
}
else
{
temp-=arr[motu];
motu++;
}
}
if(motu>=patlu)
motu--;
patlu--;
}
if(motu>=patlu)
patlu--;
cout<<motu<<" "<<n-patlu-1<<endl;
if(motu>n-patlu-1)
{
cout<<"Motu"<<endl;
}
else if(motu<n-patlu-1)
{
cout<<"Patlu"<<endl;
}
else
{
cout<<"Tie"<<endl;
}
}
}
