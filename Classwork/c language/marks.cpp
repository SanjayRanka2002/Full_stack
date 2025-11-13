#include<iostream>
using namespace std;
int main(){
    //Type 1
    /*
    int marks;
    cout<<"Enter a marks to got a grade:";
    cin>>marks;
    if(marks>90 && marks<100){
        cout<<" You Got A+ Grade ";
    }else if(marks>80 && marks<90){
        cout<<" You Got A Grade ";

    }else if(marks>70 && marks<80){
        cout<<" You got B+ Grade ";
    }else if(marks>60 && marks<70){
        cout<<" You got B Grade ";

    }else if(marks>50 && marks<60){
        cout<< " You Got C+ Grade ";
    }else{
        cout<<" You are fail now ";
    }
    */

    //Type 2
    int obtainmarks,totalmarks,percent;
    cout<<"Enter a marks to got: ";
    cin>>obtainmarks;
    cout<<"Enter a marks of total:";
    cin>>totalmarks;
    percent=(obtainmarks*100)/totalmarks;



    switch(percent/10){
    case 10:
     break;
     case 9 :
     cout<<"you got A+ grade ";
     break;
     case 8:
     cout<<"you got A grade ";
     break;
     case 7:
     cout<<"you got B+ grade ";
     break;
     case 6:
     cout<<"you got B grade ";
     break;
     case 5:
     cout<<"you got C+ grade ";
     break;
     case 4:
     cout<<"you got C grade ";
     break;
     case 3:
     cout<<"you got D+S grade ";
     break;
     default :
        cout<<" You are fail ";

    }

    return 0;
}
