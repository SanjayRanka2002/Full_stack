#include<iostream>
using namespace std;

int main(){
    int number,a,b,c,d,e,f,g,h,i;
    cout<<" Enter number :";
    cin>>number;

    a=number/2000;
    number=number%2000;

     b=number/1000;
    number=number%1000;

     c=number/500;
    number=number%500;

     d=number/200;
    number=number%200;

     e=number/100;
    number=number%100;

     f=number/50;
    number=number%50;

     g=number/20;
    number=number%20;

     h=number/10;
    number=number%10;

    i=number/5;
    number=number%5;

    cout<<" 2000  : "<<a<<endl;
    cout<<" 1000  : "<<b<<endl;
    cout<<" 500  : "<<c<<endl;
    cout<<" 200 : "<<d <<endl;
    cout<<" 100  : "<<e<<endl;
    cout<<" 50  : "<<f<<endl;
    cout<<" 20  : "<<g<<endl;
    cout<<" 10  : "<<h<<endl;
    cout<<" 5  : "<<i<<endl;






}
