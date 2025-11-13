#include<iostream>
using namespace std;
void calculation(int f){
int n;
f=1;
cout<< "Enter number : ";
cin>>n;
for(int i=1;i<=n;i++){
    f=f*i;
}
cout<< " factorial is : "<<f;
}
int main(){
int f;
calculation(f);

}
