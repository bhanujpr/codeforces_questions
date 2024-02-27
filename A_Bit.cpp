#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    while(n--){
        string op;
        cin>>op;
        if(op=="--X"||op=="X--")ans=ans-1;
        else ans=ans+1;
    }
    cout<<ans;
    return 0;
}