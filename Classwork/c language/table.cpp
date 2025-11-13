#include<iostream>
using namespace std;
int main(){
    int n,range;
    cout<<" Enter a number : ";
    cin>>n;
    cout<<" Enter a range : ";
    cin>>range;
    for(int i=n;i<=n*range;i=i+n){
        cout<<i<<endl;
    }
    return 0;
}
