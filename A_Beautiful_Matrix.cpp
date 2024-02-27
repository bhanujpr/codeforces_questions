#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[5][5];
    int x,y;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int temp;
            cin>>temp;
            arr[i][j]=temp;
            if(temp==1){
                x=i;
                y=j;
            }
        }
    }
    int ans;
    if(x>2){
        if(y>2){
            ans=(y-2)+(x-2);
        }
        else{
            ans=(2-y)+(x-2);
        }
    }
    else{
        if(y>2){
            ans=(y-2)+(2-x);
        }
        else{
            
            ans=(2-y)+(2-x);
        }
    }
    cout<<ans;
    return 0;
}