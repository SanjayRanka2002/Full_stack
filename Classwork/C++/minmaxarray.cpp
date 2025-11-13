#include<iostream>
using namespace std;
void maxarr(int arr[]){
    int minimum=arr[0];
    int maximum=arr[0];
    for(int i=0;i<5 ;i++){
        cout<<" Enter a number : ";
        cin>>arr[i];

    }

    for(int i=0;i<5;i++){
        if(maximum>arr[i]){}
        maximum=arr[i];
    }
    cout<<" maximum is : "<<maximum<<endl;
}
void minarr(int arr[]){
    int minimum=arr[0];
    int maximum=arr[0];
    for(int i=0;i<5 ;i++){
        cout<<" Enter a number : ";
        cin>>arr[i];

    }

    for(int i=0;i<5;i++){
        if(minimum<arr[i]){}
        minimum=arr[i];
    }
    cout<<" manimum is : "<<minimum<<endl;
}
int main(){
    int arr[5];
  //  maxarr(arr);
  minarr(arr);

}
