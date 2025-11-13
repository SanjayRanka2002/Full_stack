#include<iostream>
using namespace std;
int main(){
    float wcheckbalance,dcheckbalance,deposit,withdraw,remainbalance,balance;
    int select;
    char ch;
    balance=50000;


    do{
            cout<< " 1.   Balance Enquiery"<<endl;
            cout<<  " 2.   Withdraw Payment "<<endl;
            cout<< " 3.   Deposit Payment "<<endl;
            cout<< " Enter a digit for inquiery : ";
            cin>>select;

        switch(select){
        case 1:cout<< " Your Current Balance is : "<<balance<<endl;




        break;
        case 2 :
            if(withdraw<balance){
                cout<< " Enter amount to withdraw : ";
                cin>>withdraw;
                cout<< " Amount "<<withdraw<<" succesfully withdraw "<<endl;
                balance-=withdraw;
                cout<< " Remaininig Balance is : "<<balance<endl;



            }else{
                cout<< " Insufficient balance to withdraw please check balance !! "<<endl;
            }
            break;
        case 3:
            cout<< " Enter a balance to deposite :";
            cin>>deposit;
            cout<< " Balance "<<deposit<<" is succesfully deposite "<<endl;
             deposit+=balance;
            cout<< " current Balance is : "<<balance<<endl;

            break;
        default :
            cout<< " Enter currect alternative !!"<<endl;


        }
        cout<< " if you want to continue press (Y/n)? ";
        cin>>ch;

    }while(ch == 'Y' || ch == 'y');

}
