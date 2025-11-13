#include<iostream>
using namespace std;
int main(){
    int number,rev=0,last,n;
    cout<<"Enter a number : ";
    cin>>number;
    n=number;
    while(n>0){
        last=n%10;
        rev=rev*10+last;
        n=n/10;
    }
    if(number == rev){
        cout<< " Enter number is pelindrom ";
    }else{
        cout<< " Enter number is not a pelindrom ";
    }
return 0;

}
