#include<iostream>
using namespace std;
int main(){
    int number,last,rev;
    cout<< " Enter a number :";
    cin>>number;
    while(number>0){
        last=number%10;
        rev=rev*10+last;
        number=number/10;
    }
    cout<< " reverse is :"<<rev;

}
