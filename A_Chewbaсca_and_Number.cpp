#include<iostream>
using namespace std;

int main(){
    int number;
    cin>>number;
    int temp=number;
    int minDigit=1e9;
    int cntDigit=0;
    while(temp>0){
        if(temp%10>0&&temp<minDigit)minDigit=temp;
        temp=temp/10;
        cntDigit++;
    }
    temp=0;
    int div=pow(10,cntDigit-1);
    while(number>0){
        int num=number/div;
        if(num>minDigit){

        }
        else{
            
        }
    }

    

}