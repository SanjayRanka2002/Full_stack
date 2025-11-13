#include<iostream>
using namespace std;
int sicalculate(int p,int r,int t){
    int si;
    cout<<" Enter Principal value : ";
    cin>>p;
    cout<<" ENter rate of amount :";
    cin>>r;
    cout<<" Enter time of amount : ";
    cin>>t;

    si=(p*r*t)/100;
    cout<<" Si : "<<si;

}
int main(){
    int p,r,t;
    sicalculate(p,r,t);
    return 0;
}
