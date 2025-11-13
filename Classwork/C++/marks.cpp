#include<iostream>
using namespace std;
int main(){
    int marks[5],sum=0,percent;
    for(int i=1;i<=5;i++){
        cout<<"Enter marks:";
        cin>>marks[i];
    }
    for(int i=1;i<=5;i++){
         sum=sum+marks[i];
    }

    percent=sum*100/500;
    cout<<" percent : "<<percent<<endl;
    if(percent>90 && percent<=100){
        cout<<" \n You got A+ ";
    }else if(percent>80 && percent<=90){
        cout<<" You got A ";
    }else if(percent>70 && percent<=80){
        cout<< " \n You got B+ ";
    }else if(percent>60 && percent<=70){
        cout<< " \n You got B ";

    }else if(percent>50 && percent<=60){
        cout<< " \n You got C+ ";

    }else if(percent>40 && percent<=50){
        cout<< " \n you got C ";
    }else {
        cout<< " you are fail in this examination ";
    }

    }



