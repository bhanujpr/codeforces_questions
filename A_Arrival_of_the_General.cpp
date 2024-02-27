#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int mn=1e9;
    int mx=-1;
    int idmn,idmx;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(temp>mx)mx=temp,idmx=i;
        if(temp<=mn)mn=temp,idmn=i;
        arr.push_back(temp);
    }
    int op=0;
    if(idmx>idmn)op=idmx+((n-1)-idmn)-1;
    else op=idmx+((n-1)-idmn);
    cout<<op;
    return 0;
}