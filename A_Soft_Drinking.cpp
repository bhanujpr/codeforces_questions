#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n;
    cin>>k;
    cin>>l;
    cin>>c;
    cin>>d;
    cin>>p;
    cin>>nl;
    cin>>np;

    int totalDrink=(k*l)/nl;
    int slices=c*d;
    int salt=p/np;

    cout<<min(totalDrink,min(slices,salt))/n;
}