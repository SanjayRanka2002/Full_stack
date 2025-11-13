#include<iostream>
using namespace std;
int main(){
    float income,annualincome,gst,remainincome;
    cout<<"Enter Your Income :";
    cin>>income;
    annualincome=income*12;


    if(annualincome>0 && annualincome<=300000){
        gst=annualincome*0;
        remainincome=annualincome-gst;
        cout<<" annual income is : "<<annualincome<<endl;
        cout<< " Your Gst is : "<<gst<<endl;
        cout<<" Remain income is : "<<remainincome<<endl;
    }else if(annualincome>300000 && annualincome<=500000){
          gst=annualincome*0.03;
        remainincome=annualincome-gst;
        cout<<" annual income is : "<<annualincome<<endl;
        cout<< " Your Gst is : "<<gst<<endl;
        cout<<" Remain income is : "<<remainincome<<endl;

    }else if(annualincome>500000 && annualincome<=700000){
           gst=annualincome*0.05;
        remainincome=annualincome-gst;
        cout<<" annual income is : "<<annualincome<<endl;
        cout<< " Your Gst is : "<<gst<<endl;
        cout<<" Remain income is : "<<remainincome<<endl;

    }else {
           gst=annualincome*0.07;
        remainincome=annualincome-gst;
        cout<<" annual income is : "<<annualincome<<endl;
        cout<< " Your Gst is : "<<gst<<endl;
        cout<<" Remain income is : "<<remainincome<<endl;

    }



}
