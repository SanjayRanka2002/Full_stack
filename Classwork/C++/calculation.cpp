#include<iostream>
using namespace std;
void calculation(int a,int b){
    cout<<"enter two numbers : ";
    cin>>a>>b;
    cout<<" sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
}
int main(){
    int a,b;
    calculation(a,b);
    return 0;

}
