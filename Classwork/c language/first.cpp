#include<iostream>
using namespace std;
void sicalculate(int p,int r,int t){
    int si;
    cout<<"Enter principal value: ";
    cin>>p;
    cout<<"ENter rate: ";
    cin>>r;
    cout<<"Enter time: ";
    cin>>t;
    si=(p*r*t)/100;
    cout<<"SI is : "<<si;

}
int main(){
    int a=10 ,b=4;
    int p,r,t;
    cout<<a%b<<endl;
    sicalculate(p,t,t);
    return 0;

}
