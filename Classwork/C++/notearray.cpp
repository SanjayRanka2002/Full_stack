#include<iostream>
using namespace std;
int main(){
    int note[]={2000,1000,500,200,100,50,20,10,5};
    int number,cnt;
    cout<<" Enter a number : ";
    cin>>number;

    for(int i=0;i<10;i++){
        cnt=number/note[i];
        cout<<note[i]<<" : "<<cnt<<endl;
        number=number%note[i];

    }
    return 0;
}
