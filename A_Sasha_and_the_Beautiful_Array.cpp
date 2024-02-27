#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        int mx=0;
        int mn=1e9;
        for(int i=0;i<n;i++){
            if(arr[i]>mx)mx=arr[i];
            if(arr[i]<mn)mn=arr[i];
        }
        cout<<mx-mn<<endl;
    }
    return 0;
}