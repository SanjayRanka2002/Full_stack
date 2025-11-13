#include<stdio.h>
//
void main(){
    int select,withdraw,deposit,total;
    int balance=50000;
    printf("1.   Balance Enquiry\n");
    printf("2.   Cash Withdraw\n");
    printf("3.   Cash Deposit\n");

    printf("Please Enter Your Digit...:");
    scanf("%d",&select);

    switch(select){
    case 1:
        printf("Your Account Balance is %d",balance);
        break;
    case 2:
        printf("Enter ammount to withdraw :");
        scanf("%d",&withdraw);
        total=balance-withdraw;
        if(withdraw<balance){
            printf("Your cash Withraw succefully\n");
            printf("Your current account is %d\n",total);
        }else{
            printf("Insufficient fund\n");
        }
    break;
    case 3:
        printf("Enter amount to deposit:");
        scanf("%d",&deposit);
        total=balance+deposit;
        printf("Your Amount is %d",total);
    break;
    default:
        printf("Enter correct input");

    }
}
