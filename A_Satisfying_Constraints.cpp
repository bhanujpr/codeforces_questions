#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m;
    cin>>m;
    while(m--){
        int n;
        cin>>n;
        vector<int> noti;
        int greater=0;
        int least=1e9;
        for(int i=0;i<n;i++){
            int a,x;
            cin>>a>>x;
            if(a==1){
                greater=max(greater,x);
            }
            else if(a==2){
                least=min(least,x);
            }
            else{
                noti.push_back(x);
            }

        }
        int notinclude=0;
        for(int i=0;i<noti.size();i++){
            if(noti[i]>=greater && noti[i]<=least){
                notinclude++;
            }
        }
        int ans=least-greater-notinclude+1;
        if(ans<0)cout<<0<<endl;
        else cout<<ans<<endl;

    }
    return 0;
}