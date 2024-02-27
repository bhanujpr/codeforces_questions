#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int sz;
        cin>>sz;
        vector<int> arr(sz,0);
        for(int i=0;i<sz;i++){
            int temp;
            cin>>temp;
            arr[i]=temp;
        }
        int one;
        int last;
        for(int j=0;j<sz;j++)if(arr[j]==1){one=j;break;}
        for(int j=sz-1;j>=0;j--)if(arr[j]==1){last=j;break;}
        int cnt=0;
        for(int i=0;i<sz;i++){
            if(arr[i]==0&&i>one&&i<last)cnt++;
        }
        cout<<cnt<<endl;
    }
}