#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
               cin>>n>>k>>x;
               
               int a[n];
               
               for(int i=0;i<n;i++)
               {
                   cin>>a[i];
               }
               sort(a,a+n,greater<int>());
               
               int p[n+1]={};
               
               for(int i=1;i<=n;i++)
               {
                    p[i]= p[i-1]+a[i-1];
               }
               
               int ans=-2147483648;
               
               for(int i=0;i<=k;i++)
               {
                   int curr;
                     if(i+x<=n)
                       curr = p[n]-2*p[i+x]  + p[i];
                      else
                        curr=   p[n]-2*p[n]+p[i];
                        
                      ans=max( ans, curr);
               }
               cout<<ans<<endl;
    }
}