#include<iostream>
using namespace std;
int main(){
    int number,lastnumber=0;
    cout<<" Enter a number :";
    cin>>number;

    while(number> 0){
            lastnumber=number%10;
            cout<<lastnumber;
            number=number/10;

    }
    return 0;
}
