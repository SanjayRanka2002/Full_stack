#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int number,arm,sum=0;
    double qube;
    cout<<"Enter your number:";
    cin>>number;
    arm=number;
    while(arm>0){
        sum=sum+pow(arm%10,3);
        arm=arm/10;
    }
    if(number == sum ){
        cout<<"Number is armstrong"<<endl;

    }else{
        cout<<" Number is not armstrong"<<endl;
    }
    return 0;
}
